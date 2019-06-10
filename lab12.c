//CS 271
// lab12.c
// Date: Nov 29, 2018
// Author: benja
//*insert description here*

#include "structDefs.h"
#include "iofunctions.h"
#include <stdio.h>

int main(void){

	Date * newDate[1];
	newDate[1] = (Date *) malloc (sizeof(Date));

	inputDate(newDate[1]);

	outputDate(newDate[1]);

	free(newDate);

}
