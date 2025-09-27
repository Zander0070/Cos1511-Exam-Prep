#include <iostream>
#include <cmath>
#include <algorithm> // For std::swap
using namespace std;

void swap(int& n1, int& n2)
{
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;

	cout << "After swapping: n1 = " << n1 << ", n2 = " << n2 << endl;

	// Alternatively, using std::swap from <algorithm>
}

int main() {
	
	int TetsD = 10, TestD2 = 20;
	swap(TetsD, TestD2);



}
