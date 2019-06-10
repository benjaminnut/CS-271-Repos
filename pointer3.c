#ifndef INPUT
#define INPUT

int input (int *a, int *b, int *c);

#endif

#ifndef SUMSORT
#define SUMSORT

int sumsort (int *a, int *b, int*c);

#endif


#include <stdio.h>


int main(void) {

	int sum = 0;

	int a = 0; int b = 0; int c = 0;

	while (!feof(stdin)){

		printf("Input 3 integers");

       if( input(&a,&b,&c) == 3)

			printf("end of input \n");

		else
			printf("%d", input(&a,&b,&c));

	}

}

int input( int *a, int *b, int *c){

	int count = 0;

	while (!feof(stdin)){

	scanf("%d %d %d", a, b, c);

		count++;
	}

    return count;
}

int sumsort(int *a, int *b, int *c){

	int sum = 0;




	return sum;
}
