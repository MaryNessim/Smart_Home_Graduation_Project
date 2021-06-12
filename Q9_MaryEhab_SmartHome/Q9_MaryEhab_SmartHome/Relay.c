/************************************************************************/
/* Name: Relay.c                                                     */
/* Author: Mary Ehab                                                 */
/* Version: V1.0                                                        */
/* Usage: This file contains logical implementations of Relay Module     */
/************************************************************************/
#include "Types.h"
#include "Dio.h"
#include "Relay.h"

void Relay_Handler(uint8 level)
{
	if (level==HIGH)
	{
		Dio_WritePin(PD,3,HIGH);
	}
	else
	{
		Dio_WritePin(PD,3,LOW);
	}
}