/*
 * lesson_22.c
 *
 *  Created on: 19 gen 2018
 *      Author: Saverio Zangaro
 */

#include"../header/exe.h"

void l_22()
{
	system("cls");

	int first_array[10];	/*Creo il primo array di 10 interi (da zero a 9), può contenere solo interi. Solo dichiarazione, non inizializzazione.*/
	int second_array[]={100,200,300,400,500,600,700,800,900,1000};
	char three_array[]="Sono scritto in un array";		/*In c la stringa non esiste, si usano array di caratteri e questo è il modo più pratico per inizializzarlo.*/
	int i;					/*Creo l'indice necessario per scorrere l'array.*/

	printf("Gli elementi dell'array non inizializzato sono:\n");
	for(i=0;i<10;i++)		/*Creo un ciclo che stampa a video gli elementi dell'array.*/
	{
		printf("%d ) %d\n",i,first_array[i]);	/*Stampo gli elementi dell'array,in formato i)valore.*/
	}

	puts("\n");	/*Vado a capo prima che appaia: premere un tasto...*/
	system("PAUSE");

	printf("Ora stampo i valori che ho inserito nelle 10 posizioni.\n");
		for(i=0;i<10;i++)		/*Creo un ciclo che stampa a video gli elementi dell'array.*/
		{
			printf("%d ) %d\n",i,second_array[i]);	/*Stampo gli elementi dell'array,in formato i)valore.*/
		}

	puts("\n");	/*Vado a capo prima che appaia: premere un tasto...*/
	system("PAUSE");
	system("cls");

	printf("Ora la frase che ho scritto all'interno del three_array[].\n");
		for(i=0;i<sizeof(three_array);i++)		/*Creo un ciclo che stampa la frase che ho scritto nel three_array[].
												  sizeof() conta il numero di elementi presenti nell'array.*/
		{
			printf("%c",three_array[i]);	/*Stampo gli elementi dell'array,in formato i) valore.*/
		}

	puts("\n");	/*Vado a capo prima che appaia: premere un tasto...*/
	system("PAUSE");

}
