#include "Types.h"
#include "ADC.h"

sint8 temp;

void Temp_Sensor(void)
{
	temp = ((ADC_Conversion(ADC1)/12.89*1000) - 40000)/1000;
}