#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[2] = { 0 };
                        // tree #1
                        if (x[2] <= 48.5) {
                            if (x[3] <= 59.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[5] <= 40.5) {
                                    if (x[1] <= 36.5) {
                                        if (x[1] <= 32.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 36.5) {
                                                if (x[3] <= 63.5) {
                                                    if (x[4] <= 30.5) {
                                                        if (x[4] <= 27.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 61.5) {
                                                                if (x[1] <= 34.5) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 45.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 65.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 32.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 63.5) {
                                            if (x[2] <= 39.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 39.5) {
                                                    if (x[0] <= 39.0) {
                                                        if (x[1] <= 38.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[4] <= 29.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 46.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 69.0) {
                                                    if (x[5] <= 35.0) {
                                                        if (x[3] <= 66.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= 43.5) {
                                        if (x[0] <= 40.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[4] <= 29.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[4] <= 30.5) {
                                                    if (x[5] <= 41.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 69.5) {
                                if (x[0] <= 42.5) {
                                    if (x[0] <= 33.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 32.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 77.5) {
                                    if (x[1] <= 44.5) {
                                        if (x[4] <= 41.0) {
                                            if (x[4] <= 37.5) {
                                                if (x[2] <= 52.5) {
                                                    if (x[1] <= 39.5) {
                                                        if (x[1] <= 38.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 42.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 76.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 45.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 53.5) {
                                            if (x[0] <= 52.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #2
                        if (x[4] <= 33.5) {
                            if (x[2] <= 49.5) {
                                if (x[1] <= 32.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 63.5) {
                                        if (x[2] <= 46.5) {
                                            if (x[5] <= 36.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 41.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 44.5) {
                                                        if (x[1] <= 33.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 39.5) {
                                                                if (x[0] <= 36.0) {
                                                                    if (x[3] <= 61.5) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[5] <= 41.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 34.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[5] <= 39.5) {
                                            if (x[1] <= 33.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 35.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 33.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 66.5) {
                                                            if (x[5] <= 33.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 45.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 65.5) {
                                                if (x[4] <= 31.5) {
                                                    if (x[5] <= 44.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 36.0) {
                                                    if (x[5] <= 42.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 32.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 35.5) {
                                        if (x[1] <= 34.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 49.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 32.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 40.5) {
                                        if (x[0] <= 39.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[4] <= 37.5) {
                                                if (x[4] <= 35.5) {
                                                    if (x[3] <= 74.5) {
                                                        if (x[3] <= 71.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 38.5) {
                                                    if (x[5] <= 41.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 54.5) {
                                            if (x[5] <= 52.0) {
                                                if (x[4] <= 37.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[4] <= 38.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[4] <= 37.5) {
                                                if (x[3] <= 77.5) {
                                                    if (x[2] <= 57.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #3
                        if (x[3] <= 69.5) {
                            if (x[4] <= 27.5) {
                                if (x[3] <= 64.5) {
                                    if (x[1] <= 37.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 38.5) {
                                            if (x[0] <= 32.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 32.5) {
                                    if (x[5] <= 35.5) {
                                        if (x[2] <= 48.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 61.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[5] <= 36.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 36.5) {
                                        if (x[4] <= 29.5) {
                                            if (x[3] <= 63.5) {
                                                if (x[0] <= 34.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 61.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 45.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 65.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 33.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[5] <= 34.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[4] <= 31.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[0] <= 35.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 41.5) {
                                            if (x[3] <= 68.5) {
                                                if (x[2] <= 48.5) {
                                                    if (x[5] <= 42.5) {
                                                        if (x[5] <= 34.5) {
                                                            if (x[3] <= 63.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 35.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 38.5) {
                                                                    if (x[4] <= 29.5) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[5] <= 40.5) {
                                                                            votes[1] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 36.5) {
                                                                                if (x[0] <= 38.5) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[1] += 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 65.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 48.5) {
                                if (x[3] <= 70.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 45.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 58.5) {
                                    if (x[3] <= 74.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 57.5) {
                                            if (x[5] <= 53.5) {
                                                if (x[5] <= 42.5) {
                                                    if (x[0] <= 44.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 43.5) {
                                                        if (x[4] <= 37.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 75.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[5] <= 46.5) {
                                                if (x[0] <= 41.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= 41.5) {
                                        if (x[1] <= 38.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #4
                        if (x[3] <= 69.5) {
                            if (x[3] <= 63.5) {
                                if (x[3] <= 59.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 32.5) {
                                        if (x[0] <= 32.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 61.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 62.5) {
                                            if (x[5] <= 36.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 47.5) {
                                                    if (x[0] <= 36.5) {
                                                        if (x[4] <= 27.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 61.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 61.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[5] <= 40.5) {
                                                                if (x[4] <= 29.5) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 67.5) {
                                    if (x[0] <= 33.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 41.5) {
                                            if (x[3] <= 64.5) {
                                                if (x[0] <= 35.5) {
                                                    if (x[5] <= 36.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 32.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 48.5) {
                                                    if (x[4] <= 29.5) {
                                                        if (x[0] <= 37.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 66.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[2] <= 47.5) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 37.0) {
                                        if (x[3] <= 68.5) {
                                            if (x[5] <= 41.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 68.5) {
                                            if (x[2] <= 48.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[4] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 47.5) {
                                if (x[4] <= 30.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 77.5) {
                                    if (x[0] <= 39.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 62.5) {
                                            if (x[5] <= 43.5) {
                                                if (x[4] <= 37.0) {
                                                    if (x[5] <= 41.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 43.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 57.0) {
                                                    if (x[5] <= 51.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[5] <= 44.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 76.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 43.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 53.5) {
                                        if (x[4] <= 37.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #5
                        if (x[3] <= 69.5) {
                            if (x[3] <= 63.5) {
                                if (x[5] <= 35.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 30.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 59.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 37.0) {
                                                if (x[2] <= 44.5) {
                                                    if (x[0] <= 33.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 34.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 36.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[4] <= 28.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[4] <= 29.5) {
                                                            if (x[1] <= 39.0) {
                                                                if (x[2] <= 43.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 39.5) {
                                    if (x[0] <= 38.5) {
                                        if (x[1] <= 32.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 33.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[5] <= 34.5) {
                                                    if (x[4] <= 32.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 31.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 50.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 42.5) {
                                            if (x[4] <= 32.5) {
                                                if (x[4] <= 31.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[5] <= 44.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 40.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[4] <= 29.5) {
                                            if (x[2] <= 47.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 48.5) {
                                if (x[0] <= 43.0) {
                                    if (x[5] <= 38.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 77.5) {
                                    if (x[0] <= 39.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 57.5) {
                                            if (x[4] <= 37.5) {
                                                if (x[1] <= 40.5) {
                                                    if (x[5] <= 41.0) {
                                                        if (x[1] <= 38.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[4] <= 38.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 76.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 45.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 54.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 81.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #6
                        if (x[4] <= 33.5) {
                            if (x[4] <= 26.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[3] <= 63.5) {
                                    if (x[2] <= 48.5) {
                                        if (x[2] <= 47.5) {
                                            if (x[5] <= 35.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 44.5) {
                                                    if (x[2] <= 43.5) {
                                                        if (x[2] <= 42.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 36.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[4] <= 29.5) {
                                                            if (x[3] <= 61.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[0] <= 37.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 32.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 35.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 32.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 39.5) {
                                        if (x[1] <= 44.0) {
                                            if (x[2] <= 48.5) {
                                                if (x[4] <= 32.5) {
                                                    if (x[0] <= 38.5) {
                                                        if (x[2] <= 47.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 66.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[5] <= 39.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[5] <= 35.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 42.5) {
                                            if (x[5] <= 46.5) {
                                                if (x[4] <= 31.5) {
                                                    if (x[1] <= 41.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 48.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 50.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 46.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 40.5) {
                                if (x[3] <= 69.5) {
                                    if (x[1] <= 34.5) {
                                        if (x[0] <= 37.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 36.5) {
                                            if (x[2] <= 51.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[5] <= 39.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 61.5) {
                                        if (x[4] <= 34.5) {
                                            if (x[1] <= 38.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 38.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 79.5) {
                                    if (x[5] <= 51.5) {
                                        if (x[1] <= 44.5) {
                                            if (x[3] <= 75.5) {
                                                if (x[4] <= 37.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 45.5) {
                                                if (x[0] <= 47.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #7
                        if (x[2] <= 49.5) {
                            if (x[3] <= 63.5) {
                                if (x[3] <= 59.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 34.5) {
                                        if (x[0] <= 37.0) {
                                            if (x[3] <= 62.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 38.5) {
                                            if (x[3] <= 60.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 39.5) {
                                    if (x[5] <= 41.5) {
                                        if (x[4] <= 32.5) {
                                            if (x[5] <= 38.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 48.5) {
                                                    if (x[0] <= 39.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 67.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 66.5) {
                                            if (x[2] <= 48.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[5] <= 43.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 28.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 41.5) {
                                            if (x[2] <= 46.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 47.5) {
                                                    if (x[1] <= 40.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[5] <= 43.5) {
                                if (x[0] <= 42.5) {
                                    if (x[3] <= 63.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 62.5) {
                                            if (x[3] <= 71.5) {
                                                if (x[1] <= 38.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[4] <= 35.5) {
                                                        if (x[4] <= 34.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 39.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 40.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 58.5) {
                                        if (x[1] <= 43.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 69.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[2] <= 53.5) {
                                        if (x[1] <= 45.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 52.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 37.5) {
                                            if (x[5] <= 46.5) {
                                                if (x[1] <= 44.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 42.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #8
                        if (x[3] <= 69.5) {
                            if (x[3] <= 63.5) {
                                if (x[4] <= 29.5) {
                                    if (x[1] <= 37.5) {
                                        if (x[2] <= 43.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 44.5) {
                                                if (x[4] <= 28.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 60.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 62.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[5] <= 38.0) {
                                                    if (x[2] <= 45.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 34.5) {
                                        if (x[3] <= 60.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 33.5) {
                                                if (x[2] <= 46.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 43.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 64.5) {
                                        if (x[4] <= 33.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 49.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 38.5) {
                                            if (x[1] <= 36.5) {
                                                if (x[2] <= 46.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 35.0) {
                                                        if (x[0] <= 35.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 52.5) {
                                                            if (x[2] <= 48.5) {
                                                                if (x[5] <= 38.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[4] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 52.0) {
                                                        if (x[0] <= 34.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 39.5) {
                                                if (x[5] <= 45.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[5] <= 40.0) {
                                                    if (x[1] <= 40.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 49.0) {
                                if (x[4] <= 32.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[5] <= 43.5) {
                                    if (x[5] <= 38.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 79.5) {
                                            if (x[4] <= 34.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 41.0) {
                                                    if (x[4] <= 40.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[5] <= 42.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[4] <= 37.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 54.5) {
                                        if (x[4] <= 37.5) {
                                            if (x[1] <= 44.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 77.5) {
                                                    if (x[4] <= 36.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 52.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 81.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #9
                        if (x[2] <= 48.5) {
                            if (x[3] <= 63.5) {
                                if (x[1] <= 36.5) {
                                    if (x[3] <= 60.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[5] <= 35.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[4] <= 29.5) {
                                                if (x[0] <= 37.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 35.0) {
                                                    if (x[1] <= 33.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 27.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[5] <= 40.5) {
                                            if (x[2] <= 44.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 45.5) {
                                                    if (x[5] <= 36.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 39.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 31.5) {
                                    if (x[0] <= 37.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 47.5) {
                                            if (x[5] <= 39.5) {
                                                if (x[5] <= 37.5) {
                                                    if (x[2] <= 45.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 64.5) {
                                                    if (x[2] <= 43.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 69.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 47.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 53.5) {
                                if (x[5] <= 52.0) {
                                    if (x[0] <= 51.5) {
                                        if (x[5] <= 40.5) {
                                            if (x[4] <= 31.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[5] <= 37.5) {
                                                    if (x[3] <= 66.5) {
                                                        if (x[0] <= 33.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 36.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 45.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 47.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[5] <= 42.5) {
                                    if (x[1] <= 42.5) {
                                        if (x[4] <= 41.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 64.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 42.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 45.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[5] <= 46.5) {
                                            if (x[2] <= 59.0) {
                                                if (x[5] <= 45.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #10
                        if (x[3] <= 69.5) {
                            if (x[3] <= 63.5) {
                                if (x[3] <= 59.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 37.0) {
                                        if (x[5] <= 35.5) {
                                            if (x[3] <= 62.5) {
                                                if (x[4] <= 30.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 32.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[4] <= 30.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 31.5) {
                                    if (x[5] <= 37.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[5] <= 44.5) {
                                            if (x[2] <= 47.5) {
                                                if (x[1] <= 36.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 42.0) {
                                                        if (x[2] <= 46.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 67.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 39.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 40.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 33.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 48.5) {
                                            if (x[5] <= 34.5) {
                                                if (x[5] <= 33.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 43.5) {
                                                if (x[1] <= 34.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 76.5) {
                                if (x[4] <= 41.0) {
                                    if (x[0] <= 42.5) {
                                        if (x[2] <= 47.5) {
                                            if (x[5] <= 38.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 52.5) {
                                                if (x[1] <= 38.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 41.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[5] <= 41.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 37.5) {
                                            if (x[3] <= 75.5) {
                                                if (x[1] <= 45.5) {
                                                    if (x[3] <= 72.5) {
                                                        if (x[2] <= 51.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 45.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 53.5) {
                                    if (x[5] <= 52.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 46.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 78.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #11
                        if (x[2] <= 49.5) {
                            if (x[2] <= 43.5) {
                                if (x[5] <= 36.5) {
                                    if (x[1] <= 32.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 63.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 65.0) {
                                        if (x[0] <= 30.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 38.5) {
                                    if (x[1] <= 37.5) {
                                        if (x[4] <= 31.5) {
                                            if (x[4] <= 29.5) {
                                                if (x[2] <= 44.5) {
                                                    if (x[5] <= 35.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[5] <= 36.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[5] <= 38.5) {
                                                                if (x[1] <= 35.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 38.5) {
                                                    if (x[5] <= 36.5) {
                                                        if (x[0] <= 32.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[4] <= 30.5) {
                                                                if (x[5] <= 35.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 44.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[5] <= 32.5) {
                                                if (x[4] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[5] <= 34.5) {
                                                    if (x[5] <= 33.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 66.0) {
                                                            if (x[1] <= 33.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 33.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[4] <= 29.5) {
                                                if (x[3] <= 63.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 27.5) {
                                        if (x[3] <= 63.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 40.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 41.5) {
                                                if (x[4] <= 28.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 45.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 53.5) {
                                if (x[0] <= 51.5) {
                                    if (x[5] <= 44.5) {
                                        if (x[1] <= 32.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[4] <= 35.5) {
                                                if (x[1] <= 39.5) {
                                                    if (x[4] <= 33.5) {
                                                        if (x[1] <= 36.5) {
                                                            if (x[1] <= 34.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 43.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[4] <= 38.5) {
                                    if (x[0] <= 44.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 77.5) {
                                            if (x[1] <= 44.5) {
                                                if (x[5] <= 42.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 43.5) {
                                                        if (x[4] <= 37.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 62.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 77.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #12
                        if (x[3] <= 69.5) {
                            if (x[3] <= 63.5) {
                                if (x[5] <= 35.5) {
                                    if (x[4] <= 30.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 60.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 34.0) {
                                                if (x[5] <= 32.5) {
                                                    if (x[0] <= 35.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 42.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[5] <= 37.5) {
                                            if (x[3] <= 59.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 40.0) {
                                                    if (x[4] <= 28.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 45.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 44.5) {
                                                if (x[3] <= 61.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 43.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 34.5) {
                                    if (x[5] <= 39.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 65.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[4] <= 31.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 64.5) {
                                        if (x[4] <= 32.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 45.5) {
                                            if (x[1] <= 40.5) {
                                                if (x[5] <= 39.5) {
                                                    if (x[5] <= 38.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 41.5) {
                                                    if (x[3] <= 66.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[5] <= 46.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[5] <= 51.5) {
                                if (x[5] <= 42.5) {
                                    if (x[0] <= 39.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[4] <= 40.5) {
                                            if (x[2] <= 52.5) {
                                                if (x[1] <= 41.5) {
                                                    if (x[2] <= 51.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 77.5) {
                                        if (x[1] <= 44.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 45.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 54.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #13
                        if (x[1] <= 36.5) {
                            if (x[2] <= 48.5) {
                                if (x[2] <= 46.5) {
                                    if (x[3] <= 59.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[4] <= 28.5) {
                                            if (x[3] <= 61.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 63.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 32.5) {
                                                if (x[3] <= 62.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[4] <= 29.5) {
                                                    if (x[1] <= 34.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 31.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[5] <= 36.5) {
                                            if (x[2] <= 47.5) {
                                                if (x[3] <= 59.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 37.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 33.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 38.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 43.0) {
                                    if (x[3] <= 68.5) {
                                        if (x[5] <= 32.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 32.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 49.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 69.5) {
                                if (x[0] <= 33.5) {
                                    if (x[0] <= 32.5) {
                                        if (x[2] <= 42.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 38.5) {
                                        if (x[3] <= 63.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 37.5) {
                                                if (x[3] <= 66.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 47.5) {
                                            if (x[5] <= 39.5) {
                                                if (x[0] <= 39.5) {
                                                    if (x[0] <= 37.0) {
                                                        if (x[5] <= 38.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 47.5) {
                                    if (x[0] <= 43.0) {
                                        if (x[1] <= 41.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[5] <= 54.5) {
                                        if (x[3] <= 77.5) {
                                            if (x[0] <= 42.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 44.5) {
                                                    if (x[1] <= 42.5) {
                                                        if (x[4] <= 35.5) {
                                                            if (x[2] <= 53.0) {
                                                                if (x[5] <= 45.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 44.5) {
                                                            if (x[2] <= 52.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 45.5) {
                                                                if (x[2] <= 53.5) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    if (x[5] <= 43.5) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 45.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 55.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 52.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #14
                        if (x[3] <= 69.5) {
                            if (x[1] <= 32.5) {
                                if (x[3] <= 59.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[4] <= 30.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 38.5) {
                                    if (x[3] <= 63.5) {
                                        if (x[4] <= 27.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 44.5) {
                                                if (x[3] <= 61.0) {
                                                    if (x[1] <= 33.5) {
                                                        if (x[0] <= 34.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[5] <= 35.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 37.0) {
                                                        if (x[4] <= 30.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[5] <= 36.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 33.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[4] <= 31.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 65.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[5] <= 42.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= 45.5) {
                                        if (x[4] <= 30.5) {
                                            if (x[4] <= 29.5) {
                                                if (x[5] <= 39.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 40.5) {
                                                        if (x[3] <= 59.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 38.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[5] <= 41.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[5] <= 43.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 39.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[5] <= 51.5) {
                                if (x[4] <= 41.5) {
                                    if (x[0] <= 41.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 77.5) {
                                            if (x[3] <= 75.5) {
                                                if (x[0] <= 43.5) {
                                                    if (x[1] <= 39.5) {
                                                        if (x[5] <= 41.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 37.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[4] <= 37.5) {
                                                    if (x[4] <= 36.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 41.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 55.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #15
                        if (x[2] <= 48.5) {
                            if (x[2] <= 47.5) {
                                if (x[5] <= 31.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 63.5) {
                                        if (x[5] <= 35.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 59.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 62.5) {
                                                    if (x[0] <= 36.5) {
                                                        if (x[1] <= 35.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 37.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 64.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 35.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 38.5) {
                                                    if (x[3] <= 70.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 38.0) {
                                    if (x[5] <= 32.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 64.5) {
                                            if (x[3] <= 60.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 69.0) {
                                                if (x[1] <= 34.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[4] <= 32.5) {
                                                        if (x[5] <= 36.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 31.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[3] <= 69.5) {
                                    if (x[5] <= 36.5) {
                                        if (x[5] <= 34.5) {
                                            if (x[0] <= 37.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 43.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= 43.5) {
                                        if (x[1] <= 42.5) {
                                            if (x[4] <= 41.5) {
                                                if (x[0] <= 42.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 53.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 64.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 79.0) {
                                                if (x[3] <= 73.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[4] <= 36.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 44.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 45.5) {
                                                if (x[3] <= 78.0) {
                                                    if (x[2] <= 56.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[5] <= 53.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 55.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #16
                        if (x[2] <= 48.5) {
                            if (x[1] <= 35.5) {
                                if (x[5] <= 35.5) {
                                    if (x[3] <= 64.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[5] <= 33.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 59.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[4] <= 32.0) {
                                            if (x[5] <= 39.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 63.5) {
                                    if (x[5] <= 39.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[5] <= 40.5) {
                                            if (x[4] <= 30.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 38.5) {
                                        if (x[0] <= 33.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 65.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 34.5) {
                                                    if (x[4] <= 31.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 46.5) {
                                            if (x[5] <= 42.5) {
                                                if (x[5] <= 41.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[5] <= 43.5) {
                                                    if (x[1] <= 39.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 32.5) {
                                if (x[3] <= 61.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 54.5) {
                                    if (x[1] <= 40.5) {
                                        if (x[5] <= 44.5) {
                                            if (x[5] <= 43.5) {
                                                if (x[1] <= 35.5) {
                                                    if (x[3] <= 67.5) {
                                                        if (x[4] <= 32.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 62.5) {
                                                        if (x[0] <= 46.5) {
                                                            if (x[2] <= 52.5) {
                                                                if (x[4] <= 34.5) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 38.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 35.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 70.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 38.5) {
                                            if (x[0] <= 44.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 50.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 45.5) {
                                                        if (x[4] <= 36.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[5] <= 46.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= 49.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[4] <= 40.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #17
                        if (x[2] <= 49.5) {
                            if (x[4] <= 26.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[3] <= 59.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[5] <= 44.5) {
                                        if (x[1] <= 36.5) {
                                            if (x[0] <= 33.5) {
                                                if (x[5] <= 32.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 34.5) {
                                                    if (x[2] <= 47.5) {
                                                        if (x[4] <= 28.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 30.5) {
                                                        if (x[5] <= 37.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 35.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 45.5) {
                                                if (x[3] <= 63.5) {
                                                    if (x[0] <= 31.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 39.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 62.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 32.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 65.5) {
                                                    if (x[2] <= 47.0) {
                                                        if (x[1] <= 39.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 34.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[4] <= 30.0) {
                                                            if (x[5] <= 40.0) {
                                                                if (x[1] <= 40.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 48.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 40.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 69.5) {
                                if (x[3] <= 63.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 39.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 79.5) {
                                    if (x[4] <= 37.5) {
                                        if (x[1] <= 39.5) {
                                            if (x[1] <= 38.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[4] <= 35.5) {
                                                    if (x[5] <= 41.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 52.0) {
                                            if (x[2] <= 62.5) {
                                                if (x[2] <= 54.5) {
                                                    if (x[5] <= 45.5) {
                                                        if (x[4] <= 39.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 77.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #18
                        if (x[3] <= 69.5) {
                            if (x[4] <= 27.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 32.5) {
                                    if (x[2] <= 48.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 62.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 33.5) {
                                        if (x[3] <= 63.5) {
                                            if (x[5] <= 35.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 32.5) {
                                            if (x[2] <= 44.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 38.5) {
                                                    if (x[3] <= 61.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 67.5) {
                                                            if (x[1] <= 37.5) {
                                                                if (x[2] <= 46.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    if (x[3] <= 63.5) {
                                                                        if (x[2] <= 47.5) {
                                                                            votes[0] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 35.0) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                votes[1] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[4] <= 31.5) {
                                                                if (x[4] <= 29.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 40.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[5] <= 45.5) {
                                                            if (x[2] <= 46.5) {
                                                                if (x[5] <= 43.5) {
                                                                    if (x[1] <= 37.5) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[5] <= 38.0) {
                                                                            votes[1] += 1;
                                                                        }

                                                                        else {
                                                                            votes[0] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 52.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[5] <= 44.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 53.5) {
                                if (x[5] <= 51.5) {
                                    if (x[2] <= 47.5) {
                                        if (x[4] <= 30.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 34.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 39.5) {
                                                if (x[1] <= 38.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 58.5) {
                                    if (x[2] <= 57.5) {
                                        if (x[4] <= 37.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 75.5) {
                                                if (x[4] <= 38.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 79.0) {
                                            if (x[4] <= 36.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 40.0) {
                                        if (x[5] <= 39.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 79.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #19
                        if (x[2] <= 49.5) {
                            if (x[3] <= 60.5) {
                                if (x[2] <= 42.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[4] <= 28.5) {
                                        if (x[1] <= 32.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 36.0) {
                                                if (x[0] <= 34.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[5] <= 39.5) {
                                    if (x[4] <= 32.5) {
                                        if (x[3] <= 63.5) {
                                            if (x[4] <= 30.5) {
                                                if (x[1] <= 34.5) {
                                                    if (x[1] <= 33.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 31.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 38.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 45.5) {
                                                                if (x[0] <= 37.5) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[5] <= 37.5) {
                                                if (x[5] <= 36.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 34.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 67.5) {
                                                    if (x[1] <= 36.5) {
                                                        if (x[5] <= 38.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 36.0) {
                                        if (x[4] <= 31.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 48.5) {
                                            if (x[3] <= 64.5) {
                                                if (x[2] <= 44.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[5] <= 41.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[4] <= 29.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 43.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 69.5) {
                                if (x[3] <= 67.5) {
                                    if (x[5] <= 34.5) {
                                        if (x[5] <= 33.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 35.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 36.5) {
                                            if (x[4] <= 33.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 39.5) {
                                    if (x[5] <= 38.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[4] <= 40.5) {
                                            if (x[5] <= 41.0) {
                                                if (x[3] <= 70.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 79.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 79.5) {
                                        if (x[0] <= 53.5) {
                                            if (x[4] <= 36.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[4] <= 38.5) {
                                                    if (x[3] <= 78.0) {
                                                        if (x[1] <= 42.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #20
                        if (x[2] <= 48.5) {
                            if (x[3] <= 59.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 34.5) {
                                    if (x[2] <= 45.5) {
                                        if (x[1] <= 37.5) {
                                            if (x[3] <= 64.0) {
                                                if (x[0] <= 33.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 33.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 67.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 33.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 29.5) {
                                        if (x[3] <= 69.5) {
                                            if (x[4] <= 27.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 61.0) {
                                                    if (x[1] <= 34.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 67.5) {
                                                        if (x[1] <= 36.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 37.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[2] <= 44.5) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    if (x[1] <= 40.5) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 41.5) {
                                                                            if (x[5] <= 38.0) {
                                                                                votes[1] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[0] <= 44.5) {
                                                                                    votes[0] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 43.5) {
                                            if (x[1] <= 40.5) {
                                                if (x[3] <= 63.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[5] <= 39.0) {
                                                        if (x[1] <= 36.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[4] <= 32.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 42.5) {
                                                            if (x[2] <= 47.5) {
                                                                if (x[0] <= 39.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    if (x[4] <= 31.0) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 69.5) {
                                if (x[2] <= 51.5) {
                                    if (x[5] <= 49.0) {
                                        if (x[0] <= 41.5) {
                                            if (x[1] <= 31.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 43.5) {
                                        if (x[1] <= 34.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 39.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[4] <= 36.5) {
                                        if (x[5] <= 41.0) {
                                            if (x[0] <= 41.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 77.5) {
                                            if (x[2] <= 53.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 41.0) {
                                                    if (x[5] <= 46.5) {
                                                        if (x[1] <= 38.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[5] <= 52.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 54.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #21
                        if (x[3] <= 69.5) {
                            if (x[2] <= 48.5) {
                                if (x[1] <= 32.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 63.5) {
                                        if (x[0] <= 36.5) {
                                            if (x[5] <= 36.5) {
                                                if (x[2] <= 46.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[5] <= 34.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 58.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 61.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 38.5) {
                                                    if (x[5] <= 39.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 45.5) {
                                                            if (x[4] <= 30.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[5] <= 44.5) {
                                            if (x[0] <= 33.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[5] <= 37.5) {
                                                    if (x[0] <= 38.5) {
                                                        if (x[4] <= 32.5) {
                                                            if (x[5] <= 35.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 47.5) {
                                                        if (x[5] <= 39.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[4] <= 30.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 65.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 41.5) {
                                    if (x[0] <= 33.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 33.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 34.5) {
                                                if (x[2] <= 50.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 47.5) {
                                if (x[0] <= 55.5) {
                                    if (x[2] <= 47.5) {
                                        if (x[2] <= 45.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 43.5) {
                                            if (x[2] <= 62.5) {
                                                if (x[1] <= 42.5) {
                                                    if (x[2] <= 52.5) {
                                                        if (x[4] <= 34.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 34.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 37.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[5] <= 38.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 80.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 44.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 50.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 47.5) {
                                                        if (x[0] <= 44.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 45.5) {
                                                                if (x[5] <= 47.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #22
                        if (x[4] <= 33.5) {
                            if (x[3] <= 69.5) {
                                if (x[4] <= 27.5) {
                                    if (x[0] <= 29.5) {
                                        if (x[2] <= 37.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 58.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 31.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 59.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[4] <= 28.5) {
                                                if (x[1] <= 39.5) {
                                                    if (x[3] <= 62.5) {
                                                        if (x[5] <= 34.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[5] <= 35.0) {
                                                            if (x[5] <= 33.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 39.5) {
                                                    if (x[4] <= 32.5) {
                                                        if (x[0] <= 38.5) {
                                                            if (x[3] <= 60.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[2] <= 44.5) {
                                                                    if (x[3] <= 62.0) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[3] <= 66.5) {
                                                                        if (x[4] <= 29.5) {
                                                                            if (x[2] <= 45.5) {
                                                                                votes[1] += 1;
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[0] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[5] <= 38.5) {
                                                                            votes[0] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 36.5) {
                                                                                votes[1] += 1;
                                                                            }

                                                                            else {
                                                                                votes[0] += 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 67.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= 64.5) {
                                                            if (x[1] <= 32.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 41.5) {
                                                        if (x[0] <= 40.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 45.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 41.5) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 49.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 51.5) {
                                    if (x[4] <= 38.5) {
                                        if (x[4] <= 36.5) {
                                            if (x[3] <= 71.5) {
                                                if (x[0] <= 41.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 57.5) {
                                                if (x[2] <= 54.5) {
                                                    if (x[3] <= 74.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[5] <= 49.0) {
                                                    if (x[0] <= 44.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 55.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #23
                        if (x[2] <= 48.5) {
                            if (x[1] <= 32.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[3] <= 60.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 38.5) {
                                        if (x[0] <= 32.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 66.5) {
                                                if (x[5] <= 33.5) {
                                                    if (x[4] <= 30.5) {
                                                        if (x[2] <= 45.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 34.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 37.5) {
                                                        if (x[0] <= 36.5) {
                                                            if (x[4] <= 29.5) {
                                                                if (x[5] <= 36.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    if (x[0] <= 35.5) {
                                                                        if (x[5] <= 37.5) {
                                                                            if (x[3] <= 61.5) {
                                                                                votes[0] += 1;
                                                                            }

                                                                            else {
                                                                                votes[1] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[0] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[5] <= 43.5) {
                                                    if (x[3] <= 70.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 44.5) {
                                            if (x[5] <= 40.5) {
                                                if (x[4] <= 29.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[5] <= 41.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 46.5) {
                                                    if (x[3] <= 64.5) {
                                                        if (x[3] <= 63.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 69.5) {
                                if (x[0] <= 41.5) {
                                    if (x[0] <= 33.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 36.0) {
                                            if (x[4] <= 31.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 79.5) {
                                    if (x[4] <= 36.5) {
                                        if (x[0] <= 41.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 39.5) {
                                                if (x[2] <= 52.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 53.0) {
                                            if (x[1] <= 42.5) {
                                                if (x[4] <= 41.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 40.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 76.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 57.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 59.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #24
                        if (x[2] <= 49.5) {
                            if (x[3] <= 63.5) {
                                if (x[1] <= 33.5) {
                                    if (x[3] <= 59.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 61.5) {
                                            if (x[4] <= 28.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 32.5) {
                                                    if (x[4] <= 30.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 60.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 34.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 39.5) {
                                                if (x[2] <= 40.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 62.5) {
                                                        if (x[0] <= 39.5) {
                                                            if (x[5] <= 33.5) {
                                                                if (x[4] <= 29.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 36.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[5] <= 36.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[5] <= 37.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 31.5) {
                                    if (x[1] <= 38.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 42.0) {
                                            if (x[5] <= 40.0) {
                                                if (x[5] <= 38.5) {
                                                    if (x[1] <= 41.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 40.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 46.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 33.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 41.5) {
                                            if (x[2] <= 48.5) {
                                                if (x[4] <= 32.5) {
                                                    if (x[5] <= 37.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 69.5) {
                                if (x[2] <= 51.5) {
                                    if (x[0] <= 40.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 53.5) {
                                        if (x[0] <= 43.5) {
                                            if (x[2] <= 52.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 36.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 77.5) {
                                        if (x[1] <= 42.5) {
                                            if (x[3] <= 75.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[4] <= 40.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[4] <= 38.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[5] <= 53.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[5] <= 55.0) {
                                                if (x[1] <= 46.5) {
                                                    if (x[1] <= 44.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #25
                        if (x[3] <= 69.5) {
                            if (x[3] <= 63.5) {
                                if (x[1] <= 36.5) {
                                    if (x[1] <= 31.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 30.5) {
                                            if (x[4] <= 30.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 38.5) {
                                        if (x[5] <= 39.0) {
                                            if (x[3] <= 58.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 39.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[5] <= 40.5) {
                                                if (x[3] <= 62.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 38.5) {
                                    if (x[0] <= 33.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 65.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[5] <= 43.5) {
                                                if (x[4] <= 31.5) {
                                                    if (x[5] <= 36.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 48.5) {
                                        if (x[3] <= 64.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[4] <= 29.5) {
                                                if (x[1] <= 41.5) {
                                                    if (x[1] <= 40.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 68.5) {
                                            if (x[0] <= 43.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 77.5) {
                                if (x[4] <= 40.5) {
                                    if (x[5] <= 51.5) {
                                        if (x[0] <= 43.5) {
                                            if (x[2] <= 47.5) {
                                                if (x[1] <= 41.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 41.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 42.5) {
                                                        if (x[4] <= 34.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[5] <= 37.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[3] <= 71.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[4] <= 36.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 49.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 53.5) {
                                    if (x[3] <= 80.0) {
                                        if (x[0] <= 48.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #26
                        if (x[3] <= 69.5) {
                            if (x[3] <= 63.5) {
                                if (x[3] <= 59.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 35.5) {
                                        if (x[1] <= 33.5) {
                                            if (x[3] <= 60.5) {
                                                if (x[0] <= 32.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 31.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 34.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[4] <= 28.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 38.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[5] <= 38.0) {
                                                if (x[2] <= 45.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[5] <= 42.5) {
                                    if (x[4] <= 31.5) {
                                        if (x[2] <= 46.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 38.5) {
                                                if (x[0] <= 40.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 39.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 47.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 34.5) {
                                            if (x[0] <= 33.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 38.5) {
                                                    if (x[0] <= 37.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 64.5) {
                                        if (x[2] <= 43.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 36.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[5] <= 42.5) {
                                if (x[3] <= 75.5) {
                                    if (x[1] <= 38.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 39.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[5] <= 41.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 73.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[4] <= 35.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 72.5) {
                                    if (x[4] <= 35.5) {
                                        if (x[2] <= 49.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 53.5) {
                                        if (x[5] <= 51.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 37.5) {
                                            if (x[2] <= 57.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[5] <= 45.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 76.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #27
                        if (x[2] <= 49.5) {
                            if (x[3] <= 63.5) {
                                if (x[2] <= 48.5) {
                                    if (x[4] <= 26.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 29.5) {
                                            if (x[3] <= 60.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 32.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 36.5) {
                                                    if (x[5] <= 36.5) {
                                                        if (x[2] <= 46.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 35.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 35.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 37.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[5] <= 39.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[5] <= 40.5) {
                                                            if (x[0] <= 45.5) {
                                                                if (x[3] <= 62.5) {
                                                                    if (x[1] <= 36.5) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[5] <= 39.5) {
                                    if (x[1] <= 36.5) {
                                        if (x[0] <= 33.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 46.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[5] <= 38.0) {
                                                if (x[3] <= 66.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[4] <= 30.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[4] <= 32.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 29.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 64.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 36.0) {
                                                if (x[5] <= 42.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 48.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 43.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[5] <= 43.5) {
                                if (x[2] <= 54.5) {
                                    if (x[2] <= 53.5) {
                                        if (x[0] <= 33.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 33.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[4] <= 34.5) {
                                                    if (x[5] <= 34.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 47.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 35.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 45.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 36.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[5] <= 39.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 76.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 41.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 79.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[5] <= 46.5) {
                                    if (x[3] <= 69.5) {
                                        if (x[1] <= 36.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 37.5) {
                                            if (x[1] <= 44.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 55.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= 54.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 55.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #28
                        if (x[2] <= 49.5) {
                            if (x[1] <= 35.5) {
                                if (x[1] <= 31.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[2] <= 47.5) {
                                        if (x[4] <= 29.5) {
                                            if (x[1] <= 33.5) {
                                                if (x[1] <= 32.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 59.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 65.5) {
                                                if (x[4] <= 31.5) {
                                                    if (x[4] <= 30.5) {
                                                        if (x[5] <= 37.0) {
                                                            if (x[3] <= 61.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[2] <= 45.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 34.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 38.5) {
                                    if (x[3] <= 63.5) {
                                        if (x[0] <= 30.5) {
                                            if (x[0] <= 28.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 31.5) {
                                            if (x[1] <= 39.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 41.5) {
                                                    if (x[3] <= 67.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[5] <= 37.5) {
                                                if (x[4] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 41.5) {
                                        if (x[2] <= 44.5) {
                                            if (x[5] <= 40.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[5] <= 45.5) {
                                                if (x[4] <= 29.5) {
                                                    if (x[1] <= 40.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 47.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 69.5) {
                                if (x[2] <= 51.5) {
                                    if (x[1] <= 38.5) {
                                        if (x[2] <= 50.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[4] <= 32.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 42.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[5] <= 43.5) {
                                    if (x[0] <= 39.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 77.0) {
                                            if (x[4] <= 37.0) {
                                                if (x[0] <= 42.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 44.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 58.5) {
                                        if (x[4] <= 38.5) {
                                            if (x[0] <= 45.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 57.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 81.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 80.5) {
                                                if (x[3] <= 78.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #29
                        if (x[2] <= 50.5) {
                            if (x[4] <= 26.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 38.5) {
                                    if (x[3] <= 59.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[4] <= 31.5) {
                                            if (x[2] <= 44.5) {
                                                if (x[4] <= 29.5) {
                                                    if (x[0] <= 34.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 34.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[4] <= 29.5) {
                                                    if (x[2] <= 46.5) {
                                                        if (x[3] <= 63.5) {
                                                            if (x[5] <= 36.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 63.5) {
                                                        if (x[5] <= 34.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 47.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 33.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 41.5) {
                                        if (x[2] <= 48.5) {
                                            if (x[1] <= 40.5) {
                                                if (x[2] <= 45.5) {
                                                    if (x[5] <= 42.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 40.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 41.5) {
                                                    if (x[3] <= 65.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 66.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[5] <= 44.5) {
                                if (x[4] <= 37.5) {
                                    if (x[3] <= 72.5) {
                                        if (x[2] <= 52.5) {
                                            if (x[1] <= 35.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 40.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[4] <= 36.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 39.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 75.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[4] <= 40.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 79.5) {
                                    if (x[0] <= 53.0) {
                                        if (x[1] <= 44.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 57.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 47.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #30
                        if (x[2] <= 49.5) {
                            if (x[5] <= 35.5) {
                                if (x[3] <= 64.5) {
                                    if (x[2] <= 48.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 33.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 44.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[4] <= 32.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 36.5) {
                                    if (x[2] <= 42.5) {
                                        if (x[3] <= 60.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 31.5) {
                                            if (x[4] <= 28.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 36.5) {
                                                    if (x[3] <= 61.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 34.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 46.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[4] <= 30.5) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 63.5) {
                                        if (x[0] <= 40.5) {
                                            if (x[3] <= 61.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 39.0) {
                                                    if (x[4] <= 29.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 32.5) {
                                            if (x[4] <= 31.5) {
                                                if (x[0] <= 42.0) {
                                                    if (x[2] <= 46.5) {
                                                        if (x[3] <= 64.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[4] <= 30.5) {
                                                            if (x[2] <= 47.5) {
                                                                if (x[3] <= 67.5) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 67.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 54.5) {
                                if (x[0] <= 51.5) {
                                    if (x[1] <= 32.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 43.5) {
                                            if (x[0] <= 41.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[5] <= 42.5) {
                                                    if (x[2] <= 51.5) {
                                                        if (x[3] <= 71.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 69.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 53.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[5] <= 44.0) {
                                                                if (x[0] <= 46.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[4] <= 37.5) {
                                    if (x[5] <= 46.5) {
                                        if (x[1] <= 44.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 40.5) {
                                        if (x[4] <= 41.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 79.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #31
                        if (x[1] <= 36.5) {
                            if (x[4] <= 30.5) {
                                if (x[1] <= 35.5) {
                                    if (x[3] <= 59.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 32.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[5] <= 36.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 44.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 47.5) {
                                        if (x[5] <= 35.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 49.5) {
                                    if (x[2] <= 46.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[4] <= 31.5) {
                                            if (x[5] <= 36.5) {
                                                if (x[0] <= 33.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 32.5) {
                                                if (x[3] <= 60.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 35.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 52.5) {
                                        if (x[5] <= 38.0) {
                                            if (x[4] <= 31.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 32.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 69.5) {
                                if (x[0] <= 33.5) {
                                    if (x[0] <= 31.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 42.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 38.5) {
                                        if (x[0] <= 38.5) {
                                            if (x[3] <= 63.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 66.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[4] <= 31.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 39.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 37.5) {
                                                    if (x[5] <= 39.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[4] <= 30.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 63.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[5] <= 40.0) {
                                                if (x[1] <= 40.5) {
                                                    if (x[4] <= 28.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 65.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 48.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 41.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 72.5) {
                                    if (x[5] <= 51.5) {
                                        if (x[4] <= 34.5) {
                                            if (x[0] <= 38.5) {
                                                if (x[2] <= 47.5) {
                                                    if (x[1] <= 41.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[5] <= 39.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 52.5) {
                                                    if (x[2] <= 51.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[5] <= 41.5) {
                                        if (x[5] <= 39.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[4] <= 41.5) {
                                                if (x[1] <= 42.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 77.5) {
                                            if (x[0] <= 44.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 57.0) {
                                                    if (x[5] <= 43.5) {
                                                        if (x[4] <= 37.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #32
                        if (x[1] <= 36.5) {
                            if (x[5] <= 42.5) {
                                if (x[2] <= 46.5) {
                                    if (x[4] <= 27.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 25.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[5] <= 35.5) {
                                                if (x[1] <= 35.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 33.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 36.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 68.5) {
                                        if (x[4] <= 31.5) {
                                            if (x[1] <= 34.5) {
                                                if (x[5] <= 38.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 35.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[4] <= 30.5) {
                                                        if (x[0] <= 39.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[4] <= 32.5) {
                                                if (x[2] <= 49.5) {
                                                    if (x[0] <= 31.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 44.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 33.5) {
                                if (x[3] <= 69.5) {
                                    if (x[4] <= 31.5) {
                                        if (x[0] <= 37.0) {
                                            if (x[4] <= 26.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[5] <= 35.5) {
                                                    if (x[4] <= 29.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 38.5) {
                                                if (x[3] <= 61.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[4] <= 29.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 37.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 65.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 79.5) {
                                    if (x[5] <= 51.5) {
                                        if (x[0] <= 51.5) {
                                            if (x[4] <= 41.5) {
                                                if (x[5] <= 42.5) {
                                                    if (x[0] <= 41.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 39.5) {
                                                            if (x[4] <= 37.0) {
                                                                if (x[3] <= 71.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[5] <= 46.5) {
                                                        if (x[0] <= 46.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[5] <= 45.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[2] <= 59.0) {
                                                                    if (x[0] <= 49.0) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #33
                        if (x[1] <= 35.5) {
                            if (x[1] <= 32.5) {
                                if (x[2] <= 48.5) {
                                    if (x[4] <= 27.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 59.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 31.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 62.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 46.0) {
                                    if (x[1] <= 33.5) {
                                        if (x[0] <= 28.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[5] <= 36.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[4] <= 30.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 60.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 61.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 63.5) {
                                        if (x[0] <= 34.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 36.0) {
                                            if (x[3] <= 67.5) {
                                                if (x[2] <= 50.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 40.5) {
                                if (x[3] <= 63.5) {
                                    if (x[3] <= 61.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[5] <= 39.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 44.5) {
                                                if (x[5] <= 41.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= 41.5) {
                                        if (x[2] <= 52.5) {
                                            if (x[4] <= 32.5) {
                                                if (x[0] <= 39.5) {
                                                    if (x[0] <= 33.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 67.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 70.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 34.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 48.5) {
                                            if (x[3] <= 66.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[5] <= 43.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 38.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 75.5) {
                                                if (x[5] <= 44.5) {
                                                    if (x[5] <= 43.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 44.0) {
                                                            if (x[3] <= 70.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 49.5) {
                                    if (x[0] <= 40.5) {
                                        if (x[3] <= 66.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 43.0) {
                                            if (x[1] <= 41.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 54.5) {
                                        if (x[5] <= 42.5) {
                                            if (x[0] <= 44.5) {
                                                if (x[5] <= 41.5) {
                                                    if (x[1] <= 42.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[5] <= 43.5) {
                                                if (x[1] <= 42.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 42.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 48.0) {
                                                            if (x[4] <= 36.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 45.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 46.5) {
                                                        if (x[1] <= 44.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[4] <= 36.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 81.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #34
                        if (x[2] <= 50.5) {
                            if (x[1] <= 35.5) {
                                if (x[2] <= 43.5) {
                                    if (x[1] <= 32.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 26.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[5] <= 36.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 58.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= 36.5) {
                                        if (x[5] <= 35.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 63.5) {
                                                if (x[4] <= 31.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 60.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[5] <= 38.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 38.5) {
                                    if (x[0] <= 33.5) {
                                        if (x[0] <= 31.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 42.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 36.5) {
                                            if (x[4] <= 31.5) {
                                                if (x[4] <= 29.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 47.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 65.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[5] <= 38.5) {
                                                if (x[3] <= 63.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 66.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[4] <= 32.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 45.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 46.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 70.0) {
                                        if (x[1] <= 39.5) {
                                            if (x[2] <= 48.5) {
                                                if (x[0] <= 34.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 65.5) {
                                                        if (x[5] <= 35.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 59.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[4] <= 27.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[5] <= 42.5) {
                                                if (x[2] <= 45.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 41.5) {
                                                        if (x[1] <= 40.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[4] <= 28.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 45.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 69.5) {
                                if (x[1] <= 36.5) {
                                    if (x[0] <= 35.5) {
                                        if (x[5] <= 33.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 51.5) {
                                                if (x[5] <= 34.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 79.5) {
                                    if (x[0] <= 53.0) {
                                        if (x[2] <= 62.5) {
                                            if (x[1] <= 44.5) {
                                                if (x[5] <= 41.5) {
                                                    if (x[0] <= 41.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[4] <= 36.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[5] <= 39.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[5] <= 46.5) {
                                                    if (x[2] <= 56.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 59.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 77.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #35
                        if (x[3] <= 69.5) {
                            if (x[3] <= 63.5) {
                                if (x[5] <= 35.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 35.5) {
                                        if (x[1] <= 34.5) {
                                            if (x[4] <= 28.5) {
                                                if (x[3] <= 58.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 28.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[4] <= 29.5) {
                                                if (x[5] <= 41.5) {
                                                    if (x[1] <= 36.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[5] <= 38.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 33.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 37.5) {
                                        if (x[2] <= 50.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 51.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 41.5) {
                                            if (x[2] <= 46.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 65.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 66.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 39.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[5] <= 43.5) {
                                                                if (x[5] <= 40.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 75.5) {
                                if (x[5] <= 52.0) {
                                    if (x[5] <= 43.5) {
                                        if (x[0] <= 41.0) {
                                            if (x[4] <= 41.0) {
                                                if (x[0] <= 37.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 38.5) {
                                                        if (x[2] <= 49.5) {
                                                            if (x[3] <= 70.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[5] <= 41.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 53.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 46.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 79.5) {
                                    if (x[1] <= 44.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 53.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 57.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 78.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #36
                        if (x[3] <= 69.5) {
                            if (x[2] <= 44.5) {
                                if (x[4] <= 27.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[4] <= 29.5) {
                                        if (x[3] <= 63.5) {
                                            if (x[3] <= 59.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 43.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 35.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 37.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 38.5) {
                                    if (x[5] <= 34.5) {
                                        if (x[3] <= 60.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[5] <= 33.5) {
                                                if (x[4] <= 31.5) {
                                                    if (x[5] <= 31.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 32.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[4] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 61.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[4] <= 31.5) {
                                                if (x[3] <= 63.5) {
                                                    if (x[0] <= 35.0) {
                                                        if (x[3] <= 62.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 33.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 37.5) {
                                                        if (x[4] <= 32.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 40.5) {
                                        if (x[5] <= 45.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 47.5) {
                                            if (x[2] <= 45.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 66.5) {
                                                    if (x[4] <= 29.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 47.5) {
                                if (x[4] <= 30.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[5] <= 54.5) {
                                    if (x[3] <= 76.5) {
                                        if (x[4] <= 40.5) {
                                            if (x[4] <= 36.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 43.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 52.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 57.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #37
                        if (x[2] <= 49.5) {
                            if (x[2] <= 42.5) {
                                if (x[3] <= 65.0) {
                                    if (x[1] <= 37.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[5] <= 38.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[4] <= 31.5) {
                                    if (x[4] <= 30.5) {
                                        if (x[1] <= 35.5) {
                                            if (x[5] <= 35.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 35.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 63.5) {
                                                if (x[1] <= 39.5) {
                                                    if (x[4] <= 27.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 38.5) {
                                                            if (x[4] <= 28.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 36.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[5] <= 35.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 65.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 45.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 38.5) {
                                                            if (x[1] <= 36.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 40.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[3] <= 66.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 44.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 39.0) {
                                                if (x[5] <= 36.5) {
                                                    if (x[5] <= 34.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 66.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 69.5) {
                                        if (x[0] <= 31.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 67.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[5] <= 44.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 40.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 71.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[4] <= 33.5) {
                                if (x[5] <= 40.5) {
                                    if (x[4] <= 31.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 65.0) {
                                            if (x[0] <= 32.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 33.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[5] <= 43.5) {
                                        if (x[0] <= 39.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 76.5) {
                                                if (x[4] <= 37.0) {
                                                    if (x[5] <= 41.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 45.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 58.5) {
                                                if (x[0] <= 47.5) {
                                                    if (x[4] <= 36.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[4] <= 38.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 38.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 55.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #38
                        if (x[3] <= 68.5) {
                            if (x[3] <= 63.5) {
                                if (x[1] <= 36.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 30.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 35.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[5] <= 40.5) {
                                                if (x[4] <= 29.5) {
                                                    if (x[1] <= 39.5) {
                                                        if (x[5] <= 36.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 28.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 38.5) {
                                        if (x[2] <= 51.0) {
                                            if (x[1] <= 39.0) {
                                                if (x[1] <= 36.5) {
                                                    if (x[3] <= 66.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 35.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 32.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 34.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 67.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 48.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 79.5) {
                                if (x[0] <= 51.5) {
                                    if (x[2] <= 63.5) {
                                        if (x[5] <= 51.5) {
                                            if (x[4] <= 41.5) {
                                                if (x[5] <= 38.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[5] <= 43.5) {
                                                        if (x[1] <= 39.5) {
                                                            if (x[4] <= 35.5) {
                                                                if (x[5] <= 42.5) {
                                                                    if (x[5] <= 40.5) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 40.0) {
                                                                            votes[1] += 1;
                                                                        }

                                                                        else {
                                                                            votes[0] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 49.5) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= 70.5) {
                                                                if (x[0] <= 38.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[5] <= 41.5) {
                                                                    if (x[1] <= 42.0) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 44.5) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 46.5) {
                                                                            votes[1] += 1;
                                                                        }

                                                                        else {
                                                                            votes[0] += 1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 44.5) {
                                                            if (x[1] <= 40.5) {
                                                                if (x[5] <= 44.5) {
                                                                    if (x[2] <= 50.5) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 45.5) {
                                                                if (x[2] <= 57.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    if (x[4] <= 38.0) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 77.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #39
                        if (x[1] <= 35.5) {
                            if (x[1] <= 31.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[4] <= 28.5) {
                                    if (x[2] <= 43.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 44.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 47.5) {
                                        if (x[0] <= 36.0) {
                                            if (x[3] <= 60.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 45.5) {
                                                    if (x[5] <= 35.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 34.5) {
                                            if (x[0] <= 34.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 68.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 69.5) {
                                if (x[0] <= 38.5) {
                                    if (x[2] <= 42.5) {
                                        if (x[2] <= 39.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[4] <= 28.0) {
                                                if (x[0] <= 33.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 63.5) {
                                            if (x[0] <= 35.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 65.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 39.5) {
                                                    if (x[4] <= 31.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 33.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[5] <= 44.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 39.5) {
                                        if (x[2] <= 45.5) {
                                            if (x[3] <= 63.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[4] <= 30.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 38.5) {
                                    if (x[4] <= 36.5) {
                                        if (x[3] <= 72.5) {
                                            if (x[5] <= 51.5) {
                                                if (x[2] <= 47.5) {
                                                    if (x[4] <= 30.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 38.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[5] <= 39.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 78.0) {
                                            if (x[0] <= 43.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 49.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 55.5) {
                                        if (x[3] <= 76.0) {
                                            if (x[4] <= 41.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 58.0) {
                                            if (x[1] <= 47.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #40
                        if (x[1] <= 36.5) {
                            if (x[4] <= 28.5) {
                                if (x[2] <= 42.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 33.5) {
                                        if (x[0] <= 32.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 68.5) {
                                    if (x[5] <= 36.5) {
                                        if (x[3] <= 60.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 32.5) {
                                                if (x[0] <= 32.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[4] <= 30.5) {
                                                    if (x[3] <= 64.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 36.5) {
                                            if (x[1] <= 35.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 46.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[4] <= 31.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[4] <= 33.5) {
                                if (x[3] <= 69.5) {
                                    if (x[0] <= 38.5) {
                                        if (x[4] <= 26.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[4] <= 32.5) {
                                                if (x[4] <= 28.5) {
                                                    if (x[5] <= 35.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[5] <= 45.5) {
                                            if (x[4] <= 28.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 42.0) {
                                                    if (x[0] <= 40.5) {
                                                        if (x[3] <= 62.5) {
                                                            if (x[3] <= 61.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[4] <= 31.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[5] <= 46.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 76.5) {
                                    if (x[1] <= 44.5) {
                                        if (x[0] <= 39.5) {
                                            if (x[2] <= 48.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[4] <= 37.5) {
                                                if (x[4] <= 35.5) {
                                                    if (x[4] <= 34.5) {
                                                        if (x[2] <= 50.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 44.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 56.0) {
                                            if (x[0] <= 45.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 53.5) {
                                        if (x[4] <= 37.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 43.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 77.5) {
                                            if (x[2] <= 57.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[5] <= 44.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #41
                        if (x[3] <= 63.5) {
                            if (x[4] <= 29.5) {
                                if (x[2] <= 43.5) {
                                    if (x[3] <= 59.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 60.5) {
                                            if (x[1] <= 34.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= 35.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 37.5) {
                                            if (x[4] <= 28.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[4] <= 28.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[5] <= 41.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 60.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[5] <= 37.5) {
                                        if (x[5] <= 35.0) {
                                            if (x[5] <= 32.5) {
                                                if (x[0] <= 31.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 45.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 35.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 69.5) {
                                if (x[3] <= 65.5) {
                                    if (x[5] <= 44.5) {
                                        if (x[0] <= 38.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 64.5) {
                                                if (x[4] <= 32.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 31.5) {
                                        if (x[5] <= 44.5) {
                                            if (x[4] <= 30.5) {
                                                if (x[3] <= 66.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 36.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[5] <= 38.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 38.5) {
                                            if (x[3] <= 66.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[4] <= 32.5) {
                                                if (x[2] <= 48.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 47.5) {
                                    if (x[3] <= 71.5) {
                                        if (x[5] <= 39.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[5] <= 43.5) {
                                        if (x[0] <= 39.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[4] <= 40.5) {
                                                if (x[2] <= 52.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[4] <= 37.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 75.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 44.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 50.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[4] <= 39.5) {
                                                    if (x[0] <= 52.5) {
                                                        if (x[3] <= 76.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 46.5) {
                                                                if (x[5] <= 45.5) {
                                                                    if (x[3] <= 80.5) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #42
                        if (x[2] <= 48.5) {
                            if (x[1] <= 35.5) {
                                if (x[2] <= 42.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 65.5) {
                                        if (x[0] <= 36.0) {
                                            if (x[0] <= 34.5) {
                                                if (x[5] <= 35.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 34.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[5] <= 39.5) {
                                    if (x[2] <= 44.5) {
                                        if (x[1] <= 37.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 58.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 38.5) {
                                            if (x[3] <= 63.5) {
                                                if (x[1] <= 38.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 46.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 38.5) {
                                                        if (x[5] <= 34.5) {
                                                            if (x[3] <= 66.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 40.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 65.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 63.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[5] <= 44.5) {
                                            if (x[4] <= 30.5) {
                                                if (x[3] <= 65.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[5] <= 43.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[4] <= 31.5) {
                                                    if (x[3] <= 66.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 69.5) {
                                if (x[3] <= 67.5) {
                                    if (x[2] <= 51.5) {
                                        if (x[4] <= 32.5) {
                                            if (x[0] <= 41.0) {
                                                if (x[2] <= 49.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 33.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[5] <= 44.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[5] <= 48.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 58.5) {
                                    if (x[2] <= 57.5) {
                                        if (x[0] <= 55.5) {
                                            if (x[3] <= 72.5) {
                                                if (x[4] <= 34.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 41.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[4] <= 36.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 45.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 82.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #43
                        if (x[1] <= 36.5) {
                            if (x[3] <= 63.5) {
                                if (x[2] <= 46.5) {
                                    if (x[4] <= 27.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 43.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[4] <= 28.5) {
                                                if (x[2] <= 44.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 31.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 33.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 34.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 38.5) {
                                    if (x[5] <= 40.5) {
                                        if (x[4] <= 31.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[5] <= 38.0) {
                                                if (x[0] <= 33.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[2] <= 49.5) {
                                if (x[0] <= 38.5) {
                                    if (x[3] <= 60.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[4] <= 32.5) {
                                            if (x[2] <= 44.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 63.5) {
                                                    if (x[0] <= 35.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 67.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 39.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[5] <= 35.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 41.5) {
                                        if (x[4] <= 28.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 39.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 65.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[4] <= 31.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 37.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[4] <= 32.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 43.5) {
                                    if (x[2] <= 62.5) {
                                        if (x[3] <= 69.5) {
                                            if (x[0] <= 37.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 77.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 55.0) {
                                        if (x[4] <= 37.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 49.5) {
                                                if (x[5] <= 45.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 77.5) {
                                            if (x[4] <= 36.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #44
                        if (x[4] <= 33.5) {
                            if (x[2] <= 44.5) {
                                if (x[1] <= 42.5) {
                                    if (x[3] <= 63.5) {
                                        if (x[5] <= 35.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 43.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[4] <= 28.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 41.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 36.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 41.5) {
                                    if (x[3] <= 63.5) {
                                        if (x[3] <= 61.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[5] <= 35.5) {
                                                if (x[4] <= 30.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[4] <= 31.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 47.5) {
                                                    if (x[2] <= 46.5) {
                                                        if (x[0] <= 37.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[5] <= 36.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[4] <= 31.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 31.5) {
                                            if (x[0] <= 37.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[4] <= 29.5) {
                                                    if (x[3] <= 67.5) {
                                                        if (x[2] <= 47.5) {
                                                            if (x[3] <= 66.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 64.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 38.5) {
                                                            if (x[2] <= 46.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[5] <= 43.5) {
                                                if (x[5] <= 37.5) {
                                                    if (x[0] <= 33.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[4] <= 32.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 50.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[5] <= 39.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 39.5) {
                                if (x[1] <= 33.5) {
                                    if (x[5] <= 33.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 37.5) {
                                        if (x[3] <= 71.5) {
                                            if (x[5] <= 41.0) {
                                                if (x[2] <= 52.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 69.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 38.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 37.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 73.0) {
                                    if (x[2] <= 50.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 79.5) {
                                        if (x[0] <= 53.0) {
                                            if (x[0] <= 44.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[5] <= 42.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[4] <= 36.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 46.5) {
                                                            if (x[1] <= 44.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #45
                        if (x[3] <= 69.5) {
                            if (x[1] <= 32.5) {
                                if (x[2] <= 48.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[2] <= 49.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 33.5) {
                                    if (x[4] <= 27.5) {
                                        if (x[5] <= 36.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 39.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[5] <= 32.5) {
                                            if (x[0] <= 27.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 41.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 59.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 48.5) {
                                            if (x[2] <= 47.5) {
                                                if (x[3] <= 66.5) {
                                                    if (x[3] <= 62.5) {
                                                        if (x[5] <= 36.5) {
                                                            if (x[2] <= 46.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[0] <= 37.5) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 35.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[0] <= 39.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    if (x[2] <= 43.5) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 36.5) {
                                                                            votes[1] += 1;
                                                                        }

                                                                        else {
                                                                            votes[0] += 1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 41.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[4] <= 30.5) {
                                                                if (x[5] <= 41.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    if (x[0] <= 44.0) {
                                                                        if (x[2] <= 46.5) {
                                                                            votes[0] += 1;
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 67.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 65.5) {
                                                    if (x[4] <= 33.0) {
                                                        if (x[3] <= 64.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[4] <= 31.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 72.5) {
                                if (x[1] <= 44.0) {
                                    if (x[0] <= 37.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[4] <= 34.5) {
                                            if (x[3] <= 70.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[5] <= 41.0) {
                                                if (x[0] <= 40.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 77.5) {
                                    if (x[0] <= 44.5) {
                                        if (x[2] <= 62.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 44.5) {
                                            if (x[4] <= 37.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[5] <= 45.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 55.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 47.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #46
                        if (x[2] <= 48.5) {
                            if (x[2] <= 43.5) {
                                if (x[1] <= 37.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[5] <= 40.5) {
                                        if (x[3] <= 60.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 38.5) {
                                    if (x[3] <= 63.5) {
                                        if (x[3] <= 59.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 62.5) {
                                                if (x[3] <= 61.0) {
                                                    if (x[4] <= 28.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 46.0) {
                                                    if (x[4] <= 29.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 46.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[4] <= 31.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[4] <= 32.5) {
                                                    if (x[3] <= 66.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 69.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 41.5) {
                                        if (x[2] <= 44.5) {
                                            if (x[5] <= 40.5) {
                                                if (x[0] <= 40.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 40.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 38.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 65.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[5] <= 51.5) {
                                if (x[5] <= 43.5) {
                                    if (x[0] <= 44.5) {
                                        if (x[1] <= 31.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 38.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 63.5) {
                                                    if (x[0] <= 42.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[4] <= 34.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 36.0) {
                                            if (x[5] <= 40.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 67.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 42.5) {
                                            if (x[3] <= 69.5) {
                                                if (x[0] <= 43.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 47.5) {
                                    if (x[4] <= 40.5) {
                                        if (x[0] <= 46.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 55.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #47
                        if (x[5] <= 43.5) {
                            if (x[5] <= 30.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[2] <= 48.5) {
                                    if (x[3] <= 63.5) {
                                        if (x[5] <= 36.5) {
                                            if (x[3] <= 61.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[5] <= 35.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 62.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 36.0) {
                                                if (x[3] <= 58.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 60.5) {
                                                        if (x[2] <= 42.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[4] <= 28.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 44.5) {
                                                        if (x[5] <= 40.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 34.5) {
                                            if (x[5] <= 39.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 66.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[4] <= 28.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 38.5) {
                                                    if (x[4] <= 32.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[5] <= 41.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 64.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= 38.0) {
                                        if (x[0] <= 45.0) {
                                            if (x[2] <= 52.5) {
                                                if (x[1] <= 31.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 32.5) {
                                                        if (x[5] <= 33.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 39.5) {
                                            if (x[0] <= 41.0) {
                                                if (x[2] <= 60.5) {
                                                    if (x[0] <= 34.5) {
                                                        if (x[4] <= 33.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 70.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[4] <= 34.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 42.5) {
                                                if (x[3] <= 72.5) {
                                                    if (x[2] <= 52.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[4] <= 37.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 43.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 49.5) {
                                if (x[0] <= 41.5) {
                                    if (x[1] <= 40.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 54.5) {
                                    if (x[0] <= 45.5) {
                                        if (x[3] <= 69.5) {
                                            if (x[4] <= 34.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 46.5) {
                                            if (x[3] <= 78.5) {
                                                if (x[4] <= 35.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 55.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #48
                        if (x[3] <= 69.5) {
                            if (x[1] <= 32.5) {
                                if (x[1] <= 31.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 59.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 34.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 38.5) {
                                    if (x[3] <= 60.5) {
                                        if (x[0] <= 34.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[4] <= 27.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 34.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 33.5) {
                                            if (x[2] <= 44.5) {
                                                if (x[0] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[4] <= 28.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 62.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 50.0) {
                                                        if (x[1] <= 36.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[4] <= 29.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[4] <= 32.5) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= 38.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 40.5) {
                                            if (x[3] <= 62.5) {
                                                if (x[4] <= 30.0) {
                                                    if (x[4] <= 28.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[5] <= 40.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 45.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 65.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 76.5) {
                                if (x[2] <= 62.5) {
                                    if (x[5] <= 51.5) {
                                        if (x[4] <= 36.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[5] <= 40.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 42.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 53.5) {
                                    if (x[5] <= 52.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #49
                        if (x[2] <= 48.5) {
                            if (x[2] <= 42.5) {
                                if (x[3] <= 64.5) {
                                    if (x[1] <= 37.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[4] <= 25.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 63.5) {
                                    if (x[5] <= 35.5) {
                                        if (x[4] <= 30.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[4] <= 31.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 34.5) {
                                            if (x[1] <= 33.5) {
                                                if (x[1] <= 32.5) {
                                                    if (x[3] <= 61.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 33.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 64.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 40.5) {
                                                if (x[5] <= 35.5) {
                                                    if (x[4] <= 32.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 67.5) {
                                                        if (x[4] <= 29.5) {
                                                            if (x[5] <= 40.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 35.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[3] <= 65.5) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 52.5) {
                                if (x[5] <= 51.5) {
                                    if (x[5] <= 45.0) {
                                        if (x[4] <= 31.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 33.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 69.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[5] <= 41.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 79.5) {
                                    if (x[2] <= 63.5) {
                                        if (x[0] <= 53.5) {
                                            if (x[5] <= 42.5) {
                                                if (x[3] <= 74.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[5] <= 41.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 65.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #50
                        if (x[1] <= 36.5) {
                            if (x[4] <= 33.5) {
                                if (x[1] <= 31.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[4] <= 30.5) {
                                        if (x[3] <= 63.5) {
                                            if (x[3] <= 59.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 47.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[5] <= 37.5) {
                                                if (x[1] <= 35.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 68.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 49.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 32.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 49.5) {
                                if (x[1] <= 42.5) {
                                    if (x[2] <= 45.5) {
                                        if (x[3] <= 63.5) {
                                            if (x[0] <= 37.0) {
                                                if (x[2] <= 43.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[5] <= 36.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 39.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[4] <= 29.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 30.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 38.5) {
                                                if (x[4] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 48.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 40.5) {
                                                        if (x[5] <= 45.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= 43.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 77.5) {
                                    if (x[1] <= 44.5) {
                                        if (x[0] <= 41.5) {
                                            if (x[4] <= 40.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[4] <= 37.5) {
                                                if (x[0] <= 43.5) {
                                                    if (x[5] <= 41.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 51.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 75.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 45.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 53.5) {
                                        if (x[4] <= 37.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[4] <= 40.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #51
                        if (x[3] <= 69.5) {
                            if (x[2] <= 42.5) {
                                if (x[1] <= 37.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 32.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 34.5) {
                                    if (x[3] <= 63.5) {
                                        if (x[5] <= 35.5) {
                                            if (x[5] <= 31.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 31.0) {
                                                    if (x[0] <= 29.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 34.5) {
                                                if (x[4] <= 29.5) {
                                                    if (x[1] <= 33.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 60.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 45.5) {
                                                    if (x[3] <= 61.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 35.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 62.5) {
                                                                if (x[4] <= 28.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 37.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 33.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[4] <= 31.5) {
                                                if (x[0] <= 36.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[5] <= 41.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[5] <= 43.5) {
                                                            if (x[4] <= 30.5) {
                                                                if (x[4] <= 29.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 67.5) {
                                                    if (x[0] <= 38.5) {
                                                        if (x[4] <= 32.5) {
                                                            if (x[0] <= 36.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 41.5) {
                                                        if (x[5] <= 42.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 42.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[5] <= 43.5) {
                                if (x[0] <= 39.5) {
                                    if (x[2] <= 47.5) {
                                        if (x[2] <= 46.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[5] <= 38.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 46.5) {
                                            if (x[2] <= 51.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 42.5) {
                                                    if (x[5] <= 42.5) {
                                                        if (x[4] <= 39.0) {
                                                            if (x[2] <= 54.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 49.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 77.5) {
                                        if (x[2] <= 57.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 43.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[5] <= 52.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 79.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #52
                        if (x[2] <= 48.5) {
                            if (x[1] <= 35.5) {
                                if (x[3] <= 65.5) {
                                    if (x[2] <= 46.5) {
                                        if (x[0] <= 24.5) {
                                            if (x[1] <= 31.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[4] <= 28.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[5] <= 36.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 44.5) {
                                                        if (x[3] <= 62.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 33.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 62.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 36.5) {
                                    if (x[2] <= 42.0) {
                                        if (x[3] <= 60.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 35.5) {
                                            if (x[0] <= 33.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[4] <= 31.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 33.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= 35.5) {
                                        if (x[3] <= 61.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 63.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[5] <= 43.5) {
                                                if (x[2] <= 45.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 65.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 47.5) {
                                                            if (x[4] <= 30.5) {
                                                                if (x[1] <= 40.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    if (x[0] <= 40.5) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 69.5) {
                                if (x[1] <= 39.5) {
                                    if (x[1] <= 33.0) {
                                        if (x[4] <= 32.5) {
                                            if (x[0] <= 32.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 43.5) {
                                            if (x[0] <= 33.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[5] <= 40.5) {
                                                    if (x[4] <= 31.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 54.5) {
                                    if (x[0] <= 39.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 40.5) {
                                            if (x[5] <= 41.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 63.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 86.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 58.5) {
                                                if (x[5] <= 41.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 45.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 57.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 48.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 55.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #53
                        if (x[5] <= 44.5) {
                            if (x[5] <= 34.5) {
                                if (x[3] <= 63.5) {
                                    if (x[2] <= 48.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 67.5) {
                                        if (x[3] <= 65.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 48.5) {
                                    if (x[3] <= 63.5) {
                                        if (x[0] <= 36.5) {
                                            if (x[2] <= 42.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 34.5) {
                                                    if (x[5] <= 35.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[5] <= 36.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 44.5) {
                                                            if (x[1] <= 35.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 36.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 38.5) {
                                                    if (x[4] <= 29.5) {
                                                        if (x[3] <= 61.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 33.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[5] <= 39.5) {
                                                if (x[0] <= 35.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 69.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 64.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 39.0) {
                                                        if (x[4] <= 31.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 37.5) {
                                        if (x[3] <= 69.5) {
                                            if (x[0] <= 40.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 52.5) {
                                                if (x[1] <= 39.5) {
                                                    if (x[0] <= 40.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[4] <= 34.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 39.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 75.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[5] <= 40.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 69.5) {
                                if (x[1] <= 38.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 48.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[2] <= 53.5) {
                                        if (x[4] <= 39.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 58.5) {
                                            if (x[1] <= 45.5) {
                                                if (x[0] <= 46.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[4] <= 38.5) {
                                                        if (x[3] <= 78.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #54
                        if (x[3] <= 63.5) {
                            if (x[2] <= 47.5) {
                                if (x[5] <= 36.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[5] <= 37.5) {
                                        if (x[3] <= 59.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 43.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 36.5) {
                                                    if (x[3] <= 61.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 43.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 62.5) {
                                                if (x[4] <= 29.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 31.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 34.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 49.5) {
                                if (x[0] <= 38.5) {
                                    if (x[0] <= 33.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[5] <= 41.5) {
                                            if (x[3] <= 66.5) {
                                                if (x[5] <= 37.5) {
                                                    if (x[5] <= 35.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 69.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 36.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= 35.5) {
                                        if (x[1] <= 39.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 48.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 43.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 39.5) {
                                    if (x[2] <= 52.5) {
                                        if (x[3] <= 65.5) {
                                            if (x[0] <= 34.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 71.5) {
                                        if (x[1] <= 39.5) {
                                            if (x[3] <= 70.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[5] <= 41.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 55.5) {
                                            if (x[3] <= 77.5) {
                                                if (x[2] <= 57.5) {
                                                    if (x[5] <= 41.0) {
                                                        if (x[1] <= 38.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[5] <= 43.5) {
                                                            if (x[1] <= 42.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[4] <= 36.0) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 43.0) {
                                                        if (x[5] <= 43.5) {
                                                            if (x[1] <= 38.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 57.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #55
                        if (x[4] <= 33.5) {
                            if (x[4] <= 29.5) {
                                if (x[2] <= 43.5) {
                                    if (x[3] <= 64.0) {
                                        if (x[5] <= 36.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 30.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 38.5) {
                                        if (x[0] <= 30.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 63.5) {
                                                if (x[5] <= 35.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[5] <= 36.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 37.5) {
                                                            if (x[1] <= 35.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 42.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 69.5) {
                                    if (x[0] <= 34.5) {
                                        if (x[4] <= 31.5) {
                                            if (x[1] <= 33.5) {
                                                if (x[3] <= 64.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[4] <= 32.5) {
                                                if (x[2] <= 48.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 32.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[5] <= 45.5) {
                                            if (x[0] <= 38.5) {
                                                if (x[5] <= 37.0) {
                                                    if (x[0] <= 37.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= 32.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 45.5) {
                                                    if (x[5] <= 42.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 64.5) {
                                                            if (x[0] <= 44.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 41.5) {
                                                if (x[1] <= 42.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[2] <= 49.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 39.5) {
                                    if (x[4] <= 37.5) {
                                        if (x[0] <= 41.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 71.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[5] <= 41.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= 53.5) {
                                        if (x[3] <= 77.5) {
                                            if (x[4] <= 36.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 53.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 41.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 54.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #56
                        if (x[2] <= 49.5) {
                            if (x[1] <= 31.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 38.5) {
                                    if (x[4] <= 26.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 63.5) {
                                            if (x[2] <= 46.0) {
                                                if (x[1] <= 34.5) {
                                                    if (x[0] <= 34.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 67.5) {
                                                if (x[0] <= 36.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 37.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[4] <= 31.5) {
                                                    if (x[5] <= 36.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[5] <= 40.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 30.5) {
                                        if (x[3] <= 69.5) {
                                            if (x[3] <= 63.5) {
                                                if (x[3] <= 61.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 44.5) {
                                                        if (x[4] <= 28.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 46.5) {
                                                    if (x[5] <= 43.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[4] <= 32.5) {
                                if (x[3] <= 67.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 69.5) {
                                    if (x[0] <= 39.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 54.5) {
                                        if (x[3] <= 77.5) {
                                            if (x[3] <= 75.5) {
                                                if (x[4] <= 37.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 41.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 62.5) {
                                                    if (x[2] <= 57.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 43.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 47.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #57
                        if (x[3] <= 69.5) {
                            if (x[2] <= 43.5) {
                                if (x[4] <= 27.5) {
                                    if (x[3] <= 60.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 38.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 63.0) {
                                        if (x[1] <= 32.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 33.5) {
                                                if (x[4] <= 28.5) {
                                                    if (x[0] <= 34.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 38.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[5] <= 42.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 39.5) {
                                    if (x[0] <= 33.5) {
                                        if (x[2] <= 44.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[3] <= 60.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 31.5) {
                                            if (x[3] <= 63.5) {
                                                if (x[3] <= 60.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 62.5) {
                                                        if (x[0] <= 34.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 36.5) {
                                                                if (x[1] <= 35.0) {
                                                                    if (x[2] <= 45.5) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 38.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[5] <= 41.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 38.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 42.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 77.5) {
                                if (x[4] <= 41.0) {
                                    if (x[1] <= 44.5) {
                                        if (x[1] <= 42.5) {
                                            if (x[2] <= 52.5) {
                                                if (x[3] <= 71.5) {
                                                    if (x[0] <= 37.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[4] <= 34.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 39.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 53.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[5] <= 42.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 56.0) {
                                            if (x[5] <= 51.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[5] <= 54.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 59.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #58
                        if (x[3] <= 66.5) {
                            if (x[5] <= 31.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[3] <= 63.5) {
                                    if (x[3] <= 59.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 39.5) {
                                            if (x[0] <= 37.0) {
                                                if (x[1] <= 37.5) {
                                                    if (x[5] <= 35.0) {
                                                        if (x[3] <= 62.5) {
                                                            if (x[4] <= 31.5) {
                                                                if (x[2] <= 45.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 34.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[5] <= 36.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[5] <= 40.5) {
                                                    if (x[5] <= 39.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 45.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 29.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 38.5) {
                                            if (x[3] <= 64.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 36.5) {
                                                    if (x[0] <= 34.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[4] <= 30.5) {
                                                if (x[5] <= 44.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 69.5) {
                                if (x[1] <= 38.5) {
                                    if (x[0] <= 45.5) {
                                        if (x[0] <= 33.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[5] <= 42.0) {
                                                if (x[4] <= 31.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 35.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[5] <= 40.0) {
                                            if (x[3] <= 67.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 48.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[5] <= 45.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[5] <= 49.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 39.5) {
                                    if (x[1] <= 40.5) {
                                        if (x[2] <= 47.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 76.5) {
                                        if (x[2] <= 57.5) {
                                            if (x[2] <= 49.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 74.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[5] <= 43.5) {
                                                        if (x[0] <= 44.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[4] <= 40.0) {
                                                if (x[4] <= 37.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 53.5) {
                                            if (x[5] <= 50.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 45.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[5] <= 45.5) {
                                                    if (x[2] <= 59.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #59
                        if (x[3] <= 69.5) {
                            if (x[4] <= 27.5) {
                                if (x[1] <= 38.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 64.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 42.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 38.5) {
                                        if (x[3] <= 63.5) {
                                            if (x[2] <= 46.0) {
                                                if (x[2] <= 43.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[3] <= 59.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 32.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 34.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                if (x[5] <= 37.5) {
                                                                    if (x[0] <= 35.5) {
                                                                        if (x[1] <= 35.0) {
                                                                            votes[0] += 1;
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 33.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 34.5) {
                                                        if (x[4] <= 31.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[4] <= 31.5) {
                                                if (x[1] <= 39.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 49.0) {
                                                    if (x[5] <= 37.0) {
                                                        if (x[3] <= 65.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 34.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 34.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[5] <= 45.5) {
                                            if (x[5] <= 41.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[4] <= 30.5) {
                                                    if (x[0] <= 42.0) {
                                                        if (x[5] <= 43.5) {
                                                            if (x[4] <= 29.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 39.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 79.5) {
                                if (x[5] <= 51.5) {
                                    if (x[0] <= 39.5) {
                                        if (x[2] <= 48.5) {
                                            if (x[5] <= 38.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 36.5) {
                                            if (x[2] <= 52.5) {
                                                if (x[5] <= 41.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 38.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 77.5) {
                                                    if (x[3] <= 74.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #60
                        if (x[5] <= 41.5) {
                            if (x[2] <= 48.5) {
                                if (x[5] <= 36.5) {
                                    if (x[4] <= 29.5) {
                                        if (x[1] <= 41.5) {
                                            if (x[1] <= 37.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 64.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 46.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 35.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[4] <= 32.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 63.5) {
                                        if (x[5] <= 37.5) {
                                            if (x[2] <= 36.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 36.5) {
                                                    if (x[0] <= 34.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 35.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= 44.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 61.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[3] <= 62.5) {
                                                    if (x[2] <= 45.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 67.5) {
                                            if (x[4] <= 31.5) {
                                                if (x[1] <= 41.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 63.5) {
                                    if (x[3] <= 61.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 38.5) {
                                        if (x[4] <= 34.5) {
                                            if (x[3] <= 69.5) {
                                                if (x[2] <= 51.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 39.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 50.5) {
                                if (x[0] <= 39.5) {
                                    if (x[2] <= 48.5) {
                                        if (x[4] <= 29.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 39.5) {
                                        if (x[0] <= 42.5) {
                                            if (x[5] <= 42.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 53.5) {
                                    if (x[2] <= 52.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 50.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 76.5) {
                                        if (x[2] <= 57.5) {
                                            if (x[4] <= 37.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 75.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 2; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                protected:
                };
            }
        }
    }