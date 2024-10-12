/*
 ============================================================================
 Name        : logic_operators.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i = 0;
	int j = 1;

	printf("and %d\n", i && j);
	printf("or %d\n", i || j);
	printf("first not %d\n", !i);
	printf("second not %d\n", !j);

	printf("is equal to %d\n", i == j);
	printf("not equal to %d\n", i != j);

	printf("less than %d\n", i < j);
	printf("less than or equal to %d\n", i <= j);
	printf("greater than %d\n", i > j);
	printf("greater than or equal to %d\n", i >= j);


	return EXIT_SUCCESS;
}
