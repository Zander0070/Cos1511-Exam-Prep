#include <iostream>
#include <cmath>
#include <algorithm> // For std::swap
using namespace std;


int main() {
	
    bool DataSet[10] = { true, false, true, true, false, false, true, false, true, false };
	string StudentAnswers[10] = {};
    string Answer = "";
	bool AnswerValidate;
	double Counter = 0, TotalQuestiosn = 1;;

	for (int i = 0; i < 10; i++)
	{

		cout << "Is Question " << i + 1 << " (True or False) : ";
		cin >> Answer;
		StudentAnswers[i] = Answer;
		if (Answer == "True")
		{
			AnswerValidate = true;
			if (AnswerValidate == DataSet[i])
			{
				Counter++;
			}
		}
		else if (Answer == "False") {
			AnswerValidate = false;
			if (AnswerValidate == DataSet[i])
			{
				Counter++;
			}
		}
		else {
			cout << "Invalid Answer";
		}

		TotalQuestiosn++;

	}

	TotalQuestiosn--;

	cout << "A total of " << TotalQuestiosn << " Questiosn were answered, which " << Counter << " Was correct\nGiving you a avg of " << Counter / TotalQuestiosn * 100 << "%";

	return 0;

}
