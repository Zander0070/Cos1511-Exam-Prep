#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

double static Ssss(double a = 0, double b = 0, double c = 0){
	int S = 0;

	S = (a + b + c) / 2;
	return S;

}

double static AreaCalculator(double s = 0,double a = 0, double b = 0, double c = 0) {
	double TotalArea = 0;
	TotalArea = sqrt(s * (s - a) * (s - b) * (s - c));
	return TotalArea;


}

int main() {
	double S = 0, area = 0;;
	int a = 3, b = 4, c = 5;


	S = Ssss(a, b,  c);
	area = AreaCalculator(S, a, b, c);

	cout << "Area of triangle is: " << area << endl;

}
