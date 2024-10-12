/*
 ============================================================================
 Name        : pointer_struct_fxn.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int value_1;
	int value_2;
} value_t;

int fxnG(value_t *valV)
{
	printf("The value before the change is %d %d\n", valV->value_1, valV->value_2);
	valV->value_1 = 7;
	valV->value_2 = 8;
	printf("The value after the change is %d %d\n", valV->value_1, valV->value_2);
	return 0;
}

int main(void) {
	value_t v;
	v.value_1 = 5;
	v.value_2 = 6;

	fxnG(&v);

	return EXIT_SUCCESS;
}

