//CS 271
//ProgramD.c
//Ben Nutter
//10-4
//The purpose of this program is to create a histogram of odd and even integers

#include <stdio.h>

int main(void){

	int countOdd = 0;
	int countEven = 0;

	int input;


	for (int i = 0; i <= 100; i++ ){

		scanf("%d", &input);


		if (input % 2 == 0)

			countEven++;

		if (input % 2 == 1)

			countOdd++;
	}

		printf("\nEvens");

		for(int x = 0; x <= countOdd; x++)
			printf("*");

		printf("\nOdds");

		for (int x = 0; x <= countEven; x++)
			printf("*");



}
