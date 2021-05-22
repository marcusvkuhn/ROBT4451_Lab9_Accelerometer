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
	
    char angStr[50];
    int sumX, sumY, doneAvgX, doneAvgY;

	usciA1UartInit();

    adc12Cfg("2V5", 0, 1, 0);

    __enable_interrupt();                   // enable global device interrupts

    while(1){
//        if (sampleX){
//            sumX = sumX + xCode[i];
//            sampleX = 0;
//        }
//        if (sampleY){
//            sumY = sumY + yCode[i];
//            sampleY = 0;
//        }
//
//        if(i>9){
//            sumX = sumX/10;
//            doneAvgX = 1;
//            i = 0;
//        }
//        if(j>9){
//            sumY = sumY/10;
//            doneAvgY = 1;
//            j = 0;
//        }

//        if (doneAvgX && doneAvgY){
            singleADCToDeg(xCode[i], 'x');
            singleADCToDeg(yCode[j], 'y');
            combADCToDeg(ax, ay);

            __delay_cycles(104800);

            sprintf(angStr, "x = %.2f | y = %.2f | %.2f\n\r", xDeg, yDeg, angleDeg);
            usciA1UartTxString(angStr);
//            doneAvgX = 0;
//            doneAvgY = 0;
//            sumX = 0;
//            sumY = 0;
//            }
    }

	return 0;
}
