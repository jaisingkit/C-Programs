//Advanced22.cpp - displays the number of units of
//electricity used and the total charge
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
void getInput(int &newReading, int &oldReading);
void calcBill(int curRead, int prevRead, 
			  const double chgPerUnit, int &numUnits,
			  double &totChg);
void displayBill(int used, double charge);

int main()
{
	//declare constant and variables
	const double UNIT_CHG = .09;
	int current  = 0;
	int previous = 0;
	int units    = 0;     
	double total = 0.0;

	cout << fixed << setprecision(2);

	//call functions
	getInput(current, previous);
	calcBill(current, previous, UNIT_CHG, units, total);
	displayBill(units, total);

	system("pause");
	return 0;
}	//end of main function

//*****function definitions*****
void getInput(int &newReading, int &oldReading)
{
	cout << "Current reading: "; 
	cin >> newReading;
	cout << "Previous reading: "; 
	cin >> oldReading;
}	//end of getInput function

void calcBill(int curRead, int prevRead, 
			  const double chgPerUnit, int &numUnits,
			  double &totChg)
{
	numUnits = curRead - prevRead;
	totChg = numUnits * chgPerUnit;
}	//end of calcBill function

void displayBill(int used, double charge)
{
	cout << "Units used: " << used << endl;
	cout << "Total charge: $" << charge << endl;
}	//end of displayBill function
