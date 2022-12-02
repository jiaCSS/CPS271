#include "Person.h"
#include "Student.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

Student::Student() {
	gpa = 0;
}
Student::Student(GradeStatus grades, double gpaa, std::string namea,
	Mydate birthdate, std::string phoneNoo,
	std::string emaill): Person(namea, birthdate,phoneNoo, emaill) {
	gpa = gpaa;
	gradesStatus = grades;
	}

void Student::setGPA(double gpaa) {
	gpa = gpaa;
}
double Student::getGPA() {
	return gpa;
}

void Student::print() {
	Person::print();
	 
	if (gradesStatus == Freshman)
		cout << "Grade: Freshman" << endl;
	else if (gradesStatus == Sophomore)
		cout << "Grade: Sophomore" << endl;
	else if (gradesStatus == Junior)
		cout << "Grade: Junior" << endl;
	else  
		cout << "Grade: Senior" << endl;

	cout <<"GPA: " << gpa << endl;
}
void Student::inputData() {
	Person::inputData();
	cout << "0 = Freshman" << endl;
	cout << "1 = Sophomore" << endl;
	cout << "2 = Junior" << endl;
	cout << "3 = Senior" << endl;
	cout << "Enter grade status (freshman, sophomore, junior, or senior): ";
	int gs;
	cin >> gs;
	while(gs > 3 || gs < 0) {
		cout << "Invlaid try enter again" << endl;
		cin >> gs;
	}
	if (gs == 0)
		gradesStatus = GradeStatus::Freshman;
	else if (gs == 1)
		gradesStatus = GradeStatus::Sophomore;
	else if (gs == 2)
		gradesStatus = GradeStatus::Junior;	
	else
		gradesStatus = GradeStatus::Senior;
		
	
	cout << "Enter GPA: ";
	cin >> gpa;
}