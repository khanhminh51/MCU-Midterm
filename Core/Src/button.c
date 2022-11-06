
#include "button.h"


int keyReg0[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int keyReg1[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int keyReg2[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};

int keyReg3[3] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int timerForKeyPress = 100;

int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;

int LongResetButton = 0;
int LongIncButton = 0;
int LongDecButton = 0;


int isButton1Pressed()
{
	if(button1_flag == 1)
	{
		button1_flag = 0;
		return 1;
	}
	else return 0;
}
int isButton2Pressed()
{
	if(button2_flag == 1)
	{
		button2_flag = 0;
		return 1;
	}
	else return 0;
}
int isButton3Pressed()
{
	if(button3_flag == 1)
	{
		button3_flag = 0;
		return 1;
	}
	else return 0;
}
int isLongPressed_ResetButton(){
	if(LongResetButton == 1){
		LongResetButton = 0;
		return 1;
	}
	else return 0;
}
int isLongPressed_IncButton(){
	if(LongIncButton == 1){
		LongIncButton = 0;
		return 1;
	}
	else return 0;
}
int isLongPressed_DecButton(){
	if(LongDecButton == 1){
		LongDecButton = 0;
		return 1;
	}
	else return 0;
}

void getKeyInput()
{
	for(int i = 0; i < 3; i++){
		keyReg0[i] = keyReg1[i];
		keyReg1[i] = keyReg2[i];
		if(i == 0){
			keyReg2[i] = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
			if((keyReg0[i] == keyReg1[i]) && (keyReg1[i] == keyReg2[i]))
			{
				if(keyReg3[i] != keyReg2[i])
				{
					keyReg3[i] = keyReg2[i];
					if(keyReg2[i] == PRESSED_STATE)
					{
						button1_flag = 1;
						timerForKeyPress = 100;
					}
				}
				else
				{
					if(keyReg2[i] == PRESSED_STATE){
						timerForKeyPress--;
						if(timerForKeyPress == 0)
						{
								LongResetButton = 1;
							timerForKeyPress = 100;
						}
					}

				}

			}
		}
		if(i == 1){
			keyReg0[i] = keyReg1[i];
			keyReg1[i] = keyReg2[i];
			keyReg2[i] = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
			if((keyReg0[i] == keyReg1[i]) && (keyReg1[i] == keyReg2[i]))
			{
				if(keyReg3[i] != keyReg2[i])
				{
					keyReg3[i] = keyReg2[i];
					if(keyReg2[i] == PRESSED_STATE)
					{
						button2_flag = 1;
						timerForKeyPress = 100;
					}
				}
				else
				{
					if(keyReg2[i] == PRESSED_STATE){
						timerForKeyPress--;
						if(timerForKeyPress == 0)
						{
								LongIncButton = 1;
							timerForKeyPress = 100;
						}
					}

				}

			}
		}
		if(i == 2){
			keyReg0[i] = keyReg1[i];
			keyReg1[i] = keyReg2[i];
			keyReg2[i] = HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);
			if((keyReg0[i] == keyReg1[i]) && (keyReg1[i] == keyReg2[i]))
			{
				if(keyReg3[i] != keyReg2[i])
				{
					keyReg3[i] = keyReg2[i];
					if(keyReg2[i] == PRESSED_STATE)
					{
						button3_flag = 1;
						timerForKeyPress = 100;
					}
				}
				else
				{
					if(keyReg2[i] == PRESSED_STATE){
						timerForKeyPress--;
						if(timerForKeyPress == 0)
						{
								LongDecButton = 1;
							timerForKeyPress = 100;
						}
					}
				}
			}
		}

	}
}


