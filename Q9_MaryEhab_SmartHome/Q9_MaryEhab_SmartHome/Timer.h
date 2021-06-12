/************************************************************************/
/* Name: timer.h                                                     */
/* Author: Mary Ehab                                                 */
/* Version: V1.0                                                        */
/* Usage: This file contains logical implementations of Timer    */
/************************************************************************/
#ifndef TIMER_H_
#define TIMER_H_

extern void Timer_Init(void);
extern volatile uint8 Timer_Flag;
extern volatile uint32 Timer_Counter;

#endif /* TIMER_H_ */