#include <iostream>
#include <cmath>
#include <algorithm> // For std::swap
using namespace std;



int main() {
	
	int numbers[20] = { 5, 12, 23, 37, 41, 48, 52, 60, 64, 70, 73, 76, 80, 83, 85, 88, 90, 93, 97, 100 };
	int PlaceHolder = numbers[0];
	int uhhhh = 0;

	for (int i = 0; i < 20; i++)
	{
		if (PlaceHolder < numbers[i + 1]) {
			PlaceHolder = numbers[i];
		
			uhhhh++;
		}
	}

	if (uhhhh == 19)
	{
		cout << "Please note the array is in ascedning order";
	}
	else {
		cout << "Please note the array is not in ascending order";
	}

	return 0;

}
