/************************************************************************/
/* Name: bluetooth.c                                                 */
/* Author: Mary Ehab                                                 */
/* Version: V1.0                                                        */
/* Usage: This file blutooth Module                                     */
/************************************************************************/
#include "Types.h"
#include "Dio.h"
#include "Dio_cfg.h"
#include "UART.h"


void bluetooth (uint8 text)
{
	UART_Init();
	UART_Send_data(text);
}