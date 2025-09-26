

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int diceThrow = 0,TotalAmount = 0;
	int I = 0, outcome = 0;

	while (I < 2)
	{
		cout << "Enter your " << I + 1<< " throw : ";
		cin >> diceThrow;
		TotalAmount += diceThrow;
		I++;
	}

	if (TotalAmount == 7 || TotalAmount == 11)
	{
		outcome = 1;
	}
	else if (TotalAmount == 2) {
		outcome = 2;
	}
	else if (TotalAmount == 12)
	{
		outcome = 3;
	} else {
		outcome = 4;
	}

	switch (outcome)
	{
	case 1:
		cout << "You win" << endl;
		break;
	case 2:
		cout << "Snake eyes" << endl;
		break;
	case 3:
		cout << "Good shot " << endl;
		break;
	case 4:
		cout << "You lose" << endl;
		break;
	default:
		break;
	}

}


