//CS 271
//Term.h
//Written by Ben Nutter
//10-29
//This is the header file for the Term class

#ifndef TERM_H
#define TERM_H
#include <iostream>

using namespace std;


class Term{

	friend ostream& operator<<(ostream & , const Term &);
	friend istream& operator>>(istream & , Term &);

private:

	int coefficient;
	int exponent;

public:

	Term (int coef = 0, int exp = 0);
	void setCoefficient(int coef);
    void setExponent(int exp);
	int getCoefficient();
	int getExponent();
	Term operator+ (const Term & ) const;
	Term operator- (const Term & ) const;
	Term operator* (const Term & ) const;


};


#endif
