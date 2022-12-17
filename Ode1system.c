#include "Ode1system.h"


void Ode1system_Calc_Init(ODE1SYSTEM_Struct *p)
{

	p->uk = 0;
	p->yk= 0;
	p->yk1 = 0;
	p->G = 0.5;
	p->Tau = 5e-3;
	p->Te= 400e-6;
	p->a0 =p->G * p->Te / (p->Tau + p->Te) ;
	p->a1= p->Tau / (p->Tau + p->Te);
}

void Ode1system_Calc(ODE1SYSTEM_Struct *p)
{
	p->yk = p->a0 * p->uk + p->a1 * p->yk1;
	p->yk1 =p->yk;
}




