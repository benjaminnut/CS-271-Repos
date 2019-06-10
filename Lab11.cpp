//CS 271
// Lab11.cpp
// Date: Nov 26, 2018
// Author: benja
//*insert description here*

#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	int row = 5, column = 4;

	int x, y;

	int productNum = 1, salesPerson = 1;

	double max = 0;

	double sales[row][column];

	double totalSales[5];

	for (int a = 0; a < 5; a++)
		totalSales[a] = 0;

	double totalProduct[5];

	for (int b = 0; b < 5; b++)
		totalProduct[b] = 0;

	for (int i = 0; i < row; i++ ){

		for(int k = 0; k < column; k++)

			sales[i][k] = 0;

	}

	ofstream outf("SalesReport.dat");

	ifstream inf("Sales.dat");

	if(!inf){

		cerr << "Error; attempt to read file input unsuccessful" << endl;
		return 1;

	}


	while (inf){


		for (int i = 0; i < row; i++ ){

			for(int k = 0; k < column; k++){

				inf >> sales[i][k];

				//reads in the numbers from the file and stores them in double-scripted array

				if (k < 3)
				cout << sales[i][k] << " ";

			}//end inner for

			cout << endl;

		}//end outer for

	}//end while




	for ( x = 0; x < row; x++){

		for (y = 0; y < column - 1; y++){

			totalSales[y] = totalSales[y] + sales[x][y];

			cout << "Current sale total " << totalSales[y] << endl;


		}//end column loop


		cout << endl << setprecision(2) << "Product #" << productNum << " sales: "

				<< setw(7) << totalSales[y] << endl;


		productNum++;


	}//end row loop

	for (int loop1 = 0; loop1 < row; loop1++){
		outf << "Salesperson # " << salesPerson;
		for (int loop2 = 0; loop2 < column; loop2++){

			outf << setprecision(2) << setw(7)<< totalSales[loop2];

		}
		salesPerson++;
		outf << endl;
	}

	if (!outf){

		cerr << "Error: unable to create output file";

		return 1;
	}


	return 0;

}//end main








