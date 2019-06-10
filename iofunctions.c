//CS 271
// iofunctions.c
// Date: Nov 29, 2018
// Author: benja
//*insert description here*

#include "structDefs.h"
#include "iofunctions.h"
#include <stdio.h>
#include <stdlib.h>

void inputDate(Date *d){



	 if (d->month  < 1 && d->month  > 12 )

		 d->month = 1;

		 d->month = (*d).month;

	 if (d->day < 1)
		 d->day = 1;

	 if (m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7
	     || m1 == 8 || m1 == 10 || m1 == 12){
		 if (d1 > 31)
			 d1 = 1;
	 }

	 if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11){

		 if (d1 > 30)

			 d1 = 1;
	 }

	 if (m1 == 2 && d1 > 28)

		 d1 = 1;

	 d->day = d1;

	 if (y1 < 0)
		 y1 = 1980;

	 d->year = y1;

}

void outputDate(const Date const *d){

	printf("&d//&d//&d", d->month, d->day, d->year);

}

void inputTime(Time *t){



}
