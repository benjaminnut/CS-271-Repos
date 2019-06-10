#include <iostream>
#include <string>
#include "Date.h"
#include "LongDate.h"

using namespace std;

int main(){

	LongDate ld(10, 24, 2018);

	cout << ld.getDayOfTheWeek() << endl;

	ld.setDate(10,23,2018);

	cout << ld.getDayOfTheWeek() << endl;


}
