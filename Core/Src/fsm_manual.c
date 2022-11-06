/*
 * fsm_manual.c
 *
 *  Created on: Nov 5, 2022
 *      Author: DELL
 */

#include "fsm_manual.h"


void fsm_simple_buttons_run(){
	switch(status){
	case RESET:
		if(isButton1Pressed() == 1){
			counter = 0;
			display7segment(counter);
			status = RESET;
		}
		if(isButton2Pressed() == 1){
			//longpressed
			if(isLongPressed_IncButton() == 1){
				counter++;
				display7segment(counter);
				status = INCREASE;
			}
			if(counter < 9){
				counter++;
			}
			else counter = 0;
			display7segment(counter);
			status = INCREASE;
		}
		if(isButton3Pressed() == 1){
			if(counter > 0){
				counter--;
			}
			else counter = 9;
			display7segment(counter);
			status = DECREASE;
		}
		break;
	case INCREASE:
		if(isButton1Pressed() == 1){
			counter = 0;
			display7segment(counter);
			status = RESET;
		}
		if(isButton2Pressed() == 1){
			//longpressed
			if(isLongPressed_IncButton() == 1){
				counter++;
				display7segment(counter);
				status = INCREASE;
			}
			if(counter < 9){
				counter++;
			}
			else counter = 0;
			display7segment(counter);
			status = INCREASE;
		}
		if(isButton3Pressed() == 1){
			if(counter > 0){
				counter--;
			}
			else counter = 9;
			display7segment(counter);
			if(isLongPressed_DecButton() == 1){
				counter--;
				display7segment(counter);
			}
			status = DECREASE;
		}
		break;
	case DECREASE:
		if(isButton1Pressed() == 1){
			counter = 0;
			display7segment(counter);
			status = RESET;
		}
		if(isButton2Pressed() == 1){
			//longpressed
			if(isLongPressed_IncButton() == 1){
				counter++;
				display7segment(counter);
				status = INCREASE;
			}
			if(counter < 9){
				counter++;
			}
			else counter = 0;
			display7segment(counter);
			status = INCREASE;
		}
		if(isButton3Pressed() == 1){
			if(counter > 0){
				counter--;
			}
			else counter = 9;
			display7segment(counter);
			status = DECREASE;
		}
		break;
	default:
		break;

	}
}
