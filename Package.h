//CS 271
// Package.h
// Created on: Nov 7, 2018
// Author: Benjamin Nutter
//This class takes the mailing address for a sender and recipient
//and calculates the cost of a package based on weight and cost per ounce

#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

using namespace std;


class Package{

private:

string senderName;
string senderAddress;
string senderCity;
string senderState;
string senderZip;

string recipientName;
string recipientAddress;
string recipientCity;
string recipientState;
string recipientZip;

protected:
	double weight;
	double costPerOunce;

public:

Package(string sname, string saddress, string scity, string sstate, string szip,
		string rname, string raddress, string rcity, string rstate, string rzip,
		double w, double c);

string getSName();
string getSAdd();
string getSCity();
string getSState();
string getSZip();

string getRName();
string getRAdd();
string getRCity();
string getRState();
string getRZip();

double getWeight();
double getCostPO();


void setSName(string);
void setSAdd(string);
void setSCity(string);
void setSState(string);
void setSZip(string);

void setRName(string);
void setRAdd(string);
void setRCity(string);
void setRState(string);
void setRZip(string);

Package& setWeight(double w);
Package& setCostPO(double c);

double calculateCost();



};//end class protoype



#endif
