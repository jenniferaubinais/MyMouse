/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.65
        Device            :  PIC18LF46K22
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RB0 procedures
#define RB0_SetHigh()    do { LATBbits.LATB0 = 1; } while(0)
#define RB0_SetLow()   do { LATBbits.LATB0 = 0; } while(0)
#define RB0_Toggle()   do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define RB0_GetValue()         PORTBbits.RB0
#define RB0_SetDigitalInput()   do { TRISBbits.TRISB0 = 1; } while(0)
#define RB0_SetDigitalOutput()  do { TRISBbits.TRISB0 = 0; } while(0)
#define RB0_SetPullup()     do { WPUBbits.WPUB0 = 1; } while(0)
#define RB0_ResetPullup()   do { WPUBbits.WPUB0 = 0; } while(0)
#define RB0_SetAnalogMode() do { ANSELBbits.ANSB0 = 1; } while(0)
#define RB0_SetDigitalMode()do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set RB1 procedures
#define RB1_SetHigh()    do { LATBbits.LATB1 = 1; } while(0)
#define RB1_SetLow()   do { LATBbits.LATB1 = 0; } while(0)
#define RB1_Toggle()   do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define RB1_GetValue()         PORTBbits.RB1
#define RB1_SetDigitalInput()   do { TRISBbits.TRISB1 = 1; } while(0)
#define RB1_SetDigitalOutput()  do { TRISBbits.TRISB1 = 0; } while(0)
#define RB1_SetPullup()     do { WPUBbits.WPUB1 = 1; } while(0)
#define RB1_ResetPullup()   do { WPUBbits.WPUB1 = 0; } while(0)
#define RB1_SetAnalogMode() do { ANSELBbits.ANSB1 = 1; } while(0)
#define RB1_SetDigitalMode()do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set RB2 procedures
#define RB2_SetHigh()    do { LATBbits.LATB2 = 1; } while(0)
#define RB2_SetLow()   do { LATBbits.LATB2 = 0; } while(0)
#define RB2_Toggle()   do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define RB2_GetValue()         PORTBbits.RB2
#define RB2_SetDigitalInput()   do { TRISBbits.TRISB2 = 1; } while(0)
#define RB2_SetDigitalOutput()  do { TRISBbits.TRISB2 = 0; } while(0)
#define RB2_SetPullup()     do { WPUBbits.WPUB2 = 1; } while(0)
#define RB2_ResetPullup()   do { WPUBbits.WPUB2 = 0; } while(0)
#define RB2_SetAnalogMode() do { ANSELBbits.ANSB2 = 1; } while(0)
#define RB2_SetDigitalMode()do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()    do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()   do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()   do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()         PORTBbits.RB4
#define RB4_SetDigitalInput()   do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()  do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()     do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()   do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode() do { ANSELBbits.ANSB4 = 1; } while(0)
#define RB4_SetDigitalMode()do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set RC2 procedures
#define RC2_SetHigh()    do { LATCbits.LATC2 = 1; } while(0)
#define RC2_SetLow()   do { LATCbits.LATC2 = 0; } while(0)
#define RC2_Toggle()   do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RC2_GetValue()         PORTCbits.RC2
#define RC2_SetDigitalInput()   do { TRISCbits.TRISC2 = 1; } while(0)
#define RC2_SetDigitalOutput()  do { TRISCbits.TRISC2 = 0; } while(0)
#define RC2_SetAnalogMode() do { ANSELCbits.ANSC2 = 1; } while(0)
#define RC2_SetDigitalMode()do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set RED aliases
#define RED_TRIS               TRISCbits.TRISC5
#define RED_LAT                LATCbits.LATC5
#define RED_PORT               PORTCbits.RC5
#define RED_ANS                ANSELCbits.ANSC5
#define RED_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RED_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RED_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RED_GetValue()           PORTCbits.RC5
#define RED_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RED_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RED_SetAnalogMode()  do { ANSELCbits.ANSC5 = 1; } while(0)
#define RED_SetDigitalMode() do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set SCK2 aliases
#define SCK2_TRIS               TRISDbits.TRISD0
#define SCK2_LAT                LATDbits.LATD0
#define SCK2_PORT               PORTDbits.RD0
#define SCK2_ANS                ANSELDbits.ANSD0
#define SCK2_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define SCK2_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define SCK2_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define SCK2_GetValue()           PORTDbits.RD0
#define SCK2_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define SCK2_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define SCK2_SetAnalogMode()  do { ANSELDbits.ANSD0 = 1; } while(0)
#define SCK2_SetDigitalMode() do { ANSELDbits.ANSD0 = 0; } while(0)

