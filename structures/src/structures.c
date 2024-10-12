/*
 ============================================================================
 Name        : structures.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//struct bank {
//	char name[15];
//	int account;
//	float balance;
//};

typedef struct bank { // same as above code
	char name[15];
	int account;
	float balance;
} bank_t; // _t is naming convention for struct type

int main(void) {

//	struct bank b; // variable type is    struct bank,   variable name is   b
//	b.account = 1;
//	b.balance = 1.27;
//	b.name[0] = 'H';
//	b.name[1] = 'a';
//	b.name[2] = 'r';
//	b.name[3] = 'r';
//	b.name[4] = 'y';
//	b.name[5] = 0; // an array always needs to end with a null character

//	struct bank b = { "Harry", 1, 1.27 }; // same as above code

	bank_t b = { "Harry", 1, 1.27 }; // same as above code

	printf("Account %d   balance %g   name %s\n", b.account, b.balance, b.name);

	return EXIT_SUCCESS;
}
