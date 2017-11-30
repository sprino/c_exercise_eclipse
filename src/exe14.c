/*
 * exe14.c
 *
 *  Created on: 30 nov 2017
 *      Author: Rino
 */

#include"../header/exe.h"

void f14(int a,int b)
{
	scanf("Inserisci valore intero a:%d",&a);
	if(a<b)
		puts("a e' minore di b\n");
	else if (a>b)
		puts("a e' maggiore di b\n");
	else
		puts("a e' uguale a b");
}
