/************************************************************************/
/* Name: Smoke_Sensor.c                                                     */
/* Author: Mary Ehab                                                 */
/* Version: V1.0                                                        */
/* Usage: This file contains logical implementations of Smoke sensor     */
/************************************************************************/
#include "Types.h"
#include "ADC.h"

uint16 smoke;

void Smoke_Sensor(void)
{
	smoke = ADC_Conversion(ADC0);
}