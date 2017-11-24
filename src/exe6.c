/*
 * exe6.c
 *
 *  Created on: 10 ott 2017
 *      Author: Saverio P. Zangaro
 */

#include"../header/exe.h"

void f5(void)
{
	unsigned int i;
	int j;

	i=1;

	for(j=1;j<5;j++)
	{
		i=i<<1;
		printf("Scorrimento a sinistra di %d:%d \n",j,i);
	}

	for(j=0;j<4;j++)
	{
		i=i>>1;
		printf("Scorrimento a destra di %d:%d \n",j,i);
	}

}
