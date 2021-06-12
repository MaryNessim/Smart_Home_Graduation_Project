#include <avr/io.h>
#include "Types.h"
#include "Dio.h"
#include "Timer.h"
#include "Schedular.h"
#include "ADC.h"
#include "Amit_LCD.h"
#include "UART.h"

int main(void)
{
	Dio_Init();
	Timer_Init();
	ADC_Init();
	Lcd_Init();
	Lcd_Clear();
	UART_Init();
	Start_Os();
}