/*
 ============================================================================
 Name        : point_struct.c
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

	struct person harry = { "Harry", 11 };

	struct person * george = NULL;
	george = &harry;
	(*george).age++; // de-reference the pointer (aka find what it is pointing at) and increment age
//	george->age++;   // same as line above

	return EXIT_SUCCESS;
}
