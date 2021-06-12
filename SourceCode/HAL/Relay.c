#include "Types.h"
#include "Dio.h"
#include "relay.h"

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