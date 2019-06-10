//CS 271
//Lab9.cpp
//Written by Ben Nutter
//10-29
//This is the test program for the term class functions

#include "Term.h"
#include <iostream>

using namespace std;

int main(){

	Term k(5,3);
	Term j;

	cout <<"Input values for coefficient and exponent" << endl;

	cin >> j;

	cout << "Your values for coef and exp are " << j.getCoefficient()<< " and " << j.getExponent () << endl;

	cout << "Sum of term k and term j = " << (k + j) << endl;//if the user used the same value for exponent for term j as term k,
	cout <<"Difference of k and j = " << (k - j) << endl;    //should return the sum and difference of both values
	cout <<"Product of k and j = " << (k * j) << endl;

	j.setCoefficient(2);
	j.setExponent(2); //sets exponent to a value different from k,
	                  //using this to test both the mutator
	                  //and the data validation for the + and - operators in Term.cpp

	cout << endl << "The new values for coef and exp are " << j.getCoefficient() << " and " << j.getExponent() << "." <<endl;

	cout << "Sum of terms k and new j = " << (k + j) << endl; //should print 0x0^2 since j exponent is different to k
	cout <<"Difference of k and new j = " << (k - j) << endl; //again, should print 0x0^2 because of different exponents
	cout <<"Product of k and new j = " << (k * j) << endl;//should still give the product despite the exponents being different


}
