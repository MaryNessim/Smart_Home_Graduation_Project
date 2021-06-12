/************************************************************************/
/* Name: Temp_Sensor.c                                                     */
/* Author: Mary Ehab                                                 */
/* Version: V1.0                                                        */
/* Usage: This file contains logical implementations of Temp sensor  */
/************************************************************************/
#include "Types.h"
#include "ADC.h"

sint8 temp;

void Temp_Sensor(void)
{
	temp = ((ADC_Conversion(ADC1)/12.89*1000) - 40000)/1000;
}