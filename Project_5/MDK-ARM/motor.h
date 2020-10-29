#ifndef _MOTOR_H
#define _MOTOR_H
//added by pzs
#include "sys.h"


#define LED0 PBout(1)   //LED0
#define LED1 PBout(0)   //LED1

void MOTOR_Init(void);

void Car_Run(void);
void Car_Reverse(void);
void Car_TurnLeft(void); 
void Car_TurnRight(void);
void Car_Stop(void);
 
#endif

