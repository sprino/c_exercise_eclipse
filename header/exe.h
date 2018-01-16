/*
 * exe1.h
 * Contiene i prototipi delle funzioni usate e gli header (file radice) richiamati per usare le relative funzioni.
 * Gli header contengono prototipi delle funzioni e vengono richiamati per poter usare le funzioni del linguaggio c (in questo caso).
 *  Created on: 08 ott 2017
 *      Author: Saverio P. Zangaro
 */
#include <stdio.h>			/*Per usare printf() etc...*/
#include <stdlib.h>

#include<ctype.h>			/*Per la funzione toupper, funzione che converte i caratteri da minuscolo a maiuscolo.*/
#include<string.h>			/*Per manipolare le stringhe.*/

#ifndef EXE1_H_				/*Questo è un "include guard", serve per evitare che si generino conflitti con altri header.*/
#define EXE1_H_

//Prototipi delle funzioni, dichiarate nei relativi file.

void l_8 ();

void l_9();

void l_11();

void l_12();

void l_14();

void l_15();

void l_17();

void l_18();

void l_19();

#endif 						/*Chiudi EXE1_H_ */
