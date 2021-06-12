/*
 * Q9_MaryEhab_SmartHome.c
 *
 * Created: 6/11/2021 12:37:33 PM
 * Author : 20128
 */ 

#include <avr/io.h>
#include "Types.h"
#include "Dio.h"
#include "Timer.h"
#include "Schedular.h"
#include "ADC.h"
#include "LCD.h"
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