// get/set SDI2 aliases
#define SDI2_TRIS               TRISDbits.TRISD1
#define SDI2_LAT                LATDbits.LATD1
#define SDI2_PORT               PORTDbits.RD1
#define SDI2_ANS                ANSELDbits.ANSD1
#define SDI2_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define SDI2_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define SDI2_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define SDI2_GetValue()           PORTDbits.RD1
#define SDI2_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define SDI2_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define SDI2_SetAnalogMode()  do { ANSELDbits.ANSD1 = 1; } while(0)
#define SDI2_SetDigitalMode() do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set RD3 procedures
#define RD3_SetHigh()    do { LATDbits.LATD3 = 1; } while(0)
#define RD3_SetLow()   do { LATDbits.LATD3 = 0; } while(0)
#define RD3_Toggle()   do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define RD3_GetValue()         PORTDbits.RD3
#define RD3_SetDigitalInput()   do { TRISDbits.TRISD3 = 1; } while(0)
#define RD3_SetDigitalOutput()  do { TRISDbits.TRISD3 = 0; } while(0)
#define RD3_SetAnalogMode() do { ANSELDbits.ANSD3 = 1; } while(0)
#define RD3_SetDigitalMode()do { ANSELDbits.ANSD3 = 0; } while(0)

// get/set SDO2 aliases
#define SDO2_TRIS               TRISDbits.TRISD4
#define SDO2_LAT                LATDbits.LATD4
#define SDO2_PORT               PORTDbits.RD4
#define SDO2_ANS                ANSELDbits.ANSD4
#define SDO2_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define SDO2_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define SDO2_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define SDO2_GetValue()           PORTDbits.RD4
#define SDO2_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define SDO2_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define SDO2_SetAnalogMode()  do { ANSELDbits.ANSD4 = 1; } while(0)
#define SDO2_SetDigitalMode() do { ANSELDbits.ANSD4 = 0; } while(0)

// get/set GREEN aliases
#define GREEN_TRIS               TRISDbits.TRISD5
#define GREEN_LAT                LATDbits.LATD5
#define GREEN_PORT               PORTDbits.RD5
#define GREEN_ANS                ANSELDbits.ANSD5
#define GREEN_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define GREEN_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define GREEN_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define GREEN_GetValue()           PORTDbits.RD5
#define GREEN_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define GREEN_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define GREEN_SetAnalogMode()  do { ANSELDbits.ANSD5 = 1; } while(0)
#define GREEN_SetDigitalMode() do { ANSELDbits.ANSD5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCB4 pin functionality
 * @Example
    IOCB4_ISR();
 */
void IOCB4_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCB4 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCB4 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCB4_SetInterruptHandler(MyInterruptHandler);

*/
void IOCB4_SetInterruptHandler(void* InterruptHandler);

/**
  @Summary
    Dynamic Interrupt Handler for IOCB4 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCB4_SetInterruptHandler() method.
    This handler is called every time the IOCB4 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCB4_SetInterruptHandler(IOCB4_InterruptHandler);

*/
extern void (*IOCB4_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCB4 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCB4_SetInterruptHandler() method.
    This handler is called every time the IOCB4 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCB4_SetInterruptHandler(IOCB4_DefaultInterruptHandler);

*/
void IOCB4_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/