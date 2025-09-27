#include <iostream>
#include <cmath>
using namespace std;

bool Stopping = false;

void StockCalc() {
	int price = 0, stock = 0;
	int Itterationleft = 0, ItterationRight = 0, Counter = 1;
	double TotalValue = 0;
	double StockStorage[100][100] = {};
	string Input = "";


	while (Input != "Stop")
	{
		cout << "Please enter the price of Stock " << Counter << ": R";
		cin >> price;
		StockStorage[Counter][0] = price;
		cout << "Please enter the amount of Stock " << Counter << ": ";
		cin >> stock;
		StockStorage[Counter][1] = stock;
		Counter++;
		cout << "Type 'Stop' to end or press enter to continue: ";
		cin >> Input;
		cout << endl;
		if (Input == "Stop")
		{
			Stopping = true;
			for (Itterationleft = 1; Itterationleft < Counter; Itterationleft++)
			{
				cout << "The total value of Stock " << Itterationleft << " is: R" << StockStorage[Itterationleft][0] * StockStorage[Itterationleft][1] << endl;
				TotalValue = TotalValue + (StockStorage[Itterationleft][0] * StockStorage[Itterationleft][1]);
			
			}

			cout << endl << "The total value of all stocks is: R" << TotalValue << endl;
		}
	}

}

int main() {
	
	string Input = "";
	cout << "welcome to your stock tracker!" << endl;
	while (Stopping != true)
	{
		StockCalc();
		
	}

	return 0;
}
