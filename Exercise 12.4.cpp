

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	
	int spend = 0, discountprice = 0;
	float discount = 0.0;

	cout << "What is the total amount spent? ";
	cin >> spend;

	if (spend > 200)
	{
		discount = 0.5;
		discountprice = spend - (spend * discount);
	}
	else if (spend < 200 && spend >= 100) {
		discount = 0.4;
		discountprice = spend - (spend * discount);

	}
	else if (spend < 100 && spend >= 70) {
		discount = 0.3;
		discountprice = spend - (spend * discount);
	} else if (spend < 70 && spend >= 50) {
		discount = 0.2;
		discountprice = spend - (spend * discount);
	}
	else if (spend < 50) {
		discount = 0.1;
		discountprice = spend - (spend * discount);
	}
	else {
		discount = 0.0;
	}

	cout << "Total amount of money spent R" << spend << "\nTotal discount " << discount * 100 << "%" << endl << "Total amount owwened R" << discountprice;

	return 0;

}


