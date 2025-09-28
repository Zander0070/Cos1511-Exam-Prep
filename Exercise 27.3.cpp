#include <iostream>
#include <cmath>
#include <algorithm> // For std::swap
#include <string>
#include <math.h> 
#include <iomanip>
using namespace std;

void static WorkExtractor(string Sentence) {
	int length = Sentence.length();
	string WordCacther[100] = {};
	int J = 0;

	for (int i = 0; i < length; i++)
	{
		WordCacther[J] += Sentence[i];

		if (Sentence[i] == ' ')
		{
			J++;
			
		}

	}

	for (int i = 0; i <= J; i++)
	{
		cout << WordCacther[i] << endl;
	}

	
}

int main() {

	string SentenceOfChoice;

	cout << "Please enter a sentence : ";
	getline(cin, SentenceOfChoice);
	WorkExtractor(SentenceOfChoice);

}
