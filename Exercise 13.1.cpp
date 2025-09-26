

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	string subject[7] = { "Math", "Physics", "Chemistry", "Biology", "History", "Geography", "English" };
	float Marks = 0.0, MoneyEarned = 0.0,TotalMarks = 0.0;
	int i = 0, outcome = 0;


	while (i < 7)
	{
		cout << "Enter your marks in " << subject[i] << ": ";
		cin >> Marks;
		TotalMarks += Marks;
		i++;
	}

	TotalMarks = (TotalMarks / 700) * 100;
	cout << endl << "How much money did you make this summer holiday? ";
	cin >> MoneyEarned;

	if (TotalMarks > 90)
	{
		outcome = 1;
	}
	else if (TotalMarks >= 75 && TotalMarks <= 89 && MoneyEarned > 5000) {
		outcome = 2;
	}
	else if (TotalMarks >= 75 && TotalMarks <= 89 && MoneyEarned < 5000)
	{
		outcome = 3;
	}
	else if (TotalMarks >= 59 && TotalMarks < 75) {
		outcome = 4;
	}
	else {
		outcome = 5;
	}


	switch (outcome)
	{

	case 1:
		cout << endl << "You can go to any uni and you get a free car ";
		break;
	case 2:
		cout << endl << "You can go to any uni and get a free car ";
		break;
	case 3:
		cout << endl << "You can study at any uni but you do not get a free car";
		break;
	case 4:
		cout << endl << "You can only go to a local uni";
		break;
	case 5:
		cout << endl << "You will need to study harder next year";
		break;
	default:
		break;
	}

}


