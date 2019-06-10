//CS 271
//ProgramF.c
//Ben Nutter
//10-4
//This program takes an array and shifts it to the left,
//with the first element being shifted to the end

#ifndef SHIFTLEFT
#define SHIFTLEFT

void shiftLeft(int * first, int * last);

#endif

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARRAYSIZE 15

void shiftLeft(int *first, int *last){

	int temp = *first ;

	for (int i = 0; i <= *last - 1; i++)

		*(first + i) = *(first + i +1);

	*last = temp;

}

int main(void){

	srand(time(NULL));

	int * array = (int *) malloc(ARRAYSIZE * sizeof(int));

	printf("\nOriginal Array\n");

	for (int i = 0; i < ARRAYSIZE; i++){

		array[i] = rand() % 50 + 1;

		printf("%d ", array[i]);

	}

	printf("\nShifted Array\n");

	shiftLeft(&array[0], &array[ARRAYSIZE - 1]);

	for (int i = 0; i < ARRAYSIZE; i++)

			printf("%d ", array[i]);

	free(array);

}


