#include "Types.h"
#include "ADC.h"

uint16 smoke;

void Smoke_Sensor(void)
{
	smoke = ADC_Conversion(ADC0);
}