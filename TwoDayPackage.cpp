//CS 271
// TwoDayPackage.cpp
// Date: Nov 7, 2018
// Author: Benjamin Nutter
//THe function definition file for TwoDayPackage

#include "Package.h"
#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(string sname, string saddress, string scity, string sstate, string szip,
		 string rname, string raddress, string rcity, string rstate, string rzip,
		 double w, double c, double f)
: Package(sname, saddress, scity, sstate, szip,
		 rname, raddress, rcity, rstate, rzip,
		 w, c)
{

	setFlatFee(f);

}//end constructor

double TwoDayPackage::getFlatFee(){

	return flatFee;

}//end accessor

TwoDayPackage& TwoDayPackage::setFlatFee(double f){

	if (f >= 0)
	flatFee = f;
	return *this;

}//end mutator

double TwoDayPackage::calculateCost(){

	double cost = (weight * costPerOunce) + flatFee;

	return cost;

}//end calculateCost function




