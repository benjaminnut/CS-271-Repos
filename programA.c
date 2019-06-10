//CS 271
//ProgramA.c
//Ben Nutter
//10-4
//This program inputs two float values and calculates
//the surface area and volume of a cylinder

#include <stdio.h>

int main (void){

	float rad;
	float height;

	float surfaceArea, volume;

	float pi = 3.14159;

	scanf("%f%f", &rad, &height);

	surfaceArea = (2 * pi * (rad * rad)) + (2 * pi * rad * height);

	volume = pi * (rad * rad) * height;

	printf("\nSurface Area = %f and Volume = %f\n", surfaceArea, volume);

}
