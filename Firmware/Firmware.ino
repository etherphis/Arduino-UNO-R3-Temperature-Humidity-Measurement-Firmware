#include "src/Firmware.h"

TAndHMeasurementClass TAndHMeasurement;

void setup()
{
    TAndHMeasurement.begin();
}

void loop()
{
    TAndHMeasurement.run();
}