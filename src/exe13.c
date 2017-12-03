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
	char string[100];

    //getchar()
	puts("Write character and press return when you finish:\n");
	while((ch=getchar()) != '\n') //\n press return when finish.
	{
		putchar(toupper(ch)); //Converte i caratteri minuscoli in maiuscole e stampa a video.
		i++;
	}
	printf("\nThe numbers of character is: %d\n", i);

	printf("\nScrivi una stringa di lughezza uguale alla mia:");
	scanf("%s",string);
	if(strlen(string)==strlen("casa"))
		printf("\nOK, hai indovinato");
	else
		printf("\nSbagliatoooo");

	printf("\nInserisci nuovo valore di i:");
	scanf("%d",&i);
	printf("\nIn nuovo valore di i e':%d",i);
}

