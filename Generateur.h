#ifndef _GENERATEUR_H_
#define _GENERATEUR_H_
#include "math.h"
/*Structure du générateur*/
typedef struct	{
				float Freq;  	  
				float Te;     
				float tetak; 
				float tetak1;
				float Amp_max;
				float Amp_min;
				float alpha;
				float Pulse;
				}Generateur_Struct;

				
/*Protoype de la fonction d'initialisation*/
void Generateur_Calc_Init(Generateur_Struct *p);
/*Protoype de la fonction de calcul*/
void Generateur_Calc(Generateur_Struct *p);
#endif	/*GENERATEUR_H_*/

