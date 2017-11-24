/*
 * exe7.c
 *
 *  Created on: 12 ott 2017
 *      Author: Saverio P. Zangaro
 */

#include"../header/exe.h"

void f7(void)
{
	int target,temp;
	int *p;

	temp=100;
	p=&temp;
	target=*p;

	printf("Il valore puntato dal puntatore p è:%d\nL'indirizzo contenuto dal puntatore è:%p\n",target,p);
}
