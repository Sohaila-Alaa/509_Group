/*
 * PB_config.h
 *
 *  Created on: 17 Sep 2022
 *      Author: DELL G3
 */

#ifndef HAL_PB_PB_CONFIG_H_
#define HAL_PB_PB_CONFIG_H_

/*
 * SELECT PBs PINS
 */
#define PushButton0_PIN     PB0_PIN
#define PushButton1_PIN     PD6_PIN
#define PushButton2_PIN     PD2_PIN

/*
 * SELECT PUSHBUTTON DEBOUNCING TIME IM MS
 */

#define PB_DEBOUNCING_TIME    130
/*
 * SELECT PB_MODE: ACTIVE_HIGH, ACTIVE_LOW
 */

#define PB_MODE  ACTIVE_HIGH

#endif /* HAL_PB_PB_CONFIG_H_ */
