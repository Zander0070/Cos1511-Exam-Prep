//Displays all powers of 2 less than a limit
#include <iostream>
using namespace std;


float iPow(float answer = 0, int n = 0, float x = 0) {
	 
	 for (int i = 1; i <= n; i++)
		 answer *= x;
	 return answer;
	 }

 int main()
 {
	 float answer = 0;
	 cout << "Enter a limit for the calculations: ";
	 cin >> answer;
	 float x = 2;
	 int n = 1;
	 while (iPow(answer, n ,x) < answer)
		 {
		 cout << x << " to the power " << n << " = ";
		 cout << iPow() << endl;
		 n++;
		 }
	 return 0;
}
