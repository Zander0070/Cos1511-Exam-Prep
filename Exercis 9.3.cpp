// Exercis 9.3 from the book "Programming: Principles and Practice Using C++" by Bjarne Stroustrup
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

	float IntialInvestment = 1000;
	float  const yearlyDeposit = 500;
	int Age = 0;
	

	while (Age < 18)
	{
		Age++;
		IntialInvestment = (IntialInvestment +yearlyDeposit) * 1.045 ;
		cout << "Year " << Age << " Sipho will have R" << fixed << setprecision(2) << IntialInvestment << " in his account" << endl;
	}

	return 0;

};




