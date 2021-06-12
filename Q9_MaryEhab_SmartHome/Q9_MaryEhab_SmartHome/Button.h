/************************************************************************/
/* Name: Button.h                                                       */
/* Author: Mary Ehab                                                 */
/* Version: V1.0                                                        */
/* Usage: This file contains logical implementations of button Module     */
/************************************************************************/
#include "Types.h"
#include "Dio.h"
#include "Buzzer.h"

#ifndef BUTTON_H_
#define BUTTON_H_

typedef enum
{
	BUTTON0=0,
	BUTTON1,
	BUTTON2
}Button_Name_t;

extern uint8 Button_Read(Button_Name_t Button_Num);
extern uint8 Button_Read_actual(Button_Name_t Button_Name);
extern void Button0_Task(void);
extern void Button1_Task(void);
extern void Button2_Task(void);

#endif /* BUTTON_H_ */
	
