/*
 ============================================================================
 Name        : c_exercise_eclipse.c
 Author      : Saverio P. Zanagaro
 Version     :
 Copyright   : Your copyright notice
 Description : Raccoglie tutti gli esercizi della guida html.it indicata di seguito.
 	 	 	   I nomi degli esercizi e delle funzioni indicano il numero effettivo della lezione., Ansi-style
 	 	 	   http://www.html.it/guide/guida-c/
 ============================================================================
 */

#include"../header/exe.h"

int main(void) {

	/*Devo disabilitare il buffer per stdout in maniera tale da poter vedere le richieste di inserimento nell Console di eclipse.*/
	setbuf(stdout, NULL);

	/*Lesson 8. Classico Hello world..*/
	puts("8)");
	l_8();
	puts("\n");

	/*Lesson 9. Use della funzione printf() per stampare a video.*/
	puts("9)");
	l_9();
	puts("\n");

	/*Lesson 11. Inizializzazione e dichiarazione.*/
	puts("11)");
	l_11();
	puts("\n");

	/*Lesson 12. Tipi di variabile.*/
	puts("12)");
	l_12();
	puts("\n");

	/*Lezione 14. Operatori aritmetici.*/
	puts("14)");
	l_14();
	puts("\n");

	/*Lezione 15. Operatori di confronto e logici.*/
	puts("15)");
	l_15();
	puts("\n");

	/*Lezione 17. Operazioni di imput ed output, getchar(), printf(), scanf().*/
	puts("17)");
	l_17();
	puts("\n");

	/*Lezione 18. Costrutti condizionali.*/
	puts("18)");
	l_18();
	puts("\n");

	/*Lezione 19. Operatore ternario & switch case.*/
	puts("19)");
	l_19();
	puts("\n");

	return EXIT_SUCCESS;
}

