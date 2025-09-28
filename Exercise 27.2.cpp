#include <iostream>
#include <cmath>
#include <algorithm> // For std::swap
#include <string>
#include <math.h> 
#include <iomanip>
using namespace std;

void static IntialCalc(string GovName) {

	int LengthLen = GovName.length();
	string IntialArray[100] = {};
	char EmptySpace = ' ';
	int Counter = 1;
	IntialArray[0] = char(GovName[0]);

	for (int i = 0; i < LengthLen; i++)
	{
		if (GovName[i] == ' ') {
			IntialArray[Counter] = GovName[i+1];
			Counter++;
		}
	}

	for (int i = 0; i < Counter; i++)
	{
		cout << IntialArray[i] << " ";
	}



}

int main() {

	string Fullname;

	cout << "Please enter a givermant name : ";
	getline(cin, Fullname);


	IntialCalc(Fullname);


}
