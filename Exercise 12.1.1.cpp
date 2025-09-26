

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
    int num1 = 0, num2 = 0, num3 = 0;
	int Total1 = 0, Total2 = 0, Total3 = 0;


	cout << "Enter the first num : ";
	cin >> num1;

	cout << "Enter the second num : ";
	cin >> num2;

	cout << "Enter the third num : ";
	cin >> num3;

	// unoptimized programming 
	
	Total1 = num1 + num2;
	Total2 = num2 + num3;
	Total3 = num1 + num3;

	if (num3 == Total1)
	{
		cout << "\nPlease note the sum of two number is equal to the value of " << num3 << endl;
	} else if (num2 == Total3){
		cout << "\nPlease note the sum of two number is equal to the value of " << num2 << endl;
	} else if (num1 == Total2){
		cout << "Please note the sum of two number is equal to the value of " << num1 << endl;
	} else {
		cout << "\nThe sum of any two numbers is not equal to the value of the third number";
	}
	return 0;


}


