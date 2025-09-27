#include <iostream>
#include <cmath>
using namespace std;

float PI = 3.14;

double CalcArea(double Radius = 0) {
	float Area = PI * pow(Radius, 2);
	return Area;
}

double CalcCircumference(double Radius = 0) {
	float Circumference = 2 * PI * Radius;
	return Circumference;
}

int main() {
	float TestData[3] = { 5, 10, 15 };
	float Area = 0, Circumference = 0;

	for (int I = 0; I < 3; I++) {
		Area = CalcArea(TestData[I]);
		Circumference = CalcCircumference(TestData[I]);

		cout << "Area Test Case " << I + 1 << ": " << Area << endl;
		cout << "Circumference Test Case " << I + 1 << ": " << Circumference << endl;
		cout << "------------------------" << endl;

	}

	return 0;

}
