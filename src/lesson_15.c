/*
 * lesson_15.c
 *
 *  Created on: 15 gen 2018
 *      Author: Saverio Zangaro
 */

#include"../header/exe.h"

void l_15()
{
	/*Sostituendo i valori di a e di b cambia il risultato.
	 * P.S. NOn tenete in considerazione del costrutto if per ora...
	 * */
	int a=0;
	int b=1;
	int z1,z2;

	puts("\n-------------------------------------------------------------------------\n");

	/*Operatori di confronto*/
	if(a==b)										//Uguaglianza == .
		printf("Sono uguali\n");
	if(a!=b)										//Diversità != .
		printf("Sono diversi\n");
	if(a>b)											//Maggiore.
		printf("a è maggiore di b.\n");
	if(a<b)											//Minore.
		printf("a è minore di b\n");

	/*Operatori Logici.*/
	z1=a && b;
	printf("\nz1 è il risultato della AND tra a e b:%d",z1);

	z2=a || b;
	printf("\nz2 è il risultato della OR tra a e b:%d",z2);

	puts("\n-------------------------------------------------------------------------\n");

	system("PAUSE");

}
