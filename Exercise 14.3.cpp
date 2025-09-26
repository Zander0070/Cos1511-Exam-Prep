

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	string songArr[12] = { "There were 10 in the bed","And the little one said:","Roll over, roll over!","So they all rolled over,",
		"And one fell out,","There were 9 in the bed","And the little one said:",":",":","There was 1 in the bed",
		"And the little one said:","Good night!" };
	 

	int i = 0;

	while (i < 12) {
		cout << songArr[i] << endl;
		i++;
	}

	return 0;

}

 
