/*
 * lesson_18.c
 *
 *  Created on: 15 gen 2018
 *      Author: Saverio Zangaro
 */

#include"../header/exe.h"

void l_18()
{
	/*In c non esiste il tipo booleano (true e false) quindi una condizione è vera se vale 1 mentre e falsa se vale 0*/
	system("cls");

	int risultato_esame=0;

	printf("Inserisci il risultato del tuo esame e leggi il risultato:");
	scanf("%i",&risultato_esame);

	if(risultato_esame<18)								//Vera se il valore è < di 18, quindi entra.
	{
		if(risultato_esame<=15)							//Vera se il valore è <= di 15, quindi entra.
		{
			printf("Sei stato bocciato...");
		}
		else
		{
			printf("Vieni all'orale, e studia...");
		}
	}
	else
	{
		printf("Vieni durante l'orale per firmare oppure prenotarti per aumentare il voto, che può anche scendere ;-).");
	}

	system("PAUSE");
}
