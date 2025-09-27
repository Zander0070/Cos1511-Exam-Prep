#include <iostream>
#include <cmath>
#include <algorithm> // For std::swap
using namespace std;



int main() {
	
	float DataSetA[10] = {};
	float DataSetB[10] = {};
	int Input = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "Please enter Value " << i + 1 << " : ";
		cin >> Input;
		DataSetA[i] = Input;
		DataSetB[i] = DataSetA[i];
	}

	for (size_t i = 0; i < 10; i++)
	{
		cout << DataSetA[i] << " , ";
		//cout << DataSetB[i] << " , ";
	}


	return 0;

}
