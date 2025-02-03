/*
 * SSD_program.c
 *
 *  Created on: Jan 16, 2025
 *      Author: msaye
 */

#include<util/delay.h>

#include "../include/LIB/BIT_MATH.h"
#include "../include/LIB/STD_TYPES.h"

#include "../include/MCAL/DIO/DIO_Interface.h"

#include "../include/HAL/SSD/SSD_interface.h"
#include "../include/HAL/SSD/SSD_private.h"
#include "../include/HAL/SSD/SSD_cfg.h"

#define F_CPU 8000000UL

void HSSD_VoidDisplay(const u8 A_u8Number)
{

		switch(A_u8Number)
		{
		case 0: MDIO_voidSetPortValue(SSD_PORT, ZERO);  break;
		case 1: MDIO_voidSetPortValue(SSD_PORT, ONE);   break;
		case 2: MDIO_voidSetPortValue(SSD_PORT, TWO);   break;
		case 3: MDIO_voidSetPortValue(SSD_PORT, THREE); break;
		case 4: MDIO_voidSetPortValue(SSD_PORT, FOUR);  break;
		case 5: MDIO_voidSetPortValue(SSD_PORT, FIVE);  break;
		case 6: MDIO_voidSetPortValue(SSD_PORT, SIX);   break;
		case 7: MDIO_voidSetPortValue(SSD_PORT, SEVEN); break;
		case 8: MDIO_voidSetPortValue(SSD_PORT, EIGHT); break;
		case 9: MDIO_voidSetPortValue(SSD_PORT, NINE);  break;
		default: break;
		}
}

void HSSD_VoidDisplayByPort(u8 A_u8PortID, const u8 A_u8Number)
{

		switch(A_u8Number)
		{
		case 0: MDIO_voidSetPortValue(A_u8PortID, ZERO);  break;
		case 1: MDIO_voidSetPortValue(A_u8PortID, ONE);   break;
		case 2: MDIO_voidSetPortValue(A_u8PortID, TWO);   break;
		case 3: MDIO_voidSetPortValue(A_u8PortID, THREE); break;
		case 4: MDIO_voidSetPortValue(A_u8PortID, FOUR);  break;
		case 5: MDIO_voidSetPortValue(A_u8PortID, FIVE);  break;
		case 6: MDIO_voidSetPortValue(A_u8PortID, SIX);   break;
		case 7: MDIO_voidSetPortValue(A_u8PortID, SEVEN); break;
		case 8: MDIO_voidSetPortValue(A_u8PortID, EIGHT); break;
		case 9: MDIO_voidSetPortValue(A_u8PortID, NINE);  break;
		default: break;

	}

}

void HSSD_VoidDisplayAscending(void)
{
	for(u8 i = 0 ; i<10 ; i++)
	{
		HSSD_VoidDisplay(i);
		_delay_ms(SSD_DISPLAY_DELAY_MS);
	}
}
void HSSD_VoidDisplayDescending(void)
{
	for(u8 i = 9 ; i >= 0 ; i++)
	{
		HSSD_VoidDisplay(i);
		_delay_ms(SSD_DISPLAY_DELAY_MS);
	}
}
