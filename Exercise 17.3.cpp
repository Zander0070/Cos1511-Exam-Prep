
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{

	double a, b, c;

	cout << "Please enter the value of side B : ";
	cin >> b;
	cout << "Please enter the value of side C : ";
	cin >> c;

	a = sqrt(pow(b, 2) + pow(c, 2));

	cout << "Please note Side A is : " << fixed << setprecision(3) << a << endl;
	return 0;

}

 
