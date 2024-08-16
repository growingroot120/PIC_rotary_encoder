/*
* Project Name: countdown
* File: main.c 
* Description: Kitchen countdown timer with tm1637 module.
* Author: Gavin Lyons.
* Complier: xc8 v2.05 compiler
* PIC: PIC16F18313
* IDE:  MPLAB X v5.05 
* Created May 2019
* Encoder Code Added by Jayanth D, WhatsApp: +919742453836
*/

//https://deepbluembedded.com/interrupts-in-pic-microcontrollers/
//https://github.com/microchip-pic-avr-examples/pic18f16q40-quadrature-decoder/tree/master
//https://electronics.stackexchange.com/questions/496759/pic18f-rotary-encoder-code-help-xc8
//https://www.youtube.com/watch?v=dy9GlerX_NE
//https://github.com/microchip-pic-avr-examples/pic18f57q43-cnano-ioc-mplab-melody
 
#include "mcc_generated_files/mcc.h"
#include "TM1637Display.h"

#define DELAY 500

#define EncoderA PORTAbits.RA5
#define EncoderB PORTAbits.RA4

int counter = 0;
int counter1 = 0;

const uint8_t SEG_DONE[] = {
    SEG_B | SEG_C | SEG_D | SEG_E | SEG_G,           // d
    SEG_A | SEG_B | SEG_C | SEG_D | SEG_E | SEG_F,   // O
    SEG_C | SEG_E | SEG_G,                           // n
    SEG_A | SEG_D | SEG_E | SEG_F | SEG_G            // E
};

/* ===== Function prototypes  ==== */
void Countdown(void);
void Setup(void);
void Display_done(void);
 
void __interrupt() ISR(void)
{
    
  if((PIE0bits.IOCIE == 1) && (IOCANbits.IOCAN5 == 1) && (IOCAFbits.IOCAF5 == 1)) {
        IOCAFbits.IOCAF5 = 0;
        PIR0bits.IOCIF = 0;
        
        if(EncoderA == EncoderB)counter--;
        else counter++;
        
        if (counter <= -1) counter = 2499;
        if (counter >= 2500) counter = 0;
  }   
}

/* ====  Main application ==== */
void main(void)
{
    Setup();
       
    while (1)
    {      
        while(1)
        {           
            counter1 = counter * 4;
            showNumberDecEx(counter1, 0x40, true, 4, 0);
            __delay_ms(20);
        }

    }
    
}

/* ======  END of MAIN ==== */

/* ===== Function Space ==== */

// initialize the device
void Setup(void)
{        
    SYSTEM_Initialize();
   
    PIE0bits.IOCIE = 1;
    IOCANbits.IOCAN5 = 1;
    PIR0bits.IOCIF = 0;
    INTCONbits.PEIE = 1;
    INTCONbits.GIE = 1;
    
    //INTERRUPT_GlobalInterruptEnable();
    //INTERRUPT_PeripheralInterruptEnable();
    setBrightness(0x03, true);
}

//Display done on seven segment display.
void Display_done(void)
{
    setSegments(SEG_DONE,4,0);
   
}

/*   End of File  */