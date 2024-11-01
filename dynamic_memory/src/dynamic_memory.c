/*
 ============================================================================
 Name        : dynamic_memory.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct person
{
	char name[20];
	int age;
};

int main(void) {

	struct person *p = malloc(sizeof(struct person));
	printf("Enter the name: ");
	scanf("%s", p->name); // with arrays, no need to pass address because arrays are pointers
	printf("Enter the age: ");
	scanf("%d", &p->age);

	printf("Person is %s, age is %d\n", p->name, p->age);

	free(p); // done using memory, free up space for other uses

	return EXIT_SUCCESS;
}
