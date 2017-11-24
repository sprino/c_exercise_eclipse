/*
 * exe10.c
 *
 *  Created on: 16 nov 2017
 *      Author: Rino
 */

#include"../header/exe.h"

void f10(int i)
{
	int s;

	s=10;

	if (i==0)
	{
		printf("s++ mi da il numero:%d\n",s++);
	}
	else if (i==1)
	{
		printf("++s mi da il numero:%d\n",++s);
	}
	else if (i==2)
	{
		printf("s-- mi da il numero:%d\n",s--);
	}
	else if (i==3)
	{
		printf("--s mi da il numero:%d\n",--s);
	}
}
