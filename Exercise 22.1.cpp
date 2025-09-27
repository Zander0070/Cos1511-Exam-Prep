#include <iostream>
#include <cmath>
using namespace std;

int increment15(int value = 0) {
	return value + 15;
}

int main() {
	
	int Testdata[6] = { 2,22,33,44,55,102 };
	for (int i = 0; i < 6; i++)
	{
		cout << "Test " << i + 1 << "\t" << "Result " << i + 1 << " : " << increment15(Testdata[i]) << "\n";
	}

	return 0;

}
