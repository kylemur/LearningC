/*
 ============================================================================
 Name        : w05_task.c
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

//	struct bank *b = malloc(sizeof(struct bank));
//	b->next = NULL;
////	input(b);
//	b->accountNumber = 1;
//	b->name[0] = 'A';
//	b->name[1] = 'n';
//	b->name[2] = 'd';
//	b->name[3] = 'y';
//	b->name[4] = 0;
//	b->balance = 123.33;
//
//	struct bank *b2 = malloc(sizeof(struct bank));
//	b2->next = NULL;
////	input(b2);
//	b2->accountNumber = 2;
//	b2->name[0] = 'B';
//	b2->name[1] = 'o';
//	b2->name[2] = 'b';
//	b2->name[3] = 0;
//	b2->balance = 456.65;
//	b->next = b2;
//
//	struct bank *b3 = malloc(sizeof(struct bank));
//	b3->next = NULL;
////	input(b3);
//	b3->accountNumber = 3;
//	b3->name[0] = 'C';
//	b3->name[1] = 'h';
//	b3->name[2] = 'a';
//	b3->name[3] = 'd';
//	b3->name[4] = 0;
//	b3->balance = 789.987;
//	b2->next = b3;
//
////  display_all(b);

	struct bank *head = malloc(sizeof(struct bank));
	head = NULL;

	int opt = 99;
	while (opt != 0)
	{
		printf("\nMain Menu:\n  1. Add Account\n  2. Display All Accounts\n  3. Find Account\n  4. Change Account\n  0. Quit Program\nYour Choice: ");
		scanf("%d", &opt);

		if (opt == 1) {
			struct bank *new_account = malloc(sizeof(struct bank));
			input(new_account);
			new_account->next = NULL;
			if (head == NULL) {
				head = new_account;
			} else {
			struct bank *tail = head;
			while (tail->next != NULL)
			{
				tail = tail->next;
			}
			tail->next = new_account;
			}
		} else if (opt == 2) {
			if (head == NULL) {
				printf("There are no accounts.\n");
			} else {
				display_all(head);
			}
		} else if (opt == 3) {
			int acct_num;
			printf("Enter the account number to find: ");
			scanf("%d", &acct_num);
			struct bank *search = head;
			while (search != NULL && search->accountNumber != acct_num)
			{
				search = search->next;
			}
			if (search != NULL && search->accountNumber == acct_num) {
				printf("Found account: ");
				display(search);
			} else {
				printf("Account not found.\n");
			}
		} else if (opt == 4) {
			int acct_n;
			printf("Enter the account number to find: ");
			scanf("%d", &acct_n);
			struct bank *find = head;
			while (find != NULL && find->accountNumber != acct_n)
			{
				find = find->next;
			}
			if (find != NULL && find->accountNumber == acct_n) {
				printf("Found account: ");
				display(find);
				printf("Now enter the new account information.\n");
				input(find);
			} else {
				printf("Account not found.\n");
			}
		} else if (opt == 0) {
			printf("Goodbye.\n");
		} else {
			printf("Invalid input. Try again.\n");
		}
	}

	return EXIT_SUCCESS;
}
