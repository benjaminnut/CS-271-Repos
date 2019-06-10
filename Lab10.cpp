//CS 271
// Lab10.cpp
// Date: Nov 7, 2018
// Author: Benjamin Nutter
//This is the testing program for the functiosn of
//the Package and TwoDayPackage classes

#include <iostream>
#include <cstring>
#include "Package.h"
#include "TwoDayPackage.h"


using namespace std;


int main(){


	//Testing the Package class

	cout << "Package 1" << endl;

	Package p("","","","","","","","","","",0,0);

	p.setSName("Larry Carbunkle");
	p.setSAdd("5435 Chunky Avenue");
	p.setSCity("Nashville");
	p.setSState("Tennessee");
	p.setSZip("34573");

	p.setRName("Aaron Burrmond");
	p.setRAdd("2342 Smooth Boulevard");
	p.setRCity("Las Cruces");
	p.setRState("New Mexico");
	p.setRZip("88011");

	p.setWeight(3);
	p.setCostPO(9);


	cout << endl << "Package 1 Sender Address: " << p.getSName() <<", " << p.getSAdd() << ", "
		 << p.getSCity() << ", "<< p.getSState() << ", "<< p.getSZip() << endl;

	cout << "Package 1 Recipient Address: " << p.getRName() << ", " << p.getRAdd() << ", "
		 << p.getRCity() << ", " << p.getRState() << ", " << p.getRZip() << endl;

	cout << "Package 2 weight is " << p.getWeight() <<" ounces, and the cost per ounce is $" << p.getCostPO() << "." << endl;

	cout << "Package 1 Total cost based on weight and cost per ounce: " << p.calculateCost() << endl;


	//Testing the TwoDayPackage class

	cout << endl << "Package 2"<< endl;

	TwoDayPackage tdp("","","","","","","","","","",0,0,0);

	tdp.setSName("John Stamos");
	tdp.setSAdd("666 Trouble Trail");
	tdp.setSCity("Townsville");
	tdp.setSState("Bad State");
	tdp.setSZip("88888");

	tdp.setRName("Susan Spirling");
	tdp.setRAdd("777 Not Trouble Trail");
	tdp.setRCity("CityScape");
	tdp.setRState("Good State");
	tdp.setRZip("99999");

	tdp.setWeight(3);
	tdp.setCostPO(9);

	tdp.setFlatFee(7);

	cout << endl << "Package 2 Sender Address: " << tdp.getSName() <<", " << tdp.getSAdd() << ", "
		 << tdp.getSCity() << ", "<< tdp.getSState() << ", "<< tdp.getSZip() << endl;

	cout << "Package 2 Recipient Address: " << tdp.getRName() << ", " << tdp.getRAdd() << ", "
		 << tdp.getRCity() << ", " << tdp.getRState() << ", " << tdp.getRZip() << endl;

	cout << "Package 2 weight is " << tdp.getWeight() <<" ounces, and the cost per ounce is $" << tdp.getCostPO() << "." << endl;

	cout << "Package 2 Total cost based on weight, cost per ounce, and flatfee: " << tdp.calculateCost() << endl;

	//testing data validation for Package class


	p.setWeight(-3);
	p.setCostPO(-9);

	cout << endl << "Data validation test for Package class."<< endl
		 << "New values for weight and costPerOunce are " << p.getWeight()<< " " << p.getCostPO() << endl;

}//end main
