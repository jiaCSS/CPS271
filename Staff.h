#pragma once
#include "Employee.h"
#include<iostream>
#include<string> 
class Staff : public Employee {
private:
	std::string tittle;
public:
	Staff();

	Staff(std::string namea, Mydate birthdate, std::string phoneNoo,
		std::string emaill, Mydate dateHired, long salaryy, std::string tittlee);
	
	void setTittle(std::string tittlee);
	std::string getTittle();
	void print();
	void inputData();
};