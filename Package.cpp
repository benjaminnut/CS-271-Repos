//CS 271
// Package.cpp
//Created on: Nov 7, 2018
//Author: Benjamin Nutter
//The function definiton file for the Package class

#include "Package.h"
#include <String>

Package::Package(string sname, string saddress, string scity, string sstate, string szip,
		string rname, string raddress, string rcity, string rstate, string rzip,
		double w, double c){

	setSName(sname);
	setSAdd(saddress);
	setSCity(scity);
	setSState(sstate);
	setSZip(szip);

	setRName(rname);
	setRAdd(raddress);
	setRCity(rcity);
	setRState(rstate);
	setRZip(rzip);

	setWeight(w);
	setCostPO(c);

}// end constructor


string Package::getSName(){

	return senderName;

}// end getSNAMe

string Package::getSAdd(){

	return senderAddress;

}//end getSAdd

string Package::getSCity(){

	return senderCity;

}//end getSCity

string Package::getSState(){

	return senderState;

}//end getSState

string Package::getSZip(){

	return senderZip;

}//end getSZip

string Package::getRName(){

	return recipientName;

}//end getRNAme

string Package::getRAdd(){

	return recipientAddress;

}//end getRAdd

string Package::getRCity(){

	return recipientCity;

}//end getRCity

string Package::getRState(){

	return recipientState;

}//end getRState

string Package::getRZip(){

	return recipientZip;

}//end getRZip


double Package::getWeight(){

	return weight;

}//end getWeight

double Package::getCostPO(){

	return costPerOunce;

}//end getCostPO


void Package::setSName(string sname){

	senderName = sname;

}//end setSNAme

void Package::setSAdd(string saddress){

	 senderAddress =  saddress;

}//end setSAdd

void Package::setSCity(string scity){

	  senderCity = scity;

}//end setSCity

void Package::setSState(string sstate){

	senderState = sstate;

}//end setSState

void Package::setSZip(string szip){

	senderZip = szip;

}//end setSZip

void Package::setRName(string rname){

	recipientName = rname;

}//end setRName

void Package::setRAdd(string raddress){

	recipientAddress = raddress;

}//end serRAdd

void Package::setRCity(string rcity){

	recipientCity = rcity;

}//end setRCity

void Package::setRState(string rstate){

	recipientState = rstate;

}//end setRState

void Package::setRZip(string rzip){

	recipientZip = rzip;

}//end setRZip

Package& Package::setWeight(double w){

	if (w < 0)

		weight = 0;

	else
		weight = w;

	return *this;

}//end setWeight

Package& Package::setCostPO(double c){

	if (c < 0)

		costPerOunce = 0;

	else
	 costPerOunce = c;

	return *this;

}//end setCostPO

double Package::calculateCost(){

	double cost = weight * costPerOunce;

	return cost;

}

