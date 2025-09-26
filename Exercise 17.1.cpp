
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{

	int LotterNum[6] = {};
	int RandomNumber = 0;
	int Itterations = 0, DuplicateCount = 0;

	for (size_t Itterations = 0; Itterations < 6; Itterations++)
	{
		RandomNumber = rand() % 49 + 1;

		for (size_t i = 0; i < Itterations; i++)
		{
			if (LotterNum[i] == RandomNumber)
			{
				RandomNumber = rand() % 49 + 1;
				i = -1;
				DuplicateCount++;
			}
		}

		LotterNum[Itterations] = RandomNumber;

	}

	for (size_t i = 0; i < 6;)
	{
		cout << "Lucky Number " << i + 1 << " is : " << LotterNum[i] << endl;
		i++;
	}

	cout << "There was a total of " << DuplicateCount << " duplicates" << endl;
	return 0;

}

 
