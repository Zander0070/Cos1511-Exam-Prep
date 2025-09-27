#include <iostream>
#include <cmath>
#include <algorithm> // For std::swap
using namespace std;



int main() {
	
	float Dataset[10] = {};
	int Counter = 0, Input = 0;

	cout << "Please eneter 10 numbers: " << endl;

	for (int i = 0; i < 10; i++)
	{
		Counter++;
		cout << "Number " << Counter << ": ";
		cin >> Input;
		Dataset[i] = Input;
	}

	cout << "Reverse Order : ";
	for (Counter ; Counter > 0; Counter--)
	{
		cout  << Dataset[Counter - 1] << ", ";
	}

	return 0;

}
