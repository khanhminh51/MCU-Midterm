/*
 * button.h
 *
 *  Created on: Nov 5, 2022
 *      Author: DELL
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

int isButton1Pressed();
int isButton2Pressed();
int isButton3Pressed();

int isLongPressed_ResetButton();
int isLongPressed_IncButton();
int isLongPressed_DecButton();

void getKeyInput();

#endif /* INC_BUTTON_H_ */
