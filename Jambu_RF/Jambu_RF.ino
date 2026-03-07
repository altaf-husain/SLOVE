#include "RF_jambu.h"
#include "RF_jambu_brix.h"
#include <Wire.h>
#include "Adafruit_AS726x.h"

Eloquent::ML::Port::RandomForest clf; // Assuming RandomForest is correctly initialized
Eloquent::ML::Port::RandomForestRegressor clfb; // Assuming RandomForest is correctly initialized




AS726X sensor;

void setup() {
   Wire.begin();
    Serial.begin(115200); // Initialize serial communication
    // Additional setup code if necessary
    sensor.begin();
}



void loop() {
    // Assuming sensor object is declared and initialized somewhere
    sensor.takeMeasurements(); // Assuming this function updates sensor readings
    float V = sensor.getCalibratedViolet();
    float B = sensor.getCalibratedBlue();
    float G = sensor.getCalibratedGreen();
    float Y = sensor.getCalibratedYellow();
    float O = sensor.getCalibratedOrange();
    float R = sensor.getCalibratedRed();
    
    float data[6] = {V, B, G, Y, O, R}; // Assuming 6 sensor readings
    
    // Assuming Kondisi is declared somewhere
    float Kondisi = clf.predict(data); // Make prediction using RandomForest
    float Brix = clfb.predict(data); // Make prediction using RandomForest
        
    Serial.println(Kondisi); // Print prediction result to Serial monitor
    Serial.println(Brix); // Print prediction result to Serial monitor
    delay(2000); // Delay 2 seconds

}
