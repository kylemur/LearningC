/*
 ============================================================================
 Name        : pointers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void add_five(int* a)
{
	*a += 5;
}

int main(void) {

	int a = 1;

//	int* p = NULL;
//	p= &a;
//	*p = 3;

	add_five(&a);

	return EXIT_SUCCESS;
}
