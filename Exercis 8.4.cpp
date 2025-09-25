// Exercis 8.4 from the book "Programming: Principles and Practice Using C++" by Bjarne Stroustrup
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

	float Value1 = 0, Value2 = 0;;

	cout << "Enter two floating-point values: " << endl;
	cout << "Value 1 : ";
	cin >> Value1;
	cout << "Value 2 : ";
	cin >> Value2;

	if (Value1 == Value2)
	{
		cout << "Please note that value 1 is equal to that of value 2";
	}
	else {
		cout << "Please note that value 1 is not equal to that of value 2";
	}

};




