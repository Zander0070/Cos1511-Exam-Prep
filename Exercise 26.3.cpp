#include <iostream>
#include <cmath>
#include <algorithm> // For std::swap
#include <string>
#include <math.h> 
#include <iomanip>
using namespace std;

int RowSeat = 0, ColumnSeat = 0;
int main() {

	string Seats[5][9] = { {"-","-","-","-","-","-","-","-","-"},
	{"-","-","-","-","-","-","-","-","-"},
	{"-","-","-","-","-","-","-","-","-"},
	{"-","-","-","-","-","-","-","-","-"},
	{"-","-","-","-","-","-","-","-","-"} };

	string Seats2[5][9] = { {"-","-","-","-","-","-","-","-","-"},
	{"-","-","-","-","-","-","-","-","-"},
	{"-","-","-","-","-","-","-","-","-"},
	{"-","-","-","-","-","-","-","-","-"},
	{"-","-","-","-","-","-","-","-","-"} };

	string Letters[5] = { "A","B","C","D","E" };
	

	bool Stop = false;
	string answer = "";
  
   
	while (Stop == false)
	{
		cout << "\t1\t2\t3\t4\t5\t6\t7\t8\t9\n";
		
		for (int i = 0; i < 5; i++)
		{
			cout << "\n" << Letters[i] << " : " << "\t";
			for (int J = 0; J < 9; J++) {
				cout << Seats[i][J] << "\t";
			}
			
		}

		cout << "\nIn which row would you like to sit : ";
		cin >> RowSeat;
		cout << "In which Colum would you like to sit : ";
		cin >> ColumnSeat;

		Seats[ColumnSeat][RowSeat] = "X";
	

		if (Seats[ColumnSeat][RowSeat] == "X")
		{
			if (Seats[ColumnSeat][RowSeat] != Seats2[ColumnSeat][RowSeat])
			{
				Seats2[ColumnSeat][RowSeat] = "X";
			}
			else {
				cout << "Please take note that seat has already been chosen,\nPlease choose another one next time.";
			}
		}
		
		cout << "Do you want to stop? (yes/no) : ";
		cin >> answer;

		if (answer == "yes")
		{
			Stop = true;
		}
		else {
			Stop = false;
		}
	
		
	}

	cout << "\n\n| Latest Seating Plan |\n\n";
	cout << "\t1\t2\t3\t4\t5\t6\t7\t8\t9\n";
	for (int i = 0; i < 5; i++)
	{
		cout << "\n" << Letters[i] << " : " << "\t";
		for (int J = 0; J < 9; J++) {
			cout << Seats[i][J] << "\t";
		}

	}

	return 0;

}
