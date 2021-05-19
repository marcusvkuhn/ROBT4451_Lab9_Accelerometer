#include <msp430.h>
#include <stdio.h>

#include "usciUart.h"
#include "adc12.h"
#include "incSensor.h"

/**
 * main.c
 */
int main(void){
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
    char angStr[30];

    double xDeg,
           yDeg;

	usciA1UartInit();

    adc12Cfg("2V5", 0, 1, 0);

    __enable_interrupt();                   // enable global device interrupts

    while(1){

        xDeg = singleVoltToDeg(xCode, 'x');
        yDeg = singleVoltToDeg(yCode, 'y');

        __delay_cycles(104800);

            sprintf(angStr, "x = %.2f | y = %.2f\n\r", xDeg, yDeg);
            usciA1UartTxString(angStr);
    }

	return 0;
}
