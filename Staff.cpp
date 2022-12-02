#include "Mydate.h"
#include "Staff.h"
#include "Employee.h"
#include "Person.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
Staff::Staff() {
	string tittle = " ";
}
Staff::Staff(string namea, Mydate birthdate, string phoneNoo,
	string emaill, Mydate dateHired, long salaryy, string tittlee)
	: Employee(namea, birthdate, phoneNoo, emaill, dateHired, salaryy) {
	tittle = tittlee;
}
void Staff::setTittle(string tittlee) {
	tittle = tittlee;
}
string Staff::getTittle() {
	return tittle;
}
void Staff::print() {
	Employee::print();
	cout <<"Tittle: " << tittle << endl;
}
void Staff::inputData() {
	Employee::inputData();
	cout << "Enter a tittle: ";
	cin >> tittle;
}