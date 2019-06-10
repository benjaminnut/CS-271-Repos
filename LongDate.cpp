#include "LongDate.h"
#include "Date.h"

using namespace std;

const string LongDate::longdays[] =
{"","Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};


LongDate::LongDate (int lm, int ld, int ly)
	: Date( lm, ld, ly )
   {

	setDate(lm, ld, ly);

	int dotw = (ld + (13 * (lm + 1) / 5) + (ly) + (ly / 4) - (ly / 100) + (ly / 400)) % 7;

	setDayOfTheWeek(longdays[dotw]);


}


void LongDate::setDayOfTheWeek(string s){

	dayOfTheWeek = s;

}


string LongDate::getDayOfTheWeek(){

	return dayOfTheWeek;

}

void LongDate::setDate (int m, int d, int y){

	setMonth(m);
	setDay(d);
	setYear(y);

}

void LongDate::helpIncrement(){

	int lm = getMonth(), ld = getDay(), ly = getYear();
	setDate(lm,ld,ly);

	if ( !endOfMonth( getDay() ) )
	      ld++;
	   else
	      if ( getMonth() < 12 )
	      {
	         lm++;
	         ld = 1;
	      }
	      else // last day of year
	      {
	         ly++; // increment year
	         lm = 1; // first month of new year
	         ld = 1; // first day of new month
	      } // end else

}


