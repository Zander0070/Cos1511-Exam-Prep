#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int Participants = 0, height = 0;
	float TotalHeight = 0.0;
	cout << "Enter number of participants: ";
	cin >> Participants;

	for (int I = 0; I < Participants; I++)
	{
		cout << "Enter height of participant " << I + 1 << ": ";
		cin >> height;
		TotalHeight += height;
	}

	cout << "The average height amongst these " << Participants << " is " << fixed << setprecision(2) << TotalHeight / Participants << " cm." << endl;
}

 
