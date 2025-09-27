#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void ValidateSides(int a = 0, int b = 0, int c = 0) {
	string errorMessage = "Invalid triangle sides.";
	string successMessage = "Valid triangle sides.";

	if ((a + b > c) && ( b + c > a) && (a + c > b))
	{
		cout << successMessage << endl;
		return;
	}else
	{
		cout << errorMessage << endl;
		return;
	}
}


int main() {
  
	int a = 0, b = 0, c = 0;

	cout << "Please enter side A : ";
	cin >> a;
	cout << "Please enter side B : ";
	cin >> b;
	cout << "Please enter side C : ";
	cin >> c;

	ValidateSides(a, b, c);

}
