

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	float SalarieHolder[100] = {};
	float InputSalarie = 0, TotalSalary = 0.0;
	float OverHunder = 0;
	int Counter = 0;
	bool Stop = false;

	while (Stop == false)
	{

		cout << "Enter the Salarie of the employee (or 0 to stop): ";
		cin >> InputSalarie;

		if (InputSalarie == 0)
		{
			Stop = true;
		}
		else
		{
			SalarieHolder[Counter] = InputSalarie;
			TotalSalary += InputSalarie;
			Counter++;
			if (InputSalarie > 100000)
			{
				OverHunder++;
			}
		}

	}

	cout << "Total employees : " << Counter << endl << "Average Salary : " << TotalSalary / Counter << endl << "Percentage over 100K is " << fixed<< setprecision(2)<<  OverHunder / Counter   * 100 << "%" << endl << "Total Money spent on salaries : " << TotalSalary << endl;
	 
}

 
