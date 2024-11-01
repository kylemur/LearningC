/*
 ============================================================================
 Name        : w03_task.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void addThree(int num)
{
	num += 3;
	printf("The new value is %d\n", num);
}

void addT(int * num)
{
	*num += 3;
	printf("The variable value is now %d\n", *num);
}

int main(void) {
	int n = 0;
	printf("Enter a number: ");
	scanf("%d", &n);

	addThree(n);

	printf("The original value was %d\n", n);

	addT(&n);
	printf("The variable has been changed to %d\n", n);

	return EXIT_SUCCESS;
}
