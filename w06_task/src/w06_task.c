/*
 ============================================================================
 Name        : w06_task.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct password_data {
	char account_name[25];
	char user_name[25];
	char password[50];
	char description[250];
} password_data;

void get_date(char* date_text) {
    time_t t = time(NULL);  // Get current time
    struct tm tm = *localtime(&t);  // Convert time to local time
    sprintf(date_text, "%02d-%02d-%d", tm.tm_mon + 1, tm.tm_mday, tm.tm_year + 1900);  // Format the date
}

void input_password(password_data* new_password) {
	printf("Account (ex. Facebook): ");
	scanf(" %[^\n]s", new_password->account_name);  // " %[^\n]s" allows input with spaces and characters

	printf("User Name: ");
	scanf(" %[^\n]s", new_password->user_name);

	printf("Password: ");
	scanf(" %[^\n]s", new_password->password);

	printf("Description: ");
	scanf(" %[^\n]s", new_password->description);
}

void save_password(password_data* n_password) {
	FILE *fp = fopen("passwordDataWithC.txt", "a"); // Open file for appending
	if (fp == NULL) {
		fprintf(stderr, "Could not open file for appending password data.\n");
	}
	char date_text[15];
	get_date(date_text);  // date_text is changed to today's date
	fprintf(fp, "Account: %s\nUser Name: %s\nPassword: %s\nDescription: %s\n%s\n\n", n_password->account_name, n_password->user_name, n_password->password, n_password->description, date_text);
	fclose(fp); // Close the file
}

void write(char *message) {
	FILE *fp = fopen("readWriteWithC.txt", "w"); // Open file for writing
	if (fp == NULL) {
		fprintf(stderr, "Could not open file for writing.\n");
	}
	char date_text[15];
	get_date(date_text);  // date_text is changed to today's date
	fprintf(fp, "\n%s\n%s\n\n", message, date_text);
	fclose(fp); // Close the file
}

void append(char *message) {
	FILE *fp = fopen("readAppendWithC.txt", "a"); // Open file for appending
	if (fp == NULL) {
		fprintf(stderr, "Could not open file for appending.\n");
	}
	char date_text[15];
	get_date(date_text);  // date_text is changed to today's date
	fprintf(fp, "\n%s\n%s\n\n", message, date_text);
	fclose(fp); // Close the file
}

void read_write(void) {
	FILE *fp = fopen("readWriteWithC.txt", "r"); // Open file for reading
	if (fp == NULL) {
		fprintf(stderr, "Could not open write file for reading.\n");
	}
	char line[2500];
	while (fgets(line, sizeof(line), fp) != NULL) { // Read each line
		printf("%s", line); // Print each line
	}
	fclose(fp);
}

void read_append(void) {
	FILE *fp = fopen("readAppendWithC.txt", "r"); // Open file for reading
	if (fp == NULL) {
		fprintf(stderr, "Could not open append file for reading.\n");
	}
	char line[2500];
	while (fgets(line, sizeof(line), fp) != NULL) { // Read each line
		printf("%s", line); // Print each line
	}
	fclose(fp);
}

void read_passwords(void) {
	FILE *fp = fopen("passwordDataWithC.txt", "r"); // Open file for reading
	if (fp == NULL) {
		fprintf(stderr, "Could not open password file for reading.\n");
	}
	char line[2500];
	while (fgets(line, sizeof(line), fp) != NULL) { // Read each line
		printf("%s", line); // Print each line
	}
	fclose(fp);
}

int main(void) {
	int opt = 99;

	while (opt != 0) {
		printf("\nMain Menu:\n  1. Write\n  2. Display Written\n  3. Append\n  4. Display Appended\n  5. Save New Password\n  6. Display Passwords\n  0. Exit\nChoice: ");
		scanf("%d", &opt);

		if (opt == 1) {  // Write
			char message[2500];
			printf("Write your message: ");
			scanf(" %[^\n]s", message);    // " %[^\n]s" allows input with spaces and characters
			write(message);
		} else if (opt == 2) {  // Display Written
			read_write();
		} else if (opt == 3) {  // Append
			char message[2500];
			printf("Write your message: ");
			scanf(" %[^\n]s", message);    // " %[^\n]s" allows input with spaces and characters
			append(message);
		} else if (opt == 4) {  // Display Appended
			read_append();
		} else if (opt == 5) {  // Save New Password
			password_data *pd = malloc(sizeof(struct password_data));
			input_password(pd);
			save_password(pd);
		} else if (opt == 6) {  // Display Passwords
			read_passwords();
		} else if (opt == 0) {  // Exit
			printf("Goodbye.");
		} else {
			printf("Invalid input. Try again.\n");
		}
	}
    return EXIT_SUCCESS;
}
