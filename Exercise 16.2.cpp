

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int n = 1, StartValue = 1, TotalValue = 0;;

	for (int i = 0; i < n; i++)
	{
		
		for (size_t i = 0; i < n + 1; i++)
		{
			TotalValue = TotalValue + StartValue;
			cout << TotalValue << "\t";
			
			
		}
		StartValue++;
		n++;
		cout << endl;
		if (n == 10)
		{
			exit(0);
		}

		TotalValue = 0;
	}
	
	return 0;
}

 
