/*
 * SSD_interface.h
 *
 *  Created on: Jan 16, 2025
 *      Author: msaye
 */

#ifndef INCLUDE_HAL_SSD_SSD_INTERFACE_H_
#define INCLUDE_HAL_SSD_SSD_INTERFACE_H_

#define ZERO  0b00111111
#define ONE   0b00000110
#define TWO   0b01011011
#define THREE 0b01001111
#define FOUR  0b01100110
#define FIVE  0b01101101
#define SIX   0b01111101
#define SEVEN 0b00000111
#define EIGHT 0b01111111
#define NINE  0b01101111

void HSSD_VoidDisplay(const u8 A_u8Number);
void HSSD_VoidDisplayByPort(u8 A_u8PortID, const u8 A_u8Number);
void HSSD_VoidDisplayAscending(void);
void HSSD_VoidDisplayDescending(void);

#endif /* INCLUDE_HAL_SSD_SSD_INTERFACE_H_ */
