/*
 * lesson_11.c
 *
 *  Created on: 15 gen 2018
 *      Author: Saverio Zangaro
 */

#include"../header/exe.h"

void l_11()
{
	/*Questa è la sola dichiarazione della variabile x.
	 * Genera un warning perchè ho usato la variabile prima di inizializzarla.
	 */
	int x;

	puts("\n-------------------------------------------------------------------------\n");

	printf("Questo è il valore della variabile x dopo la sola dichiarazione, genera un warning in fase di compilazione\n perchè non è stata inizializzata :%d\n",x);

	/*Questa è l'inizializzazione della variabile x al valore 500.*/
	x=500;
	printf("Questo è il valore della variabile x dopo l'inizializzazione (x=500):%d\n",x);

	/*Questa è una dichiarazione ed una inizializzazione.*/
	int y=100;
	printf("Questa è una nuova variabile chiamata y che è stata dichiarata ed inizializzata (int y=100):%d",y);

	puts("\n-------------------------------------------------------------------------\n");

	system("PAUSE");
}
