#include <iostream>
#include <cmath>
#include <algorithm> // For std::swap
#include <string>
#include <math.h> 
#include <iomanip>
using namespace std;

struct Time
{
	int Hours, minutes, seconds;
};

void ChangeTime(int TimeP = 0,int Interval = 0 ) {
	TimeP += Interval * 60;

    int hours = TimeP / 3600;
    int remainingSeconds = TimeP % 3600;
    int minutes = remainingSeconds / 60;
    int seconds = remainingSeconds % 60;

	cout << "New Results after interval was added\n " << abs(hours) << " Hours,  " << minutes << " Minutes, " << (seconds) << " Seconds,\n Got incriminted by " << Interval << "Minutes";
}

int main() {
	Time currentTime;
	currentTime.Hours = 1 * 60 * 60;
	currentTime.minutes = 45 * 60;
	currentTime.seconds = 30;

	int IntervalsInMin = 0;

	int TotalSeconds = currentTime.Hours + currentTime.minutes + currentTime.seconds;

	cout << "In what increments do you want the time to chage in Minutes? ";
	cin >> IntervalsInMin;
	
	ChangeTime(TotalSeconds, IntervalsInMin);

}
