/*
 * APP.c
 *
 *  Created on: Jan 15, 2025
 *      Author: msaye
 */

// BUILT IN LIB
#include<avr/io.h>
#include<util/delay.h>
// LIB Layer
#include"../include/LIB/BIT_MATH.h"
#include"../include/LIB/STD_TYPES.h"
// MCAL
#include"../include/MCAL/DIO/DIO_Interface.h"
//HAL
#include"../include/HAL/SSD/SSD_interface.h"
#include"../include/HAL/LED/LED_interface.h"


#define F_CPU 8000000UL

int main ()
{
	u8 local_u8PinValue = 0 ;

	// CFG -->SET PORTA AS O/P FOR SSD
	// 		  SET PORTB AS O/P FOR LEDS
	// 		  SET PORTC FROM PC0 TO PC 3 AS I/P PULLUP FOR DIP SWITCH
	MDIO_voidInit();

	while(1)
	{
		local_u8PinValue = (~(MDIO_u8GetPortValue(DIO_PORTC)) & 0x0F );

	if(local_u8PinValue < 9)
	{
		HSSD_VoidDisplay(local_u8PinValue);
		for(u8 i = 0 ; i < 8 ; i++)
		{
			if (i < local_u8PinValue)
				MDIO_voidSetPinValue(DIO_PORTB,i,DIO_HIGH);
			else
				MDIO_voidSetPinValue(DIO_PORTB,i,DIO_LOW);

			}
		}
		else
		{
			HSSD_VoidDisplay(0);
			MDIO_voidSetPortValue(DIO_PORTB,0x00);

		}
	}
}
