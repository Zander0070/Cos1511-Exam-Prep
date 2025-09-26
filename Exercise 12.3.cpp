

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int Year = 0;

	cout << "Enter a year: ";
	cin >> Year;
	bool leapYear = false;

	
	if (Year % 4 == 0 && Year % 100 != 0 )
	{
		leapYear = true;
		cout << Year << " is a leap year." << endl;
	}
	else if (Year % 400 == 0 && Year % 100 == 0) {
		leapYear = true;
		cout << Year << " is a leap year." << endl;
	}
	else
	{
		cout << Year << " is not a leap year." << endl;
	}
		
	
	return 0;

}


