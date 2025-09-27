#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

double static ChirpingCircket(double Chirps = 0){
	int Temperature = 0;

	Temperature = (Chirps + 160) / 4;
	return Temperature;

}


int main() {
  
	double Temprature = 0, chirps = 0;
	cout << "Enter the number of chirps per minute: ";
	cin >> chirps;

	Temprature = ChirpingCircket(chirps);

	if (chirps < 0 )
	{
		cout << "Please note as you have entered a negative number of chirps, the program cannot compute a valid temperature." << endl;
		exit(0);
	}
	else {
		cout << "Please note with a average of " << chirps << " chirps per minute, the approximate temperature is " << fixed << Temprature << " degrees Fahrenheit." << endl;
	}

	
	return 0;

}
