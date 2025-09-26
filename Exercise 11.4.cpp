#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>
using namespace std;

int main() {

	int randomNum = 0, chances = 10, Input = 0;
	bool Answer = false;
	randomNum = rand() % 100 + 1; 

	while (Answer == false && chances > 0)
	{

		cout << "Enter a number between 1 and 100: " ;
		cin >> Input;

		if (Input == randomNum)
		{
			Answer = true;
			cout << "\nThe random number was: " << randomNum << "\nYou guessed correct" << endl;
			exit(0);
		}

		chances--;
		cout << "You still have " << chances << " chances left" << endl;

	}

	


}
