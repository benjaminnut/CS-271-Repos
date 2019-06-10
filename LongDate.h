#ifndef LONGDATE_H
#define LONGDATE_H

#include <iostream>
#include <string>
#include "Date.h"

using namespace std;



class LongDate : public Date{

private:

	string dayOfTheWeek;

	static const string longmonths[];
	static const string longdays[];

public:

	LongDate (int lm, int ld, int ly);

	void setDayOfTheWeek(string s);
	string getDayOfTheWeek();

	void helpIncrement();
	void setDate(int m, int d, int y);


};


#endif

