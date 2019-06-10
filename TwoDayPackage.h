//CS 271
//TwoDayPackage.h
//Created on: Nov 7, 2018
//Author: Benjamin Nutter
//This program inherits the Package class and uses the flatFee variable
//to calculate a new cost for a package


#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include <iostream>
#include <string>
#include "Package.h"

class TwoDayPackage : public Package{

private:

	double flatFee;

public:

	TwoDayPackage( string sname, string saddress, string scity, string sstate, string szip,
			string rname, string raddress, string rcity, string rstate, string rzip,
			double w, double c, double f);

	double getFlatFee();
	TwoDayPackage& setFlatFee(double f);

	double calculateCost();

};//end class prototype


#endif

