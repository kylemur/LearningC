/*
 ============================================================================
 Name        : w02_task.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int minimum(int i, int j) // task part 5, function finds smaller of 2 int
{
	if (i < j)
	{
		return i;
	}
	else if (j < i)
	{
		return j;
	}
	else
	{
		return i;
	}
}

int main(void) {

	int i = 0;

	while (i != 6) // task part 1, loop to receive user input and show cost or exit loop
	{
		printf("\nOptions:\n");
		printf("1. Buy Bananas\n");
		printf("2. Buy Apples\n");
		printf("3. Buy Oranges\n");
		printf("4. Buy Grapes\n");
		printf("5. Buy Peaches\n");
		printf("6. Exit\n");
		printf("What do you want? ");
		scanf("%d", &i);

		switch (i)
		{
		case 1:
			printf("$0.50 per pound\n");
			break;
		case 2:
			printf("$1.66 per pound\n");
			break;
		case 3:
			printf("$1.49 per pound\n");
			break;
		case 4:
			printf("$1.78 per pound\n");
			break;
		case 5:
			printf("$2.42 per pound\n");
			break;
		case 6:
			break;
		default:
			printf("Invalid input. Try again.\n");
		}
	}

	printf("\n");
	int j = 0;
	for (j = 1; j <= 10; j++) // task part 2, print 1-10
	{
		printf("%d\n", j);
	}

	printf("\n");
	for (j = 10; j >= 1; j--) // task part 3, print count down 10-1
	{
		printf("%d\n", j);
	}

	printf("\n");
	float a[10];
	int b = 0;
	float c = 0;
	float maxi = 0;
	float mini = 999999999;
	float sum = 0;
	for (b = 0; b < 10; b++) // task part 4, user inputs 10 floats that are added to a[]
	{
		printf("Enter a number: ");
		scanf("%f", &c);
		a[b] = c;
//		if (maxi < c)
//		{
//			maxi = c;
//		}
//		if (mini > c)
//		{
//			mini = c;
//		}
//		sum += c;
	}

	for (b = 0; b < 10; b++)
	{
		printf("%f ", a[b]);
		if (maxi < a[b]) // find maximum
		{
			maxi = a[b];
		}
		if (mini > a[b]) // find minimum
		{
			mini = a[b];
		}
		sum += a[b];
	}

	float aver = sum / 10.0;
	printf("\nMaximum: %f\n", maxi);
	printf("Minimum: %f\n", mini);
	printf("Total: %f\n", sum);
	printf("Average: %.2f\n", aver);

	int d = 0;
	int e = 0;

	printf("\nEnter a number: "); // more of part 5, user inputs 2 int
	scanf("%d", &d);
	printf("Enter another number: ");
	scanf("%d", &e);

	int minim = minimum(d, e);
	printf("The smaller of %d and %d is %d.", d, e, minim);

	return EXIT_SUCCESS;
}
