#include <iostream>
using namespace std;

void totalDice( int Total = 0) {
	
	int die1 =  0;
		int Throws = 0;
		int Counter = 1;

		for (int i = 0; i < Counter; i++)
		{
			int die1 = rand() % 8 + 1;
			if (die1 == 7)
			{
				cout << "You threw a " << die1 << " after " << Throws << " throws";
				exit(0);
			}
			Counter++;
			Throws++;
		}


};

int main() {
	totalDice();
	return 0;
}
