/*
 * l_20.c
 *
 *  Created on: 17 gen 2018
 *      Author: Saverio Zangaro
 */

#include"../header/exe.h"

void l_20()
{
	/*Creo un ciclo while che stampa a video i numeri di un indice i fino a quando questo non raggiunge il numero di 10, vanno da 0 a 9.*/
	int i=0;
	int high;
	int low;
	int quadrato;

	printf("Stampo 10 numero da 0 a 9, usando un ciclo while:\n\n");
	while(i != 10)
	{
		printf("%d\n",i);
		i++;
	}

	/*Il while entra nel ciclo solo se ha verificato la condizione. Il do-while esegue il ciclo almeno una volta.*/
	do
	{
		printf("Premere 1 per continuare, un numero diverso per uscire:\n\n");
		scanf("%d",&i);
		printf("\n");
	}while(i==1);

	/*Ciclo for (inizializzazione (dichiarazione all'esterno); condizione; incremento)*/
	printf("Stampo 10 numero da 0 a 9, usando un ciclo for:\n");
	for(i=0;i<=10;i++)
	{
		printf("%d\n\n",i);
	}

	/*Ciclo for con due variabili.*/
	printf("Ciclo for che decrementa la variabile low e decrementa la variabile high e si ferma quando high e low convergono.\n");
	for(high=10,low=0;high>=low;high--,low++)
	{
		printf("high=%d---low=%d\n",high,low);
	}


	/*break-->esce da un ciclo||continue-->salta una iterazione del ciclo, non istruzione successiva...*/
	printf("Testiamo l'istruzione break (esce da un ciclo) e continue (salta una iterazione del ciclo, non istruzione...ma iterazione!)\n"
		   "Per uscire digitare 999."
		   "Inserire un numero:\n"
		   "	*)se il valore e' <0 esci dal ciclo;\n"
		   "	*)se il valore e' >100 continua;\n"
		   "	*)se il valore e' compreso tra 0 e 100 allora calcola il quadrato;\n");

	while(scanf("%di",&i)==1 && i != 0)
	{
		if(i<0)
		{
			printf("Valore non consentito, <0.\n");
			break;
		}

		if(i>100)
		{
			printf("Valore non consentito, >100.");
			continue;
		}
		quadrato=i*i;
		printf("Faccio il quadrato di i:%i, che e':%i\n",i,quadrato);
	}

	system("PAUSE");

	/*Ciclo for infinito*/
	for(;;)
	{
		printf("\nCiclo infinito, premere CTRL^C per uscire dal programma....e' l'unico modo...!\n");
	}
}
