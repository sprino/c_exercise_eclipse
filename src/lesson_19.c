/*
 * lesson_19.c
 *
 *  Created on: 16 gen 2018
 *      Author: Saverio Zangaro
 */

/*Inserendo i numeri*/

#include"../header/exe.h"

void l_19()
{
	int a;
	int b;
	int sel;

	/*Operatore ternario. Condizione ? Se_vera_faccio_questo : Se_falsa_faccio_questo*/
	printf("Inserisci il primo numero per il confronto:");
	scanf("%d",&a);

	printf("Inserisci il secondo numero per il confronto:");
	scanf("%d",&b);

	a==b ? puts("I numeri sono uguali.") : puts("I numeri sono diversi.");


	/*Switch case. Utile per creare di menu di scelta.*/
	while(1)
	{
		system("cls");
		printf("\n\nInserisci il numero del menu:");
		scanf("%i",&sel);
		switch(sel)
		{
			case 0:
				printf("Hai scelto il primo menu.");
				break;
			case 1:
				printf("Hai scelto il secondo menu.");
				break;
			case 3:
				printf("Hai scelto il terzo menu.");
				break;
			default:
				printf("Nessun menu associato.");
				break;
		}
	}

}
