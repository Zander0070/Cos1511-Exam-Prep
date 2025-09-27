#include <iostream>
#include <cmath>
#include <algorithm> // For std::swap
using namespace std;


int main() {
	
    bool flags[50] = {
        false, false, false, false, false, false, false, false, false, false,
        false, false, false, false, false, false, false, false, false, false,
        false, false, false, false, false, false, false, false, false, false,
        false, false, false, false, false, false, false, false, false, false,
        false, false, false, false, false, false, false, false, false, false
    };
    int Counter = 1;
    int Position = 0;

    for (int i = 0; i < 50; i++)
    {
        if (Counter % 2 == 0) {
            flags[Position] = true;

        }

        if (Counter % 3 == 0)
        {
            flags[Position] = !flags[Position];
        }
        
        if (Counter % 4 == 0)
        {
            flags[Position] = !flags[Position];
        }

        if (Counter % 5 == 0)
        {
            flags[Position] = !flags[Position];
        }

        if (Counter % 6 == 0)
        {
            flags[Position] = !flags[Position];
        }

        Counter++;
        Position++;


    }

    for (int i = 0; i < 50; i++)
    {
        cout << flags[i];
    }
    

}
