/*
 * File:   main.c
 * Author: Jenni
 *
 * Created on December 8, 2018, 12:43 PM
 */

#include "mcc_generated_files/mcc.h"
#include "stdlib.h"

uint8_t nwkSKey[16] = {0x10, 0x5F, 0xB0, 0x85, 0x15, 0x16, 0x95, 0x20, 0xC9, 0x57, 0xA4, 0xF7, 0x54, 0xDC, 0xD4, 0x93};
uint8_t appSKey[16] = {0x6F, 0x33, 0xFD, 0x7F, 0x62, 0x7B, 0x50, 0xBD, 0x46, 0x9E, 0xC6, 0x84, 0xB8, 0xFF, 0x60, 0x14};
uint32_t devAddr = 0x00866B6C;

void RxData(uint8_t* pData, uint8_t dataLength, OpStatus_t status)
{}
void RxJoinResponse(bool status)
{}

volatile int count = 0;
/*
                         Main application
 */
void main(void)
{
    char msg[] = "LoRaWAN is easy : ";
    
    // Initialize the device
    SYSTEM_Initialize();
    
    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();
    
    
    uint8_t deviceEui[8] = { 0x00, 0x04, 0xA3, 0x0B, 0x00, 0x1B, 0x0C, 0x25 }; 
    
    LORAWAN_Init (RxData, RxJoinResponse);
    LORAWAN_SetNetworkSessionKey(nwkSKey);
    LORAWAN_SetApplicationSessionKey(appSKey);
    LORAWAN_SetDeviceAddress(devAddr);

    LORAWAN_Join(ABP);
     
    while (1)
    {
        // Add your application code
        LORAWAN_Mainloop();

    }
}
/**
 End of File
*/