/*
 * lesson_24.c
 *
 *  Created on: 22 gen 2018
 *      Author: Saverio Zangaro
 */

#include"../header/exe.h"

void l_24()
{
	system("cls");	/*Pulisco lo schermo.*/

	double valore,risultato;	/*Inserisco il valore di cui calcolare la potenza.*/
	int potenza,dimx=5,dimy=10;	/*Inserisco la potenza da calcolare.*/
	int m_array[dimx][dimy];

	printf("Inserisci il valore e la potenza che vuoi calcolare, Valore: ");
	scanf("%lf",&valore);
	printf("Inserisci il valore e la potenza che vuoi calcolare, Potenza: ");
	scanf("%d",&potenza);
	risultato=elevamento_potenza(valore,potenza); /*Calcola il risultato chiamando la funzione elevamento_potenza.*/

	printf("Il risultato dell'elevamento alla potenza di:%d del numero:%.2f e' di:%.2f\n",potenza,valore,risultato);

	system("PAUSE");

	printf("Stampo un array multidimensionale, basta passare alla funzione solo la dimensione y...\n");
	stampa_m_array(dimx,dimy,m_array);

	system("PAUSE");
}

double elevamento_potenza(double valore, int potenza)
{
	double risultato_ritorno=1.0;	/*Vale 1 perchè nella prima iterazione del ciclo moltiplica per il valore quindi risultato_ritorno diventa uguale al valore
									  , nella seconda iterazione moltiplica valore*valore fino alla potenza.*/
	int i;

	for(i=0;i<potenza;i++)
	{
		risultato_ritorno*=valore;	/*Forma abbreviata, risultato_ritorno=risultato_ritorno*valore.*/
	}
	return(risultato_ritorno);
}

void stampa_m_array(int dimx,int dimy,int m_array[][10])
{
	int j,k;

	for(j=0;j<dimx;j++)
	{
		printf("Dimensione x numero:%d--->\n",j);

		for(k=0;k<dimy;k++)
		{
			printf("%d\n",m_array[j][k]);
		}
	}
}
