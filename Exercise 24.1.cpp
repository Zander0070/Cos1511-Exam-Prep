#include <iostream>
#include <cmath>
#include <algorithm> // For std::swap
using namespace std;



int main() {
	
	int Dataset[10] = { 10,3,56,7,0,5,44,99,76,1 };
	int DummyContainer = Dataset[0];
	int LastSwap = -1;

	for (int i = 0; i < 10; i++)
	{
		
		if (Dataset[i] > DummyContainer)
		{
			DummyContainer = Dataset[i];
			LastSwap--;
			
		}

		LastSwap++;
	}


	Dataset[LastSwap] = Dataset[0];
	Dataset[0] = DummyContainer;
	

	for (int i = 0; i < 10; i++)
	{
		cout << Dataset[i] << " ";
	}

}
