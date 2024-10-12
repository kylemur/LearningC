/*
 ============================================================================
 Name        : if_else.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i = 1;
	int j = 3;

	if (i < j)
	{
		// executed when i is less than j
		printf("%d is less than %d\n", i, j);
	}
	else
	{
		// executed when i is not less than j
		printf("%d is not less than %d\n", i, j);
	}

	return EXIT_SUCCESS;
}
