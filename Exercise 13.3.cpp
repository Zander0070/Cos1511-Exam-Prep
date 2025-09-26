

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	float AmountOfHours = 0.0;
	int TotalCost = 0, outcome = 0;
	string VehicleType = "";
	cout << "Enter the amount of hours you were parked: ";
	cin >> AmountOfHours;

	AmountOfHours = ceil(AmountOfHours);

	if (AmountOfHours > 5)
	{
		TotalCost = 10;




		outcome = 1;
		cout << "Were you driving a truck (yes/no) : ";
		cin >> VehicleType;
		

		if (VehicleType == "yes")
		{
			TotalCost += 1;
			outcome = 5;

		}


	}
	else if (AmountOfHours >= 3 && AmountOfHours <= 5)
	{
		TotalCost = 5;


		outcome = 2;
		cout << "Were you driving a truck (yes/no) : ";
		cin >> VehicleType;
		if (VehicleType == "yes")
		{
			TotalCost += 1;
			outcome = 5;
		}
	}
	else if (AmountOfHours <= 2 && AmountOfHours > 1) {

		TotalCost = 3;



		outcome = 3;
		cout << "Were you driving a truck (yes/no) : ";
		cin >> VehicleType;
		if (VehicleType == "yes")
		{
			TotalCost += 1;
			outcome = 5;
		}

	}
	else if (AmountOfHours <= 1)
	{
		TotalCost = 2;


		outcome = 4;
		cout << "Were you driving a truck (yes/no) : ";
		cin >> VehicleType;
		if (VehicleType == "yes")
		{
			TotalCost += 1;
			outcome = 5;
		}
	}

	switch (outcome)
	{

	case 1:
		cout << "You owe " << TotalCost << " dollars for parking for " << AmountOfHours << " hour " << endl;
		break;
	case 2:
		cout << "You owe " << TotalCost << " dollars for parking for " << AmountOfHours << " hour " << endl;
		break;
	case 3:
		cout << "You owe " << TotalCost << " dollars for parking for " << AmountOfHours << " hour " << endl;
		break;
	case 4:
		cout << "You owe " << TotalCost << " dollars for parking for " << AmountOfHours << " hour " << endl;
		break;
	case 5:
		cout << "You owe " << TotalCost << " dollars for parking for " << AmountOfHours << " hour " << endl;
		break;
	default:
		break;
	}
}


