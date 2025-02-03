/*
 * LED_programe.c
 *
 *  Created on: Jan 15, 2025
 *      Author: msaye
 */


#include"../include/LIB/BIT_MATH.h"
#include"../include/LIB/STD_TYPES.h"

#include"../include/MCAL/DIO/DIO_Interface.h"

#include"../include/HAL/LED/LED_interface.h"
#include"../include/HAL/LED/LED_private.h"
#include"../include/HAL/LED/LED_cfg.h"

void HLED_voidTurnOn(const u8 A_u8Port,const u8 A_u8Pin)
{
	if ((A_u8Port <= DIO_PORTD) && (A_u8Pin <= PIN7))
	{
		MDIO_voidSetPinValue(A_u8Port, A_u8Pin, LED_ON);
	}
}

void HLED_voidTurnOff(const u8 A_u8Port,const u8 A_u8Pin)
{
	if ((A_u8Port <= DIO_PORTD) && (A_u8Pin <= PIN7))
	{
		MDIO_voidSetPinValue(A_u8Port, A_u8Pin, LED_OFF);
	}
}

void HLED_voidSetLedStatus(const u8 A_u8Port,const u8 A_u8Pin, const u8 A_u8Value)
{
	MDIO_voidSetPinValue(A_u8Port, A_u8Pin, A_u8Value);

}

void HLED_voidToggleLed(const u8 A_u8Port, const u8 A_u8Pin)
{
	MDIO_voidTogglePin(A_u8Port, A_u8Pin);
}
