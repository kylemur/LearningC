/*
 ============================================================================
 Name        : arithmetic.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a = 5;
	int b = 8;
	int c = 15;
	int d = 31;

	printf("Sum of %d and %d is %d\n", b, c, b + c);
	printf("Product of %d and %d is %d\n", d, a, d * a);
	printf("Difference of %d and %d is %d\n", d, b, d - b);
	printf("Quotient of %d and %d is %d\n", d, c, d / c);
	printf("Remainder of %d and %d is %d\n", d, c, d % c);

	d %= b;

	printf("d is now %d\n", d);

	d %= c; // I think % does nothing if the second number is bigger than the first

	printf("d is now %d\n", d);

	return EXIT_SUCCESS;
}
