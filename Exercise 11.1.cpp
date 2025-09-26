#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    float FreeUnits = 20;
    float FixedRate = 10;
    float InputUnit = 0;
    float specialRate = 1.5, specialRate2 = 2.0;
    float TotalBill = 0.0;

    cout << "How many units did you use this month? ";
    cin >> InputUnit;

    InputUnit = InputUnit - FreeUnits;
    if (InputUnit < 0) InputUnit = 0; // Prevent negative usage

    cout << fixed << setprecision(2);

    if (InputUnit > 100)
    {
        FixedRate = FixedRate * specialRate2;
        TotalBill = InputUnit * FixedRate;

        cout << "Please note as the units used this month exceed 100, special rates will apply\n";
        cout << "You will be charged $" << TotalBill << " for " << InputUnit << " units used\n";
    }
    else if (InputUnit > 40 && InputUnit < 100) {

        FixedRate = FixedRate * specialRate;
        TotalBill = InputUnit * FixedRate;

        cout << "Please note as the units used this month exceed 40, special rates will apply\n";
        cout << "You will be charged $" << TotalBill << " for " << InputUnit << " units used\n";

    }
    else {
        TotalBill = InputUnit * FixedRate;
        cout << "You will be charged $" << TotalBill << " for " << InputUnit << " units used\n";
    }

    return 0;
}
