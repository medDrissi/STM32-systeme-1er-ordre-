#ifndef _ODE_1_SYSTEM_H_
#define _ODE_1_SYSTEM_H_
#include "math.h"

typedef struct {
	
	float uk;
	float yk;
	float yk1;
	float G;
	float Tau;
	float Te;
	float a0;
	float a1;
}ODE1SYSTEM_Struct ;

void Ode1system_Calc_Init(ODE1SYSTEM_Struct *p);
void Ode1system_Calc(ODE1SYSTEM_Struct *p);


#endif