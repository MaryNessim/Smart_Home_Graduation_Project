/************************************************************************/
/* Name: UART.c                                                    */
/* Author: Mary Ehab                                                 */
/* Version: V1.0                                                        */
/* Usage: This file contains logical implementations of   UART   */
/************************************************************************/
#include "types.h"
#include "Dio.h"
#include "UART.h"
#include <avr/io.h>

void UART_Init(void)
{
	UBRRH=(77>>8);
	UBRRL=77;
	UCSRB|=(1<<RXEN)|(1<<TXEN);
	UCSRC|=(1<<URSEL)|(1<<UCSZ0)|(1<<UCSZ1);
	
}

void UART_Send_data(uint8 data)
{
	 while (!( UCSRA & (1<<UDRE)));                
	 UDR = data;
}

uint8 UART_Recieve_data(void)
{
	while(!(UCSRA) & (1<<RXC));                  
	return UDR;	
}