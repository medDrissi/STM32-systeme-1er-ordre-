#include "Generateur.h"
#include "math.h"
#define	PI	3.14159
/*Fonction d'initialisation*/
void Generateur_Calc_Init(Generateur_Struct *p)
{
  	p->Freq=10.0;		          
   	p->Te=400e-6;						
		p->tetak=0.0;						
		p->tetak1=0.0;					
		p->Amp_max=100;				
		p->Amp_min=0;					
		p->alpha=0.5;						
    p->Pulse=0;					
	return;
}
/*Fonction de calcul*/
void Generateur_Calc(Generateur_Struct *p)
{
	//Calcul de teta[k]
	p->tetak=p->tetak1+p->Te*p->Freq*2*PI;
	//Module 2PI
	if ((p->tetak)>(2*PI))	p->tetak=0;
	//Generation du signal rectangulaire
	if(p->tetak<(2*PI*p->alpha)) 
		 p->Pulse=p->Amp_max;
	else p->Pulse=p->Amp_min; 
	//Pour prochaine période d'échantillonnage
	p->tetak1=p->tetak;
	return;
}

