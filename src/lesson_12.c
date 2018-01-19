/*
 * lesson_12.c
 *
 *  Created on: 15 gen 2018
 *      Author: Saverio Zangaro
 */

#include"../header/exe.h"

void l_12()
{
	system("cls");

	long int x1=5;
	long int y1=2;
	long int z1;
	char a='$';
	double x2=5;
	double y2=2;
	double z2;

	/*Definisco, inizializzo e stampo un solo carattere.*/
	printf("\n\nIl carattere inizializzato è:%c\n\n",a);

	/*Uso int per dichiarare i valori interi e taglio le cifre decimali.*/
	z1=x1/y1;
	printf("Il risultato della divisione come interi è:%ld\n",z1);			//%ld si usa per i long int.

	/*Uso float per dichiarare un valore intero, questo tipo non taglia i valori decimali.*/
	z2=x2/y2;
	printf("Il risultato della divisione usando float è:%.1f\n\n",z2);

	system("PAUSE");
}
