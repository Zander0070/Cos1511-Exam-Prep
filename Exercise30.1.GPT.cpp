#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class Car {
public:
	string brand;

	void SetBrandToValue(string NewName) {
		brand = NewName;
}

	void PrinyBrandValue() {
		cout << "The brand is " << brand;
	}


};

int main() {
	Car Mycar;
	string BrandName = "Lafarra";

	Mycar.SetBrandToValue(BrandName);
	Mycar.PrinyBrandValue();

	return 0;

}
