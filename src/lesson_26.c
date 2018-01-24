/*
 * lesson_26.c
 *
 *  Created on: 24 gen 2018
 *      Author: Saverio Zangaro
 */

#include"../header/exe.h"

void l_26() {
	system("cls");

	int a,i;
	float f;
	char sett[20];

	/*Questo è un casting da float ad int e da int a float*/
	printf("Questo è un casting da float ad int, "
			"inserisci un numero float con due cifre decimali:");
	scanf("%f", &f);
	printf("Il casting elimina le cifre decimali:%d\n", a = (int) f);

	system("PAUSE");

	printf("Questo è un casting da int ad float, "
			"inserisci un numero intero:");
	scanf("%d", &a);
	printf("Il casting in questo caso aggiunge due cifre decimali:%.2f\n", f =
			(float) a);

	system("PAUSE");

	/*Questo crea delle enumerazioni, associa dei valori numerici a delle costanti letterali.*/
	system("cls");
	printf("Enumerazioni, creo una variabile settimana di tipo enumerazione giorni e stampo i valori, lun parte da zero quindi martedi=1 etc...\n");
	enum giorni {lunedi = 1, martedi, mercoledi, giovedi, venerdi, sabato, domenica} settimana;
	printf("Stampo il valore di, lunedi:%d,martedi=%d,mercoledi=%d,giovedi=%d,venerdi=%d,sabato=%d,domenica=%d\n\n",
								 lunedi, martedi, mercoledi, giovedi, venerdi, sabato, domenica);
	printf("Che giorno è oggi?");
	scanf("%s",sett);

	if(!strcmp(sett,"lunedi"))
		settimana=lunedi;
	else if(!strcmp(sett,"martedi"))
		settimana=martedi;
	else if(!strcmp(sett,"mercoledi"))
		settimana=mercoledi;
	else if(!strcmp(sett,"giovedi"))
		settimana=giovedi;
	else if(!strcmp(sett,"venerdi"))
		settimana=venerdi;
	else if(!strcmp(sett,"sabato"))
		settimana=sabato;
	else if(!strcmp(sett,"domenica"))
		settimana=domenica;

	printf("Oggi e' il giorno della settimana numero?:%d\n",settimana);

	system("PAUSE");
	system("cls");

	/*Uso della variabile statica. All'uscita conserva sempre l'ultimo valore che aveva all'uscita della funzione.*/
	printf("Di seguito un ciclo che entra 5 voolte nella funzione statica(), alfa ha sempre lo stesso valore, beta viene incrementata perche statica.\n");

	for(i=0;i<=4;i++)
	{
		statica();
	}

	system("PAUSE");

}

void statica()
{
	int alfa=0;
	static int beta=0;

	printf("Alfa:%d,Beta:%d\n",
			alfa,beta);

	alfa++;
	beta++;

}
