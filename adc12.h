/*************************************************************************************************
 * adc12.h
 * - C interface file for MSP430 ADC_12
 *
 *  Author: Greg Scutt
 *  Created on: May 1, 2018
 **************************************************************************************************/

#ifndef ADC12_H_
#define ADC12_H_

int adc12Result[300]; // public global variable declarations
int i, j;

unsigned int xCode[10],
             yCode[10];

int sampleX, sampleY;

#define SAMPLE_ADC 10000   // delay between ADC12SC H-->L

void adc12Cfg(const char * vref, char sampMode, char convTrigger, char adcChannel);
void adc12SampSWConv(void);


#endif /* ADC12_H_ */
