/*
 * exe3.c
 *
 *  Created on: 08 ott 2017
 *      Author: Saverio P. Zangaro
 */

//Use const for not modify target object "*str".

#include "../header/exe.h"

void f3(const char *str)
{
	while(*str)
	{
		if(*str==' ')
			printf("%c",'/');
		else
			printf("%c",*str);
		str++;
	}
}

