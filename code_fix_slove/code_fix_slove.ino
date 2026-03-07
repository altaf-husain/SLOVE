#include <Wire.h>
#include "Adafruit_AS726x.h"
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "RF_jambu.h"
#include "RF_jambu_brix.h"

// OLED display definitions
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
#define OLED_RESET -1    // Reset pin # (or -1 if sharing Arduino reset pin)

// Create the OLED display object
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// Create the AS726x sensor object
Adafruit_AS726x ams;

// Buffer to hold raw values
uint16_t sensorValues[AS726x_NUM_CHANNELS];

// Pin definitions
const int buttonPin = 12;  // Pin connected to the pushbutton
const int ledPin = 3;  // Pin connected to the built-in LED

// Variable to hold the button state
int buttonState = 0;

Eloquent::ML::Port::RandomForest clf; // Assuming RandomForest is correctly initialized
Eloquent::ML::Port::RandomForestRegressor clfb; // Assuming RandomForest is correctly initialized

void loadRandomForestModel(Eloquent::ML::Port::RandomForest &model) {
    // Load classifier model parameters
    // This should contain actual code to load the trained model parameters
}

void loadRandomForestRegressorModel(Eloquent::ML::Port::RandomForestRegressor &model) {
    // Load regressor model parameters
    // This should contain actual code to load the trained model parameters
}

void setup() {
  Serial.begin(9600);
  while(!Serial);

  // Initialize digital pin LED_BUILTIN as an output
  pinMode(ledPin, OUTPUT);

  // Set the button pin as input with internal pull-up
  pinMode(buttonPin, INPUT_PULLUP);

  // Begin and make sure we can talk to the sensor
  if (!ams.begin()) {
    Serial.println("Could not connect to sensor! Please check your wiring.");
    while (1);
  }

  // Initialize the OLED display
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3C for 128x64
    Serial.println(F("SSD1306 allocation failed"));
    while(1);
  }
  display.display(); // Show initial display buffer contents
  delay(2000);       // Pause for 2 seconds

  // Clear the buffer
  display.clearDisplay();

  // Load the machine learning models
  loadRandomForestModel(clf); // Load classifier model parameters
  loadRandomForestRegressorModel(clfb); // Load regressor model parameters
}

void loop() {
  // Read the state of the pushbutton (inverted logic due to pull-up)
  buttonState = digitalRead(buttonPin);

  // Check if the pushbutton is pressed (LOW means pressed due to pull-up)
  if (buttonState == LOW) {
    // Turn the LED off
    digitalWrite(ledPin, LOW);
    
    // Wait for 3 seconds
    delay(1000);
    
    // Turn the LED on
    digitalWrite(ledPin, HIGH);
    
    // Wait for 2 seconds
    delay(2000);

    // Read the sensor data and display Brix value
    readSensorDataAndDisplayBrix();
  } 
  else{
    digitalWrite(ledPin, LOW);
  }
}

void readSensorDataAndDisplayBrix() {
  // Read the device temperature
  uint8_t temp = ams.readTemperature();
  
  ams.startMeasurement(); // Begin a measurement
  
  // Wait till data is available
  bool rdy = false;
  while (!rdy) {
    delay(5);
    rdy = ams.dataReady();
  }

  // Read the values
  ams.readRawValues(sensorValues);

  // Extract sensor values
  float V = sensorValues[AS726x_VIOLET];
  float B = sensorValues[AS726x_BLUE];
  float G = sensorValues[AS726x_GREEN];
  float Y = sensorValues[AS726x_YELLOW];
  float O = sensorValues[AS726x_ORANGE];
  float R = sensorValues[AS726x_RED];
  
  float data[6] = {V, B, G, Y, O, R}; // Assuming 6 sensor readings

  // Make predictions using RandomForest
  float Kondisi = clf.predict(data); 
  float Brix = clfb.predict(data);

  // Print prediction results to Serial monitor
  Serial.print("Brix: "); Serial.println(Brix);

  // Display Brix value on OLED
  display.clearDisplay(); // Clear the display buffer
  
  // Set text size and color
  display.setTextSize(2);      
  display.setTextColor(SSD1306_WHITE);

  // Calculate the width of the text to be centered
  int16_t x1, y1;
  uint16_t textWidth, textHeight;
  String brixText = "Brix:" + String(Brix);
  display.getTextBounds(brixText, 0, 0, &x1, &y1, &textWidth, &textHeight);

  // Set the cursor to center the text
  display.setCursor((SCREEN_WIDTH - textWidth) / 2, (SCREEN_HEIGHT - textHeight) / 2);
  display.print(brixText);

  display.display(); // Show the buffer contents on the display

  delay(2000); // Delay 2 seconds before next measurement
}
