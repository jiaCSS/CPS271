#include<iostream>
#include<cmath>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

void printswab(int a, int b) {

	cout << "Value of a before: " << a << endl;
	cout << "Value of b before: " << b << endl;

	// swap values of the variables
	swap(a, b);
	cout << "Value of a now: " << a << endl;
	cout << "Value of b now: " << b << endl;
}

//loop file and print out all students and the hightest score
void print_students() {

	//define variables
	string lastName;
	string fristName;
	int testScore;
	char grade;
	int highestScore = 0;
	string hightFirstName;
	string hightLastName;

	//read file
	ifstream fin("students_grades.txt");
	//loop starts
	while (fin.peek() != EOF) {
		fin >> fristName;
		fin >> lastName;
		fin >> testScore;

		//loop find hightest score;
		if (testScore > highestScore) {
			highestScore = testScore;
			hightFirstName = fristName;
			hightLastName = lastName;
		};
		cout << setw(10) << left << lastName;
		cout << setw(10) << left << fristName;
		cout << setw(10) << left << testScore;

		//loop print grades (ABCDF);
		if (testScore >= 90) {
			grade = 'A';
			cout << setw(20);
			cout << left << grade << endl;
		}
		else if (testScore >= 80) {
			grade = 'B';
			cout << setw(20);
			cout << left << grade << endl;
		}
		else if (testScore >= 70) {
			grade = 'C';
			cout << setw(20);
			cout << left << grade << endl;
		}
		else if (testScore >= 60) {
			grade = 'D';
			cout << setw(20);
			cout << left << grade << endl;
		}
		else {
			grade = 'F';
			cout << setw(20);
			cout << left << grade << endl;
		}
	}//print out hightest score
	cout << "\n" << "The hightest test score is:  " << hightLastName << ", " << hightFirstName << "  " << highestScore << "\n";
}//end loop


int main() {

	//call students print function 
	print_students();

	//call swab function
	printswab(10, 20);



	getchar();
	return 0;
}