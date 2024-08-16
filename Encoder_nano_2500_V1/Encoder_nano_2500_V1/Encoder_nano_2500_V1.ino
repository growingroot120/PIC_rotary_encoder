// V1 - uses this: https://github.com/buxtronix/arduino/blob/master/libraries/Rotary/examples/interrupt/interrupt.ino
// new library for rotary encoders

#include <Arduino.h>
#include <TM1637Display.h>              //https://github.com/avishorp/TM1637
#include "Rotary.h"


// Rotary encoder is wired with the common to ground and the two
// outputs to pins 2 and 3.
Rotary rotary = Rotary(2, 3);
#define SegmentCLK 5
#define SegmentDIO 4
#define LED 13
#define A 2  // stock 2
#define B 3  // stock 3

#define TRUE 1
#define FALSE 0

volatile int counter = 0;
volatile int counter1 = 0;
int currentStateCLK;
int lastStateCLK;
int LEDstate;
long temp;

TM1637Display display(SegmentCLK, SegmentDIO);

void setup() {
  // Setup Serial Monitor
  //Serial.begin(9600);

  // Call updateEncoder() when any high/low changed seen
  // on interrupt 0 (pin 2), or interrupt 1 (pin 3)
  attachInterrupt(0, rotate, CHANGE);
  attachInterrupt(1, rotate, CHANGE);
  pinMode(LED, OUTPUT);

  // setup display
  display.setBrightness(0x0a);
  display.clear();
  //counter = 2500;
  //display.showNumberDecEx(counter, 0x40, true, 4, 0);  // display version
  //delay(2000);
  //counter = 0;
  display.showNumberDecEx(counter, 0x40, true, 4, 0);  // display counter number with :
}

void loop() {

  //  if (lastStateCLK = currentStateCLK)
  //  {
  counter1 = counter * 4;
  display.showNumberDecEx(counter1, 0x40, true, 4, 0);  // display counter number with :

  //  }
  delay(20);
}

// rotate is called anytime the rotary inputs change state.
void rotate() {
  unsigned char result = rotary.process();
  if (result == DIR_CW) counter++; // stock CW
  else if (result == DIR_CCW) counter--;  // stock CCW
  if (counter <= -1) counter = 2499;
  if (counter >= 2500) counter = 0;
  LEDstate = !LEDstate;
}
