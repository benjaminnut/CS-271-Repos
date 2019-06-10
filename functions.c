//CS 271
//functions.c
//Ben Nutter
//10-4
//This program calculates the exponent of a base value

#include "functions.h"
#include <stdio.h>


double integerPower (int base, int exp){

	double result = 1.0;
	double temp;

	if (exp > 0){

		for (int i = 0; i < exp; i++){

			temp = base;

			result = result * temp;
		}
	}

	if (exp < 0){

		for (int i = 0; i > exp; i--){

			temp = 1.0 / base;
			result = result * temp;

		}

	}

	return result;
}



