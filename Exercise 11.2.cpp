#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

	int ChildsAge = 0;
	int ParentsAge = 0;
	int GrossIncome = 0;
	bool Marriaged = false;
	string MarriageInput;

	cout << "Please fill in the below form\n==============================\n";
	cout << "Age of Child : ";
	cin >> ChildsAge;
	cout << "Age of Parent : ";
	cin >> ParentsAge;
	cout << "Gross Income : ";
	cin >> GrossIncome;
	cout << "Married (1 for Yes, 0 for No) : ";
	cin >> MarriageInput;

	if (MarriageInput == "1") {
		Marriaged = true;
	}
	else if (MarriageInput == "0") {
		Marriaged = false;
	}
	else {
		cout << "Invalid Input, try again later";
	}

	if (ChildsAge < 6 || ChildsAge > 2) {
		if (Marriaged == true && GrossIncome < 60000 && ParentsAge < 30)
		{
			cout << "\nPlease be aware you qialify";
			exit(0);
		}

		cout << "\nYou do not qualify";
	}

	return 0;

}
