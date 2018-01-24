/*
 * lesson_23.c
 *
 *  Created on: 19 gen 2018
 *      Author: Saverio Zangaro
 */

#include"../header/exe.h"

void l_23()
{
	system("cls");

	int n=10;	/*Dimensione 1.*/
	int m=10;	/*Dimensione 2.*/
	int i,j;	/*Indice degli array.*/
	int matrix[n][m];		/*Creo l'array multidimensionale.*/

	printf("Stampo i valori dell'arrai multidimensionale, i, incrementa; ii, decrementa.\n");
		for(i=0;i<n;i++)		/*Creo un ciclo che incrementa il primo indice del multy_array[i].*/
		{
			for(j=0;j<m;j++)
			{
				printf("%d\n",matrix[i][j]);	/*Stampo gli elementi dell'array,in formato i) valore.*/
			}
		}
	system("PAUSE");
}

