/*
 * incSensor.h
 *
 *  Created on: May 18, 2021
 *      Author: Raymond
 */

#ifndef INCSENSOR_H_
#define INCSENSOR_H_

#define PI 3.14159265359


void singleADCToDeg(unsigned int Nadc, char axis);
void combADCToDeg(double vectX, double vectY);

double angleRad, angleDeg, xDeg, yDeg, ax, ay;

#endif /* INCSENSOR_H_ */
