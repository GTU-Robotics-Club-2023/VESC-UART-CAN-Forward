#include "VescUart.h"
VescUart bldc;
void setup()
{

    Serial.begin(115200);
    Serial2.begin(115200);
    bldc.setSerialPort(&Serial2);

}

void loop()
{
    bldc.setRPM(40000);
    bldc.setRPM(2000, 1);
}
