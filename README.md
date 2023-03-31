# VESC-UART-CAN-Forward
* The ***VESC-UART-CAN-Forward*** library enables communication between VESCs over the UART interface. It does not require multiple UARTs for communication between VESCs. The library provides a method to forward the UART messages over the CAN bus for inter-CAN communication between multiple VESCs.

* In the VESC-UART-CAN-Forward setup, one VESC is configured as the master and the other VESCs are configured as slaves. The master VESC communicates with the other VESCs over the UART interface, and the messages can be forwarded over the CAN bus to enable inter-CAN communication between multiple VESCs.

* To set up the hardware connection, you need to connect the UART pins (TX and RX) of the master VESC.In addition, you need to connect the CAN high and low wires of all the VESCs together to enable inter-CAN communication.

# Example code snippet

`
#include "VescUart.h"
#define LEFT_BLDC 1
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
    bldc.setRPM(2000, LEFT_BLDC);
}
`

# Configurations
* ***Master-Configuration***

![VESC-Configuration](https://user-images.githubusercontent.com/65481797/229056686-152245b1-4a9a-4069-86e9-be0e726ace54.png)

![VESC-Configuration](https://user-images.githubusercontent.com/65481797/229056798-14a92557-35e2-4766-9539-b5d940b901c2.png)

* ***Slave-Configuration***

![VESC-Configuration](https://user-images.githubusercontent.com/65481797/229058163-9ce41101-2102-431c-ac6d-66804a808249.png)

![VESC-Configuration](https://user-images.githubusercontent.com/65481797/229058485-b532c612-6afd-4c86-a3a3-dcdcca7aecb1.png)
