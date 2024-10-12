/*
 ============================================================================
 Name        : variables2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i = 16;
	printf("The number is %d. The size is %lld\n", i, sizeof(i));

	char c = 'a';
	printf("The character is %c, the numeric value is %d, the size is %lld\n", c, c, sizeof(c));

	unsigned int u = 6;
	printf("The number is %u, the size is %lld\n", u, sizeof(u));

	float f = 1.2;
	printf("%f %e %g size is %llu\n", f, f, f, sizeof(f));

	double d = 3.14;
	printf("%f %e %g size is %llu\n", d, d, d, sizeof(d));

	return EXIT_SUCCESS;
}
