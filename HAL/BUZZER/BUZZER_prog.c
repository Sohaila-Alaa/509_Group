/*
 * BUZZER_prog.c
 *
 *  Created on: 17 Sep 2022
 *      Author: DELL G3
 */
#include "BUZZER_interface.h"
#include <util/delay.h>


void H_BUZZER_Void_BuzzerInit()
	{
	M_DIO_Void_SetPinDirection(BUZZER_PIN,OUTPUT);
	}

void H_BUZZER_Void_BuzzerSetOn()
	{
	M_DIO_Void_SetPinValue(BUZZER_PIN,HIGH);
		}

void H_BUZZER_Void_BuzzerSetOff()
	{
	M_DIO_Void_SetPinValue(BUZZER_PIN,LOW);
		}

void H_Buzzer_Void_BuzzerOnce()
	{
	H_BUZZER_Void_BuzzerInit();
	H_BUZZER_Void_BuzzerSetOn();
	_delay_ms(BUZZER_TIME_ON);
	H_BUZZER_Void_BuzzerSetOff();
		}




