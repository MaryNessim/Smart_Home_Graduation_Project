/************************************************************************/
/* Name: Electri_Valve.c                                                       */
/* Author: Mary Ehab                                                 */
/* Version: V1.0                                                        */
/* Usage: This file contains logical implementations of Electric valve Module     */
/************************************************************************/
#include "Types.h"
#include "Dio.h"
#include "Relay.h"
#include "Electric_Valve.h"


void Elec_Valve(uint8 level)
{
	if (HIGH==level)
	{
		Relay_Handler(HIGH);
	} 
	else
	{
		Relay_Handler(LOW);
	}
	}
	
