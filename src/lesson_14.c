/*
 * lesson_14.c
 *
 *  Created on: 15 gen 2018
 *      Author: Saverio Zangaro
 */

#include"../header/exe.h"

void l_14()
{
	//Dichiarazioni.
	double x;
	double y;
	double z;

	//Inizializzazione.
	x=5;
	y=2;

	puts("\n-------------------------------------------------------------------------\n");

	//Sviluppo.
	z=x+y;
	printf("La somma tra x=5 ed y=2 è:%5.2f\n",z); /*%m.d con m ampiezza del campo e d la precisione (n° di decimali).*/

	z=x-y;
	printf("La sottrazione tra x=5 ed y=2 è:%5.2f\n",z);

	z=x/y;
	printf("La divisione tra x=5 ed y=2 è:%5.2f\n",z);

	z=x*y;
	printf("Il prodotto tra x=5 ed y=2 è:%5.2f\n",z);

	z+=2;
	printf("All'ultimo valore di z sommo il valore 2 in forma abbreviata (z+=2):%5.2f\n",z);

	z*=y+3;
	printf("Sommo 3 ad y=2 e moltiplico tutto per l'ultimo valore di z in forma abbreviata (z*=y+3):%5.2f",z);

	puts("\n-------------------------------------------------------------------------\n");

	system("PAUSE");

}
