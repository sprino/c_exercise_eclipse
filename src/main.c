/*
 ============================================================================
 Name        : c_exe_win.c
 Author      : Saverio P. Zanagaro
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "../header/exe.h"

int count;		//Global variable
int i;
int ch;


int main(void) {

	int i;
	int a, b;
	count=100;

	//Exe1. Classic Hello World.
	puts("1)");
	puts("Hello Universe");
	puts("\n");

	//Exe2. For Cycle, print 10 times 10.
	puts("2)");
	for(i=0; i<10; i++)
	f1();
	puts("\n");

	//Exe3. Study Global variable used as extern in other files.
	puts("3)");
	f2();
	puts("\n");

	//Exe4. This function insert an / when present space character in the text.
	puts("4)");
	f3("This is a tests");
	puts("\n");

	//Exe5. The static variable example.
	puts("5)");
	for(i=0;i<10;i++)
		{
			f4(10);
		}
	puts("\n");

	//Exe6. Moves left and right a bit of an integer unsigned.
	puts("6)");
	f5();
	puts("\n");

	//Exe7. Condition in one line: x<A ? yes operation : no operation.
	puts("7)");
	f6();
	puts("\n");

	//Exe8. Parameter.
	puts("8)");
	f7();
	puts("\n");

	//Exe9. Sizeof
	puts("9)");
	f9();
	puts("\n");

	//Exe10. Increment and decrement
	puts("10)");
	for(i=0;i<=3;i++)
	{
		f10(i);
	}
	puts("\n");

	//Exe11.Logic Operator.
	puts("11)");
	f11();
	puts("\n");

	//Exe12.Operator propriety
	puts("12)");
	f12(0);
	puts("\n");

	//Exe13.First input_output
	puts("13)");
	f13();
	puts("\n");

	//Exe14.If-Else
	puts("14)");
	printf("Inserisci valore intero a: ");
	scanf("%d",&a);
	printf("Inserisci valore intero b: ");
	scanf("%d",&b);
	f14(a,b);
	puts("\n");

	return EXIT_SUCCESS;
}

