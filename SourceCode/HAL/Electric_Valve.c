#include "Types.h"
#include "Dio.h"
#include "relay.h"
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
	
