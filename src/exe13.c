/*
 * exe13.c
 *
 *  Created on: 22 nov 2017
 *      Author: Saverio Zangaro
 */

#include"../header/exe.h"

extern int i, ch;


void f13(void)
{
	i=0;

    //getchar()
	puts("Write character and press return when you finish:\n");
	while((ch=getchar()) != '\n') //\n press return when finish.
		i++;
	printf("The numbers of character is: %d\n", i);



}

