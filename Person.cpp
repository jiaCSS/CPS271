#include "Person.h"
#include"Mydate.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
Person::Person() {
	std::string name = " ";
	std::string phoneNo = " ";
	std::string email = " ";
}
Person::Person(std::string namea, Mydate birthdate, std::string phoneNoo,
	std::string emaill) {
	name = namea;
	phoneNo = phoneNoo;
	this->birthdate = birthdate;
	email = emaill;	 
}
void Person::setName(std::string name) {
	name = name;
}
void Person::setPhoneNo(std::string phoneNoo) {
	phoneNo = phoneNo;
}
void Person::setEmail(std::string emaill) {
	email = emaill;
}
std::string Person::getName() {
	return name;

}
std::string Person::getPhoneNo() {
	return phoneNo;

}
std::string Person::getEmail() {
	return email;
}
void Person::print() {
	cout << "\n\n The information is: " << endl;
	cout << "Name: "<< name << endl;
	cout << "Birthday: ";
	birthdate.printMydate();
	cout << "Phone Number: " << phoneNo << endl;
	cout << "Email Address: " << email << endl;
}

void Person::inputData() {
	cout << "\nEnter a name: ";

	cin >> name;
	cout << "Enter birthday in form of dd-mm-yy: ";
	birthdate.inputMydateData();
	cout << "Enter phone number: ";
	cin >>  phoneNo;
	cout << "Enter email address: ";
	cin >> email;
}
 
