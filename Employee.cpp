#include "Person.h"
#include "Employee.h"
#include "Mydate.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
Employee::Employee() {
	long salary = 0;
	Mydate dateHired;
}
Employee::Employee(string namea, Mydate birthdate, string phoneNoo,
	string emaill, Mydate dateHired, long salaryy) : 
	Person(namea, birthdate, phoneNoo, emaill){
	salary = salaryy;
	this->dateHired = dateHired;
	dateHired.printMydate();
}
void Employee::setSalary(long salaryy) {
	salary = salaryy;
}
long Employee::getSalary() {
	return salary;
}


 void Employee::print(){
	 Person::print();
	 cout <<"The salary is: " << salary << endl;
	 cout << "The day hired: ";
	 dateHired.printMydate();

}
 void Employee::inputData() {
	 Person::inputData();
	 cout << "Enter the salary: ";
	 cin >> salary;
	 cout << "Enter the date hired: ";
	 dateHired.inputMydateData();
 }
