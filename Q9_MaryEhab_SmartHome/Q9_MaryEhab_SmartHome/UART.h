/************************************************************************/
/* Name: UART.c                                                     */
/* Author: Mary Ehab                                                 */
/* Version: V1.0                                                        */
/* Usage: This file contains logical implementations of UART     */
/************************************************************************/
#ifndef UART_H_
#define UART_H_

extern void UART_Init(void);
extern void UART_Send_data(uint8 data);
extern uint8 UART_Recieve_data(void);



#endif /* UART_H_ */