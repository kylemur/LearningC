/*
 ============================================================================
 Name        : passing_value_or_ref.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fxnF(int valV) // passing by value
{
	printf("The value before the change is %d\n", valV);
	valV = 3;
	printf("The value after the change is %d\n", valV);
	return 0;
}

int fxnG(int *valV) // passing by reference or passing by pointer
{
	printf("The value before the change is %d\n", *valV);
	*valV = 3;
	printf("The value after the change is %d\n", *valV);
	return 0;
}

int main(void) {
	int a = 5;
	a = 6;

	int *p = &a;
	printf("The value of  a  is now %d\n", a);

	*p = 4;
	printf("The value of  a  is now %d\n", a);

	fxnF(a); // this copies the value of  a  to valV, then changes valV but not  a

	fxnG(&a); // this uses and changes  a  (must use &varName)

	return EXIT_SUCCESS;
}
