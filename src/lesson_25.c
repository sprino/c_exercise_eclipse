/*
 * lesson_25.c
 *
 *  Created on: 22 gen 2018
 *      Author: Saverio Zangaro
 */

#include"../header/exe.h"

void l_25() {
	system("cls");

	/*Dichiaro la struttura libro che contiene dati di diverso tipo riferiti ad un elemento.*/
	struct libro {
		char titolo[100];
		char autore[50];
		int anno_pubblicazione;
		float prezzo;
	} biblio; /*Creo un istanza della struttura libro di nome biblio, cioè, biblio è un elemento costituito dai dati definiti nella struttura libro.*/

	/*Inizializzo la struttura.*/
	biblio.prezzo = 20;
	strcpy(biblio.titolo, "Guida al C v2"); /*Scrive il titolo all'interno del campo titolo nella struttura.*/
	//struct libro biblio={"Guida al C", "Fabrizio Ciacchi", 2003, 45.2};	/*questo serve per inizializzare gli elementi di una struttura tutti insieme.*/

	printf("Titolo:%s\nPrezzo:%.0f\n", biblio.titolo, biblio.prezzo); /*Stampo gli elementi di della struttura.*/

	system("PAUSE");

	/*Creo un tipo struttura di nome t_libro.*/
	typedef struct libro2 {
		char titolo[100];
		char autore[50];
		int anno_pubblicazione;
		float prezzo;
	} t_libro;

	/*Per creare una biblioteca, basta creare un array di elementi di tipo t_libro.*/
	t_libro biblioteca[100];

	strcpy(biblioteca[10].titolo, "Che bello, che bello, che bello."); /*Scrive il titolo nel campo titolo dell'elemento numero 11 (si parte da 0!) dell'array biblioteca di tipo t_libro.*/
	printf("Stampo titolo dell'elemento numero 11 della biblioteca:%s\n\n",
			biblioteca[10].titolo);

	system("PAUSE");

	/*Union definisce un tipo che può contenere anche tipi diversi, ma usa la stessa locazione di memoria per tutto. Nella locazione di memoria viene salvato sempre il più grande.*/
	union numero
	{
		int valX;
		int valY;
	};
	union numero punto;	/*Creo una variabile union chiamata punto.*/
	printf("Inserisci il valore valX:");
	scanf("%d",&punto.valX);
	printf("Inserisci il valore valY:");
	scanf("%d",&punto.valY);
	printf("Il valore di X e':%d mentre il valore di Y e':%d\n, il valore e' sempre il più grande.\n\n",punto.valX,punto.valY);

	/*La UNION è complicata quindi facciamo un altro esempio.*/
	printf("La variabile union e' complicata, facciamo un altro esempio. Creo una union con tipi diversi, un intero ed un array di caratteri. s[4].\n");
	union u_test
	{
		int i;
		char s[4];
	} my_test;
	printf("Inserisci 8 numeri per la variabile int i, per vedere come viene inserita nella memoria della union my_test 0x:");
	scanf("%x",&my_test.i);
	printf("Stampa gli elementi contenuti nell'array char s che si trova nella union e condivide lo stesso spazio di memoria della variabile int i: s[3]:%d,s[2]:%d,s[1]:%d,s[0]:%d\n"
															,my_test.s[3],my_test.s[2],my_test.s[1],my_test.s[0]);

	system("PAUSE");
}
