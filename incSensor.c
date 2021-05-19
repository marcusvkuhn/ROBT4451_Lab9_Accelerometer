#include <msp430.h>
#include <math.h>

#include "incSensor.h"

/*
 * incSensor.c
 *
 *  Created on: May 18, 2021
 *      Author: Raymond
 */

double singleVoltToDeg(unsigned int Nadc, char axis){
    double angle, angleDeg, numVal, numVal2;

    numVal = 2*Nadc;

    numVal2 = numVal/4095;

    if (axis == 'x'){
        angle = asin(numVal2-G);
        angleDeg = angle*180/PI;
    }
    else if (axis == 'y'){
        angle = acos(numVal2-G);
        angleDeg = (angle*180/PI) - 90;
    }

    return angleDeg;
}
