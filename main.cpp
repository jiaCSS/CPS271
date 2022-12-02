#include"Person.h"
#include"Mydate.h"
#include"Staff.h"
#include"Faculty.h"
#include"Employee.h"
#include"Student.h"
#include<iostream>
#include<iomanip>
#include<string> 
#include<conio.h>

using namespace std;

int main() {

	Faculty faculty;
	Staff staff;
	Student student;
	int choice = 0;

	cout << "****Welcome to Student, Faculty, Staff info center****" << endl;
	cout << "Enter 0 to Student, 1 to Faculty, 2 to Staff" << endl;
	cin >> choice;
	if (choice == 0) {
		cout << "****Welcome to Student info center****" << endl;
		vector<Person*> person;
		person.push_back(&student);

		for (auto* p : person) {
			p->inputData();
			p->print();
			
		}
		
	}
	else if (choice == 1) {
		cout << "****Welcome to Faculty info center****" << endl;
		vector <Employee*> employee;
		employee.push_back(&faculty);
		for (auto* e : employee) {
			e->inputData();
			e->print();
		}
	}
	else if (choice == 2) {
		cout << "****Welcome to Staff info center****" << endl;
		vector <Employee*> employee;
		employee.push_back(&staff);
		for (auto* e : employee) {
			e->inputData();
			e->print();
		}
	}
	else
		cout << "Invalid Enter" << endl;
		

	



	vector<Person*> person;
	person.push_back(&student);
	
	for (auto* p : person) {
		p->inputData();
		p->print();
	}
	
	vector <Employee*> employee;
	employee.push_back(&faculty);
	employee.push_back(&staff);

	for (auto* e : employee) {
		e->inputData();
		e->print();
	}

	for (auto* p : person) {
		delete p;
	}
	for (auto* e : employee) {
		delete e;
	}

	system("pause");
	return 0;
}