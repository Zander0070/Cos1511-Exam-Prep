#include <iostream>
#include <cmath>
#include <algorithm> // For std::swap
using namespace std;


int main() {
	
	int MatrixA[2][3] = {
		{1,2,3},
		{4,5,6} };

	int MatrixB[3][2] = { {1,4},{2,5} ,{3,6} };


	bool Transport = true;

	for (int I = 0; I < 3; I++) {
		for (int J = 0; J < 2; J++)
		{
			if (MatrixA[J][I] != MatrixB[I][J])
			{
				Transport = false;
			}
			else {
				Transport = true;
			}
		}
		
		
		
	}

	if (Transport == true)
	{
		cout << "Please note Matrix A is a transporttation of Matrix B "; 
	}
	else {
		cout << "Please note that Matrix A is not a transporaryion of Matrix B "
	}

}
