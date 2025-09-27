 //Determines the sum and product of 1 to n
#include <iostream>
using namespace std;

int main(){
	
	double MarkHolder[5] = {};
	double Marks = 0, Holder = MarkHolder[0];;
	int Counter = 0;

	while (Counter < 5)
	{
		cout << "Please enter the mark for student (" << Counter + 1 << "): ";
		cin >> Marks;
		MarkHolder[Counter] = Marks;
		Counter++;

	}

	Counter = 0;

	for (int i = 0; i < 5; i++)
	{
		if (MarkHolder[Counter] > Holder)
		{
			Holder =  MarkHolder[Counter];
		}
		Counter++;
	}

	cout << "The highest mark is: " << Holder << endl;

	

}
