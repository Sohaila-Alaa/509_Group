/*
 * BUZZER_interface.h
 *
 *  Created on: 17 Sep 2022
 *      Author: DELL G3
 */

#ifndef HAL_BUZZER_BUZZER_INTERFACE_H_
#define HAL_BUZZER_BUZZER_INTERFACE_H_

////////////////////////////////////////////////////////INCLUDES//////////////////////////////////////////////////////////////////////////////////////
#include "DIO_interface.h"
#include "BUZZER_config.h"
////////////////////////////////////////////////////////PROTOTYPES//////////////////////////////////////////////////////////////////////////////////////
void H_BUZZER_Void_BuzzerInit(void);
void H_BUZZER_Void_BuzzerSetOn(void);
void H_BUZZER_Void_BuzzerSetOff(void);
void H_Buzzer_Void_BuzzerOnce(void);

#endif /* HAL_BUZZER_BUZZER_INTERFACE_H_ */
