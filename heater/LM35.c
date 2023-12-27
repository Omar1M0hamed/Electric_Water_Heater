/*
 * LM35.c
 *
 * Created: 10/3/2023 10:24:57 PM
 *  Author: user
 */ 
#include "LM35.h"

void LM35_Init(void){
	ADC_Init();
}

int16 LM35_Read(ADC_ChannelType ChannelId){
	int16 temp = 0;
	temp = (ADC_Read(ChannelId))/4;
	return temp;
}