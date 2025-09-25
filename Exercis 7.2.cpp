// Exercis 7.2 from the book "Programming: Principles and Practice Using C++" by Bjarne Stroustrup
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

	string Sentence;
	string Seached;

	cout << "Enter a sentence: ";
	getline(cin, Sentence);

	cout << "Which letters position are you searching for? : ";
	getline(cin, Seached);

	
		size_t pos = Sentence.find(Seached);
		while (pos != string::npos) {
			cout << "The letter " << Seached << " is at position " << pos + 1 << endl;
			pos = Sentence.find(Seached, pos + 1);
		}
	
 
	return 0;

};




