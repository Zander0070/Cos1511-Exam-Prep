

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	float CurrentBalance = 0, TransactionAmount = 0.0, TotalNegativeTrans = 0, TotalPosTrans = 0;
	bool stop = false;
	string Answer;

	cout << "Enter current balance: ";
	cin >> CurrentBalance;

	
	
	while (stop == false)
	{
		cout << "Please enter a transaction amount (negative for withdrawal, positive for deposit, 0 to end): ";
		cin >> TransactionAmount;

		if (TransactionAmount < 0)
		{
			CurrentBalance += TransactionAmount;
			TotalNegativeTrans += abs(TransactionAmount);
		}
		else if (TransactionAmount > 0) {
			CurrentBalance += TransactionAmount;
			TotalPosTrans += TransactionAmount;
		}
		else if (TransactionAmount == 0)
		{
			stop = true;
		}
		


	}


	cout << "Your final balance is: " << CurrentBalance << endl << "Total expenses : " << TotalNegativeTrans << endl << "Total Incomes : " << TotalPosTrans << endl;
	 
}

 
