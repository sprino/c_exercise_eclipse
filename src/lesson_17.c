/*
 * lesson_17.c
 *
 *  Created on: 15 gen 2018
 *      Author: Saverio Zangaro
 */

#include"../header/exe.h"

void l_17()
{
	char ch;
	int i=0;
	char stringa[100];

	/*Conta il numero di caratteri che vengono digitati ed inverte minuscole con maiuscole, per terminare bisogna digitare il carattere @ e premere invio.
	 * Inserire la stringa e premere invio.
	 * Inserire un numero e premere invio.
	 * */
	printf("Inserisci una stringa e per chiudere digita @ ed invio:\n");
	while((ch=getchar()) != '@' )			//legge i caratteri inseriti fino a quando non si digita il carattere @ ed invio.
		{
			putchar(toupper(ch));			//converte minuscole in maiuscole.
			i++;
		}
	printf("\nIl numero di caratteri digitati �:%d\n",i);

	/*Inserisco una stringa da tastiera e lo stampo a video.*/
	scanf("%s",stringa);										//per la stringa non devo passare l'indirizzo, perch� � un array e stringa � gi� un indirizzo.
	printf("La stringa inserita �:%s\n",stringa);

	/*Inserisco un numero da tastiera e lo stampo a video.*/
	scanf("%i",&i);												//Per il numero bisogna passare l'indirizzo.
	printf("Il numero inserito �:%i\n",i);
}
