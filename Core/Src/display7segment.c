/*
 * display7segment.c
 *
 *  Created on: Nov 5, 2022
 *      Author: DELL
 */

#include "display7segment.h"

void display7segment(int number){
	  HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, RESET);
	  HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
	  if (number == 0 ){
		  HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, SET);
	  }
	  else if (number == 1){
		  HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, SET);
		  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, SET);
		  HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, SET);
		  HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, SET);
		  HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, SET);
	  }
	  else if (number == 2){
		  HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, SET);
		  HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, SET);
		  HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
	  }
	  else if (number == 3){
		  HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, SET);
		  HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, SET);
		  HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
	  }
	  else if (number == 4){
		  HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, SET);
		  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, SET);
		  HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, SET);
		  HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
	  }
	  else if (number == 5){
		  HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, SET);
		  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, SET);
		  HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
	  }
	  else if (number == 6){
		  HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, SET);
		  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
	  }
	  else if (number == 7){
		  HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, SET);
		  HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, SET);
		  HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, SET);
		  HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, SET);
	  }
	  else if (number == 8){
		  HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
	  }
	  else if (number == 9){
		  HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, SET);
		  HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, RESET);
		  HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
	  }
  }
