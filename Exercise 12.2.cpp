

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
  
	int DiceThrow = 0, DiceThrow2 = 0, TotalAmount = 0;
	int I = 0;

	while (I < 2)
	{
		cout << "Enter the first dice throw: ";
		cin >> DiceThrow;
		TotalAmount += DiceThrow;
		I++;
	}

	if (TotalAmount == 7 || TotalAmount == 11)
	{
		cout << "YOU WIN!";
		
	} else if (TotalAmount == 12)
			{
				cout << "Good shot!";
			} else if (TotalAmount == 2)
		{
			cout << "Snake eyes";
			
		}
	else {
		cout << "You lose!";
	}

}


