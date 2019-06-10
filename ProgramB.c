//CS 271
//ProgramB.c
//Ben Nutter
//10-4
//This program calculates the retirement salary based on the current salary
//and years worked

#include <stdio.h>

int main (void) {

	float years, salary;

	float retirement = 0;

	scanf("%f%f", &years, &salary);

	if (years < 10)
		retirement = 0.03 * salary * years;


    else if (years >=10)
    	retirement = (0.25 + (0.021 * years)) * salary;


	printf("\nThe total retirement salary based on your input is $%.2f\n", retirement);

}



