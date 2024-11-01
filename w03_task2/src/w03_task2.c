/*
 ============================================================================
 Name        : w03_task2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int accountNumber;
	char name[20];
	float balance;
} bank;

void input(bank *account)
{
	printf("Enter the account number: ");
	scanf("%d", &account->accountNumber);

	printf("Enter the name of the account: ");
	scanf("%s", account->name);

	printf("Enter the balance in the account: ");
	scanf("%f", &account->balance);
}

void display(bank *account)
{
	printf("Account information:  number %d  name %s  balance $%.2f\n", account->accountNumber, account->name, account->balance);
}

int main(void) {

	bank b;

	input(&b);
	display(&b);

	return EXIT_SUCCESS;
}
