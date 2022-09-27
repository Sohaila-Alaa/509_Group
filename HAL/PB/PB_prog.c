/*
 * PB_prog.c
 *
 *  Created on: 17 Sep 2022
 *      Author: DELL G3
 */
#include "PB_interface.h"
#include <util/delay.h>


void H_PB_Void_PBInit(u8 Copy_U8_PushButton)
{	switch(Copy_U8_PushButton)
	{
	case PB0: M_DIO_Void_SetPinDirection(PushButton0_PIN,OUTPUT);break;
	case PB1: M_DIO_Void_SetPinDirection(PushButton1_PIN,OUTPUT);break;
	case PB2: M_DIO_Void_SetPinDirection(PushButton2_PIN,OUTPUT);break;
	default: break;
	}
}

u8 H_PB_U8_PBRead(u8 Copy_U8_PushButton)
{
	u8 Local_U8_Reading = RELEASED;
	switch(Copy_U8_PushButton)
		{case PB0:
			if(M_DIO_Void_GetPinValue(PushButton0_PIN) == PRESSED)
			{
				_delay_ms(PB_DEBOUNCING_TIME);
			if(M_DIO_Void_GetPinValue(PushButton0_PIN) == PRESSED)
				{
				while (Copy_U8_PushButton == PRESSED);
				Local_U8_Reading = PRESSED;
				}
			}break;
		case PB1:
					if(M_DIO_Void_GetPinValue(PushButton1_PIN) == PRESSED)
					{
						_delay_ms(PB_DEBOUNCING_TIME);
					if(M_DIO_Void_GetPinValue(PushButton1_PIN) == PRESSED)
						{
						while (Copy_U8_PushButton == PRESSED);
						Local_U8_Reading = PRESSED;
						}
					}break;
		case PB2:
					if(M_DIO_Void_GetPinValue(PushButton2_PIN) == PRESSED)
					{
						_delay_ms(PB_DEBOUNCING_TIME);
					if(M_DIO_Void_GetPinValue(PushButton2_PIN) == PRESSED)
						{
						while (Copy_U8_PushButton == PRESSED);
						Local_U8_Reading = PRESSED;
						}
					}
					break;
					default:break;
		}
	return Local_U8_Reading;
}

