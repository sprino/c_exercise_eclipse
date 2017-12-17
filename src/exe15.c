/*
 * exe15.c
 *
 *  Created on: 04 dic 2017
 *      Author: Rino
 */

#include"../header/exe.h"

void f15(void)
{
	int ch1,ch2;

	ch1='A';

	puts("Inserisci carattere 2: ");
	ch2=getchar();

	ch1==ch2 ? printf("Indovinato...") : printf("Sbagliato...");

}
