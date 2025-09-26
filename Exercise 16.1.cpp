

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int StartValue = 0, EndValue = 0;
	int Cycles = 0;
	int equation = 0;

	cout << "Please enter the start value : ";
	cin >> StartValue;
	cout << "Please enter the end value : ";
	cin >> EndValue;

	Cycles = EndValue - StartValue + 1;
	


	for (int i = 0; i < Cycles; i++)
	{
		equation = pow(StartValue, 3) - ( 3 * StartValue) + 1;
		cout << "Value : "  << endl;
		StartValue++;
		cout << "y = " << equation << endl;
	}

	return 0;
}

 
