/*
 ============================================================================
 Name        : w04_task.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct bank {
	int accountNumber;
	char name[20];
	float balance;
	struct bank *next;
} bank;

void input(struct bank *account)
{
	printf("\nEnter the account number: ");
	scanf("%d", &account->accountNumber);

	printf("Enter the name of the account: ");
	scanf("%s", account->name);

	printf("Enter the balance in the account: ");
	scanf("%f", &account->balance);
}

void display(struct bank *account)
{
	printf("Account information:  number %d  name %s  balance $%.2f\n", account->accountNumber, account->name, account->balance);
}

void display_all(struct bank *account)
{
	while (account != NULL)
	{
		display(account);
		account = account->next;
	}
}

int main(void) {

	struct bank *b = malloc(sizeof(struct bank));
	b->next = NULL;
	input(b);

	struct bank *b2 = malloc(sizeof(struct bank));
	b2->next = NULL;
	input(b2);
	b->next = b2;

	struct bank *b3 = malloc(sizeof(struct bank));
	b3->next = NULL;
	input(b3);
	b2->next = b3;

	display_all(b);

	free(b);
	free(b2);
	free(b3);

	return EXIT_SUCCESS;
}
