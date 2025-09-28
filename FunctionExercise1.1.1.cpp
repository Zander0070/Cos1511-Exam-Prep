#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// Random c++ problems

int I2 = 0, J2 = 0;

float MarkArray[7] = {};
string SubjectHolder[7] = {};

void static Student(float Marks,string subject){

	MarkArray[I2] = Marks;
	SubjectHolder[J2] = subject;
	I2++;
	J2++;

}

void static DisplayData() {
	double Average = 0;
	
	for (int I = 0; I < J2; I++)
	{
		cout << " Subject : " << SubjectHolder[I] << setw(15) << "percentage : " <<   setw(15) << fixed <<setprecision(2)  <<MarkArray[I] / 60 * 100 << "%\n";
		Average += MarkArray[I];
	}
	
	Average /= 7;
	Average =  Average / 60 * 100;
	
	cout << "\n\nAverage for this term : " << Average << "%";

	if (Average < 50)
	{
		cout << "\nPlease note you have flunked this term :(";
	}
	else {
		cout << "\nPlease note you have passed this term, well doen :)";
	}

}

int main() {
	string Subjects[6] = { "Maths", "IT","Coding","RTT","Phycis","AP MATHS" };
	int Marks[6] = { 44, 33, 22, 33, 44, 55 };


	string StudentName = "";
	float Mark;
	int I = 0;
	int TotalScore = 60, const LoopLenght = 6;
	


	cout << "welcome to the Student POS";
	cout << "\nEnter Name of student : ";
	cin >> StudentName;
	cout << endl;


	while (LoopLenght > 0)
	{
		

		Student(Marks[I], Subjects[I]);
		LoopLenght--;
		I++;
	}

	DisplayData();
	
}
