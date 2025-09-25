// Exercis 9.4 from the book "Programming: Principles and Practice Using C++" by Bjarne Stroustrup
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

	int const MaxMass = 10000;
	int LuggaeItem = 0, LuggaeMass = 0, TotalWeight = 0;
	string Prompt;
	bool ExistApplication = false;


	while (ExistApplication == false) {
		cout << "Enter the weight of luuagae Item " << LuggaeItem + 1 << " : ";
		cin >> LuggaeMass;
		cout << "Would you like to stop the application? (y/n): ";
		cin >> Prompt;
		Prompt = toupper(Prompt[0]);

		if (Prompt == "N")
		{
			ExistApplication = true;
		}
		else {
			ExistApplication = false;
		}
		TotalWeight += LuggaeMass;

		if (LuggaeMass < 0) {
			cout << "You can't enter a negative weight!" << endl;
		}

		if (LuggaeMass > MaxMass) {
			cout << "You can't enter a weight more than " << MaxMass << "!" << endl;
			exit(1);
		}

		LuggaeItem++;
		
	}

	cout << "Total weight of luggage is: " << TotalWeight << " kg" << endl;
	
	return 0;

	

};




