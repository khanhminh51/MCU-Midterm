/*
 * global.h
 *
 *  Created on: Nov 5, 2022
 *      Author: DELL
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

extern int status;
extern int counter;

#include "software_timer.h"
#include "button.h"
#include "main.h"
#include "display7segment.h"

#define INIT		0
#define RESET		1
#define INCREASE	2
#define DECREASE	3

#endif /* INC_GLOBAL_H_ */
