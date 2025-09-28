#include <iostream>
#include <cmath>
#include <algorithm> // For std::swap
#include <string>
#include <math.h> 
#include <iomanip>
using namespace std;


int main() {
	
    float Rainfall[5][12] = {
         {85.2, 92.5, 78.3, 64.7, 58.2, 45.9, 32.1, 29.5, 41.8, 63.3, 77.1, 88.6}, // Year 1
         {90.1, 87.4, 72.6, 68.0, 55.3, 43.8, 30.4, 28.1, 39.9, 60.7, 75.0, 82.3}, // Year 2
         {83.4, 91.0, 79.5, 65.2, 57.8, 44.5, 33.0, 30.2, 42.5, 62.1, 76.4, 85.7}, // Year 3
         {88.0, 89.5, 75.3, 67.4, 56.7, 42.9, 31.6, 27.9, 40.7, 61.5, 74.2, 81.0}, // Year 4
         {86.8, 93.2, 80.1, 66.3, 59.1, 46.2, 34.7, 31.0, 43.2, 64.0, 78.0, 87.5}  // Year 5
    }; 

    double AvgYearlyRainFall = 0, Highest = 0;
    Highest = Rainfall[0][0];

    for (int i = 0; i < 5; i++)
    {
        for (int J = 0; J < 12; J++) {
            AvgYearlyRainFall = +Rainfall[i][J];
            if (Highest < Rainfall[i][J])
            {
                Highest = Rainfall[i][J];
            }

        }
    }

    cout << "The averegae yearly rainfall was " << fixed << setprecision(2) << AvgYearlyRainFall / 5 << "mm/yearly\n";
    cout << "The average monthly raindfall was " << fixed<< setprecision(2) <<AvgYearlyRainFall / 60 << "mm/monthly\n";
    cout << "The month with the highest rainfall was " << Highest << "mm/monthly\n";

}
