/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16LF15313
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED aliases
#define LED_TRIS                 TRISAbits.TRISA0
#define LED_LAT                  LATAbits.LATA0
#define LED_PORT                 PORTAbits.RA0
#define LED_WPU                  WPUAbits.WPUA0
#define LED_OD                   ODCONAbits.ODCA0
#define LED_ANS                  ANSELAbits.ANSA0
#define LED_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LED_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LED_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LED_GetValue()           PORTAbits.RA0
#define LED_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LED_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define LED_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define LED_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define LED_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define LED_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define LED_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set pinClk aliases
#define pinClk_TRIS                 TRISAbits.TRISA1
#define pinClk_LAT                  LATAbits.LATA1
#define pinClk_PORT                 PORTAbits.RA1
#define pinClk_WPU                  WPUAbits.WPUA1
#define pinClk_OD                   ODCONAbits.ODCA1
#define pinClk_ANS                  ANSELAbits.ANSA1
#define pinClk_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define pinClk_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define pinClk_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define pinClk_GetValue()           PORTAbits.RA1
#define pinClk_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define pinClk_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define pinClk_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define pinClk_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define pinClk_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define pinClk_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define pinClk_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define pinClk_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set pinDIO aliases
#define pinDIO_TRIS                 TRISAbits.TRISA2
#define pinDIO_LAT                  LATAbits.LATA2
#define pinDIO_PORT                 PORTAbits.RA2
#define pinDIO_WPU                  WPUAbits.WPUA2
#define pinDIO_OD                   ODCONAbits.ODCA2
#define pinDIO_ANS                  ANSELAbits.ANSA2
#define pinDIO_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define pinDIO_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define pinDIO_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define pinDIO_GetValue()           PORTAbits.RA2
#define pinDIO_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define pinDIO_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define pinDIO_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define pinDIO_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define pinDIO_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define pinDIO_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define pinDIO_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define pinDIO_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set A aliases
#define A_TRIS                 TRISAbits.TRISA4
#define A_LAT                  LATAbits.LATA4
#define A_PORT                 PORTAbits.RA4
#define A_WPU                  WPUAbits.WPUA4
#define A_OD                   ODCONAbits.ODCA4
#define A_ANS                  ANSELAbits.ANSA4
#define A_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define A_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define A_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define A_GetValue()           PORTAbits.RA4
#define A_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define A_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define A_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define A_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define A_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define A_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define A_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define A_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set B aliases
#define B_TRIS                 TRISAbits.TRISA5
#define B_LAT                  LATAbits.LATA5
#define B_PORT                 PORTAbits.RA5
#define B_WPU                  WPUAbits.WPUA5
#define B_OD                   ODCONAbits.ODCA5
#define B_ANS                  ANSELAbits.ANSA5
#define B_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define B_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define B_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define B_GetValue()           PORTAbits.RA5
#define B_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define B_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define B_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define B_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define B_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define B_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define B_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define B_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

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
    Interrupt on Change Handler for the IOCAF4 pin functionality
 * @Example
    //IOCAF4_ISR();
 */
//void IOCAF4_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF4 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF4 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    //IOCAF4_SetInterruptHandler(MyInterruptHandler);

*/
//void IOCAF4_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF4 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF4_SetInterruptHandler() method.
    This handler is called every time the IOCAF4 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    //IOCAF4_SetInterruptHandler(IOCAF4_InterruptHandler);

*/
//extern void (*IOCAF4_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF4 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF4_SetInterruptHandler() method.
    This handler is called every time the IOCAF4 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    //IOCAF4_SetInterruptHandler(IOCAF4_DefaultInterruptHandler);

*/
//void IOCAF4_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF5 pin functionality
 * @Example
    //IOCAF5_ISR();
 */
//void IOCAF5_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF5 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF5 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    //IOCAF5_SetInterruptHandler(MyInterruptHandler);

*/
//void IOCAF5_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF5 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF5_SetInterruptHandler() method.
    This handler is called every time the IOCAF5 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    //IOCAF5_SetInterruptHandler(IOCAF5_InterruptHandler);

*/
//extern void (*IOCAF5_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF5 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF5_SetInterruptHandler() method.
    This handler is called every time the IOCAF5 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF5_SetInterruptHandler(IOCAF5_DefaultInterruptHandler);

*/
//void IOCAF5_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/