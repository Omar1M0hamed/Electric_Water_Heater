/*
 * GINT.c
 *
 * Created: 3/7/2023 10:10:55 PM
 *  Author: User
 */ 

#include "GINT.h"

void GINT_Enable_AllInterrupts(){
	SetBit(SREG_R, GINT_I_Bit);
}
void GINT_Disable_AllInterrupts(){
	ClearBit(SREG_R, GINT_I_Bit);
}