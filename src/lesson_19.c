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
	char s_out[10];					/*Stringa nella quale viene inserita quella digitata.*/
	char s_out_conf[10]="exit";		/*Stringa da digitare per uscire dal ciclo while del menu di selezione.*/

	puts("\n-------------------------------------------------------------------------\n");

	/*Operatore ternario. Condizione ? Se_vera_faccio_questo : Se_falsa_faccio_questo*/
	printf("Inserisci il primo numero per il confronto:");
	scanf("%d",&a);

	printf("Inserisci il secondo numero per il confronto:");
	scanf("%d",&b);

	a==b ? puts("I numeri sono uguali.") : puts("I numeri sono diversi.");

	system("PAUSE"); /*Blocca altrimenti il successivo system_cls pulisce lo schermo e non si ha il tempo di vedere il risultato.*/

	/*Switch case. Utile per creare di menu di scelta.
	 *Strcmp() confronta le stringhe e quando è stato digitato exit esce dal ciclo e torna al menu del main. Restituisce 0 se sono uguali.*/
	while(strcmp(gets(s_out),s_out_conf)!=0)
	{
		system("cls");

		printf("Premi uno dei seguenti numeri per entrare in un menu', altrimenti riceverai l'indicazione che non e' presente un menu associato:\n"
			   "P.S. per uscire digitare:exit\n"
			   "	0)Per il primo menu'.\n"
			   "	1)Per il secondo menu'.\n"
			   "	2)Per il terzo menu'.\n");

		sel=123;
		scanf("%i",&sel);

			switch(sel)
			{
				case 0:
					printf("Hai scelto il primo menu'.\n");
					system("PAUSE");
					break;
				case 1:
					printf("Hai scelto il secondo menu'.\n");
					system("PAUSE");
					break;
				case 2:
					printf("Hai scelto il terzo menu'.\n");
					system("PAUSE");
					break;
				default:
					if(strcmp(gets(s_out),s_out_conf)==0)
					{
						printf("Bye Bye, premi invio per tornare al menu di selezione delle lezioni.");
						return;
					}
					else
					{
						printf("Nessuna lezione selezionata, premi invio e scegli una lezione dal menu:");
						break;
					}
			}
	}
	puts("\nTorna al menu principale\n");
}
