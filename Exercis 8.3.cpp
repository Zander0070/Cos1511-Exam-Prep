// Exercis 8.3 from the book "Programming: Principles and Practice Using C++" by Bjarne Stroustrup
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

	float Amount = 0;

	cout << "Enter an amount: ";
	cin >> Amount;

	if (Amount >= 0) {
		cout << "Credit";
	}
	else {
		cout << "Debit";
	}

	return 0;

};




