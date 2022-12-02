#include"Employee.h"
#include"Faculty.h"
#include "Mydate.h"
#include "Person.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
Faculty::Faculty() {
	officeRoom = 0;
	tenure = false;
	officeHours;
}

Faculty::Faculty(int officeRoomm, bool tenuree, Mydate officeHours, std::string namea,
	Mydate birthdate, std::string phoneNoo, std::string emaill,
	Mydate dateHired, long salaryy)
	: Employee(namea, birthdate, phoneNoo, emaill, dateHired, salaryy) {
	officeRoom = officeRoomm;
	tenure = tenuree;
	//this->officeHours = officeHours;
	officeHours.printMydate();

	
}
void Faculty::setOfficeRoom(int officeRoomm) {
	officeRoom = officeRoomm;
}
int Faculty::getofficeRoom() {
	return officeRoom;
}
void Faculty::print() {
	Employee::print();
	cout << "Office room number:  " << officeRoom << endl;
	cout<< "Tenure Status:  ";
	
	if (tenure == 1) {
		cout << "Tenure" << endl;
	}
	else
		cout << "Not Tenure" << endl;

	cout << "Office hours are: ";
	for (int i = 0; i < officeHours.size(); ++i)
	{
		officeHours[i].printMydate();
	}
}
void Faculty::inputData() {
	Employee::inputData();
	cout << "Enter office room: ";
	cin >> officeRoom;
	cout << "Does faculty have tenure? (1 for true/0 for false): ";
	
	int choice;
	cin >> choice;
	if (choice == 1) {
		cout << "Tenure" << endl;
	}
	cout << "Enter Working Hours: ";
	while (true) {
		Mydate inputhours;
		inputhours.printMydate();
		officeHours.push_back(inputhours);
		cout << "Enter More Hours? (y/n): ";
		char choice;
		cin.ignore();
		cin>>choice;
		if (choice == 'n' || choice == 'N')
			break;	
	}

	
	
		




	

}

	
