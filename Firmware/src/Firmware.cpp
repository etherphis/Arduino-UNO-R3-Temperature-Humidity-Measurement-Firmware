#include <LiquidCrystal.h>
#include "Firmware.h"
#include "DHT_Async.h"

byte customDegreeSymbol[8] = {
    B00110,
    B01001,
    B01001,
    B00110,
    B00000,
    B00000,
    B00000,
    B00000,
};

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
static const int DHT_SENSOR_PIN = 2;
DHT_Async dht_sensor(DHT_SENSOR_PIN, DHT_SENSOR_TYPE);

TAndHMeasurementClass::TAndHMeasurementClass()
{
}

void TAndHMeasurementClass::begin()
{
    lcd.begin(16, 2);
    lcd.createChar(0, customDegreeSymbol);
}

void TAndHMeasurementClass::run()
{
    float temperature;
    float humidity;
    if (measure_environment(&temperature, &humidity))
    {

        lcd.clear();

        lcd.print("Temp.: ");
        lcd.print(temperature);
        lcd.print((char)0);
        lcd.print("C");

        lcd.setCursor(0, 1);

        lcd.print("Hum.: ");
        lcd.print(humidity);
        lcd.print("%");
    }
}

bool TAndHMeasurementClass::measure_environment(float *temperature, float *humidity)
{
    static unsigned long measurement_timestamp = millis();

    if (millis() - measurement_timestamp > 500)
    {
        if (dht_sensor.measure(temperature, humidity))
        {
            measurement_timestamp = millis();
            return (true);
        }
    }

    return (false);
}
