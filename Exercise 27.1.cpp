#include <iostream>
#include <cmath>
#include <algorithm> // For std::swap
#include <string>
#include <math.h> 
#include <iomanip>
using namespace std;

void UppercaseFunc(string word){

	int Length = word.length();



	for (int i = 0; i < Length; i++)
	{
		cout << char(toupper(word[i]));
	}

	

}


int main() {

	string word;
	
	cout << "What word would you like to uppecase? ";
	cin >> word;

	UppercaseFunc(word);

	return 0;

}
