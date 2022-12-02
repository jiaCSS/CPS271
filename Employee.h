#pragma once
#include "Person.h"
#include "Mydate.h"
#include <iostream>
#include <string>


class Employee : public Person {
private:
	long salary;
	Mydate dateHired;
public:
	Employee();
	virtual ~Employee() {};
	Employee(std::string namea, Mydate birthdate, std::string phoneNoo,
		std::string emaill, Mydate dateHired, long salaryy );
	void setSalary(long salaryy);
	long getSalary();
	virtual void print()=0;
	virtual void inputData()=0;
};