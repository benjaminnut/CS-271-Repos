//CS 271
//ProgramE.c
//Ben Nutter
//10-4
//This program inputs an integer from the user and generates a random integer
//between 1 and whatever integer the user inputed

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){

	srand(time(NULL));

	int input, output = 0;

	scanf("%d", &input);

	if (input >=0){

		output = rand() %input + 1;

		printf("\n Random Number: %d\n", output);

	}

}
