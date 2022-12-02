#pragma once
#include<iostream>
#include<string> 
#include "Mydate.h"

class Person {
private:
	std::string name;
	Mydate birthdate;
	std::string phoneNo;
	std::string email;
public:
	Person();	
	Person(std::string namea, Mydate birthdate, std::string phoneNoo, 
		std::string emaill);
	virtual ~Person() {};
	void setName(std::string namea);
	void setPhoneNo(std::string phoneNoo);
	void setEmail(std::string emaill);
	std::string getName() ;
	std::string getPhoneNo() ;
	std::string getEmail() ;
	virtual void print()=0;
	virtual void inputData()=0;
	
	
};
