/*
 * lesson_23.c
 *
 *  Created on: 19 gen 2018
 *      Author: Saverio Zangaro
 */

void l_23()
{
	system("PAUSE");

	int i=10;	/*Dimensione 1.*/
	int ii=10;	/*Dimensione 2.*/
	int j,k;	/*Indice degli array.*/
	int multy_array[i][ii];		/*Creo l'array multidimensionale.*/

	printf("Stampo i valori dell'arrai multidimensionale, i, incrementa; ii, decrementa.\n");
		for(j=0;j<i;j++)		/*Creo un ciclo che incrementa il primo indice del multy_array[i].*/
		{
			for(k=ii;k>ii;k--)
			{
				printf("%c",multy_array[i][j]);	/*Stampo gli elementi dell'array,in formato i) valore.*/
			}
		}
	system("cls");
}

