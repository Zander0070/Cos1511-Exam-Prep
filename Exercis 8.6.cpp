// Exercis 8.6 from the book "Programming: Principles and Practice Using C++" by Bjarne Stroustrup
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

	float len = 0, width = 0,area = 0;
	cout << "Enter the Length of the room : ";
	cin >> len;
	cout << "Enter the Width of the room : ";
	cin >> width;

	area = len * width;

	if (area > 100) {
		cout << "Please note a 100 meters of carpet will not be enough." << endl;
	}
	else {
		cout << "100 meters of carpet will be enough." << endl;
	}
	
	return 0;

};




