/*
 * exe2.c
 *
 *  Created on: 08 ott 2017
 *      Author: Saverio P. Zangaro
 */

//Use a global variable "count"

#include "../header/exe.h"

extern int count; //extern->the variables has been defined elsewhere, in the main ;-).

void f2(void)
{

	f2_2();
	printf("Count is equal to %d", count);
}

void f2_2(void)
{
	int a;

	for(a=1; a<10; a++)
		putchar('.');
}
