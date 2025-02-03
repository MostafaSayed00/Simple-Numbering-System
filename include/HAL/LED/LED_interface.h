/*
 * LED_interface.h
 *
 *  Created on: Jan 15, 2025
 *      Author: msaye
 */

#ifndef INCLUDE_HAL_LED_LED_INTERFACE_H_
#define INCLUDE_HAL_LED_LED_INTERFACE_H_

#define LED_ON  1
#define LED_OFF 0

void HLED_voidTurnOn(const u8 A_u8Port,const u8 A_u8Pin);
void HLED_voidTurnOff(const u8 A_u8Port,const u8 A_u8Pin);
void HLED_voidSetLedStatus(const u8 A_u8Port,const u8 A_u8Pin, const u8 A_u8Value);
void HLED_voidToggleLED(const u8 A_u8Port, const u8 A_u8Pin);


#endif /* INCLUDE_HAL_LED_LED_INTERFACE_H_ */
