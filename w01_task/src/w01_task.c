/*
 ============================================================================
 Name        : w01_task.c
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
	float f = 0.0;
	char color[20];
	int j = 0;
	int k = 0;

	printf("Enter a number: ");
	scanf("%d", &i);
	printf("You entered %d\n", i);

	printf("Enter a floating point number: ");
	scanf("%f", &f);
	printf("You entered %e %f %g\n", f, f, f);

	printf("Enter a color: ");
	scanf("%s", color);
	printf("You entered %s\n", color);


	printf("Enter a number: ");
	scanf("%d", &j);

	printf("Enter another number: ");
	scanf("%d", &k);

	if (j < k)
	{
		printf("%d is the smaller number\n", j);
	}
	else if (j > k)
	{
		printf("%d is the smaller number\n", k);
	}
	else
	{
		printf("%d was entered for both numbers\n", j);
	}

	return EXIT_SUCCESS;
}
