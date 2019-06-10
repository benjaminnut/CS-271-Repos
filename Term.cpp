//CS 271
//Term.cpp
//Written by Ben Nutter
//10-29
//This is the function implementation file of the Term class
//The term class being one that outputs a 1-term polynomial,
//as well as do simple calculations

#include "Term.h"

Term::Term(int coef, int exp){

	setCoefficient(coef);
	setExponent(exp);

}

int Term:: getCoefficient(){

	return coefficient;

}

int Term:: getExponent(){

	return exponent;

}

void Term:: setCoefficient(int coef){

	coefficient = coef;

}

void Term:: setExponent(int exp){

	exponent = exp;

}

Term Term:: operator+(const Term & t) const{

	Term sum;

	sum.setExponent(t.exponent);

	if(sum.exponent == exponent)

	sum.setCoefficient(coefficient + t.coefficient); //performs calculation if condition is met

	else{

		sum.setCoefficient(0);
		sum.setExponent(0);//will return 0 if exponents are different
	}

	return sum;

}

Term Term:: operator-(const Term & t) const{

	Term difference;

	difference.setExponent(t.exponent);

	if (difference.exponent == exponent)

	difference.setCoefficient(coefficient - t.coefficient);//should perform calculation if condition is met

	else{

		difference.setCoefficient(0);
		difference.setExponent(0);//returns 0 if exponents are different

	}

	return difference;

}

Term Term:: operator*(const Term & t)const{

	Term product;

	product.setCoefficient(t.coefficient * coefficient);
	product.setExponent(t.exponent * exponent);//no data validation needed, performs calculation

	return product;

}

ostream& operator<< (ostream &out, const Term &t){

	out << t.coefficient << "x^" << t.exponent;//prints in the basic polynomial format

	return out;//cascades output

}


istream& operator>> (istream&in, Term &t){

	in >> t.coefficient >> t.exponent;//allows input for coef and exp

	return in;

}
