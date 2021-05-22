#include <msp430.h>
#include <math.h>

#include "incSensor.h"

/*
 * incSensor.c
 *
 *  Created on: May 18, 2021
 *      Author: Raymond
 */

void singleADCToDeg(unsigned int Nadc, char axis){
    double angle, numVal;

    if (axis == 'x'){
        numVal = (2*(double)Nadc)/4095;

        ax = numVal - 1;
        angle = asin(ax);
        xDeg = angle*180/PI;
    }
    else if (axis == 'y'){
        numVal = (double)Nadc/4095;

        ay = numVal;
        angle = acos(ay);
        yDeg = (angle*180/PI);
    }
}

void combADCToDeg(double vectX, double vectY){

    angleRad = atan2(vectX, vectY);
    angleDeg = angleRad * 180;
    angleDeg = (angleDeg/PI);
}
