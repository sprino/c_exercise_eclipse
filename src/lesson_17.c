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
	printf("Inserisci una stringa e per chiudere digita @ ed invio:");
	while((ch=getchar()) != '@' )			//legge i caratteri inseriti fino a quando non si digita il carattere @ ed invio.
		{
			putchar(toupper(ch));			//converte minuscole in maiuscole.
			i++;
		}
	printf("\nIl numero di caratteri digitati è:%d\n\n",i);

	/*Inserisco un numero da tastiera e lo stampo a video.*/
	printf("Inserisci un numero che viene tramite scanf stampato in uscita:");
	scanf("%i",&i);												//Per il numero bisogna passare l'indirizzo.
	printf("Il numero inserito è:%i\n\n",i);

	/*Inserisco una stringa da tastiera e lo stampo a video.*/
	printf("Inserisci una stringa per vedere come funziona scanf con le stringhe, la restituisce semplicemente a video:");
	scanf("%s",stringa);										//per la stringa non devo passare l'indirizzo, perchè è un array e stringa è già un indirizzo.
	printf("La stringa inserita è:%s\n",stringa);

}
