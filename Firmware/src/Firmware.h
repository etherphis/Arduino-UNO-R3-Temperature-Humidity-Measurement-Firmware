#ifndef TANDHMEASUREMENTCLASS_CLASS_H
#define TANDHMEASUREMENTCLASS_CLASS_H

#define DHT_SENSOR_TYPE DHT_TYPE_11

class TAndHMeasurementClass
{
public:
    TAndHMeasurementClass();
    void begin();
    void run();

private:
    static bool measure_environment(float *temperature, float *humidity);
};

#endif