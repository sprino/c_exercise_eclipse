/*
 ============================================================================
 Name        : c_exercise_eclipse.c
 Author      : Saverio P. Zanagaro
 Version     :
 Copyright   : Your copyright notice
 Description : Raccoglie tutti gli esercizi della guida html.it indicata di seguito.
 	 	 	   I nomi degli esercizi e delle funzioni indicano il numero effettivo della lezione., Ansi-style
 	 	 	   http://www.html.it/guide/guida-c/
 ============================================================================
 */

#include"../header/exe.h"

int main(void)
{
	/*Devo disabilitare il buffer per stdout in maniera tale da poter vedere le richieste di inserimento nell Console di eclipse.*/
	setbuf(stdout, NULL);

	int sel;
	char s_out[10];
	char s_out_conf[10]="exit";

	system("cls");

	printf("\nQueste sono le lezioni relative al linguaggio c, sviluppate seguendo la guida di html.it al seguente link:\n\n"
					"http://www.html.it/guide/guida-c/\n\n"
					"Premere invio per accedere alle lezioni.\n"
					"Premere exit per uscire\n");

	while(strcmp(gets(s_out),s_out_conf)!=0)
	{
		/*pulisco lo schermo, funziona solo da terminale*/
		system("cls");

		/*Stampo a video il menu di scelta*/
		printf("\nEcco le lezioni disponibili, digita exit per uscire:\n"
				"	8)Hello world.\n"
				"	9)Uso della funzione printf().\n"
				"	11)Inizializzazione e dichiarazione.\n"
				"	12)Tipi di variabile.\n"
				"	14)Operatori aritmetici.\n"
				"	15)Operatori di confronto e logici.\n"
				"	17)Operatori di imput ed output.\n"
				"	18)Costrutti condizionali.\n"
				"	19)Operatore ternario & switch_case\n."
				"	20)Cicli: while, do while, for, break, continue.\n"
				"	22)Array e cicli for.\n"
				"	23)Array multidimensionali.\n"
				"	24)Funzioni.\n"
				"	25)Struct,Typedef,Union.\n"
				"	26)Casting. Enumerazioni. Variabili statiche.\n"
				"Fai la tua scelta, digita il numero corrispondente:");

		sel=000;
		scanf("%d",&sel);

		switch(sel)
		{
			case 8:
				l_8();
				break;
			case 9:
				l_9();
				break;
			case 11:
				l_11();
				break;
			case 12:
				l_12();
				break;
			case 14:
				l_14();
				break;
			case 15:
				l_15();
				break;
			case 17:
				l_17();
				break;
			case 18:
				l_18();
				break;
			case 19:
				l_19();
				break;
			case 20:
				l_20();
				break;
			case 22:
				l_22();
				break;
			case 23:
				l_23();
				break;
			case 24:
				l_24();
				break;
			case 25:
				l_25();
				break;
			case 26:
				l_26();
				break;

			default:
				if(strcmp(gets(s_out),s_out_conf)==0)		/*strcmp() torna zero se il contenuto di s_out_conf() �
															  uguale alla stringa inserita dall'utente letta dalla funzione gets(s_out).*/
				{
					byebye();								/*Funzione che pulisce lo schermo e saluta l'utente.*/
					return EXIT_SUCCESS;
				}
				else
				{
					system("cls");
					printf("Nessuna lezione selezionata, scegli una lezione dal menu...\n");
					break;
				}
		}
	}
byebye();
return EXIT_SUCCESS;
}
