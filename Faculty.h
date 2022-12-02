#pragma once
#include "Mydate.h"
#include "Employee.h"
#include "Person.h"
#include <iostream>
#include <string>
#include <vector>

class Faculty : public Employee {
private:
	int officeRoom;
	bool tenure;
	std::vector<Mydate> officeHours;
public:
	Faculty();
	~Faculty() {};

	Faculty(int officeRoomm, bool tenuree, Mydate officeHours, std::string namea, 
		Mydate birthdate, std::string phoneNoo, std::string emaill,
		Mydate dateHired, long salaryy);

	void setOfficeRoom(int officeRoomm);
	int getofficeRoom();
	void print();
	void inputData();
};
