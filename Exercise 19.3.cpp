 //Determines the sum and product of 1 to n
#include <iostream>
using namespace std;



int sum(int n = 0){
	int answer = 0;
	for (int i = 1; i <= n; i++)
		 answer += i;
	 return answer;
}

int product(int n = 0){
	 int answer = 1;
	 for (int i = 2; i <= n; i++)
		 answer *= i;
	 return answer;
}

int main(){
	int n = 0;
	 int answer = 0, SumAnswer = 0, ProductAnswer = 0;
	 cout << "Enter a positive integer: ";
	 cin >> n;
	 cout << "The sum of 1 up to " << n << " is ";
	 SumAnswer = sum(n);
	 cout << SumAnswer << endl;
	 cout << "The product of 1 up " << n << " is ";
	 ProductAnswer = product(n);
	 cout << ProductAnswer << endl;

	 return 0;
}
