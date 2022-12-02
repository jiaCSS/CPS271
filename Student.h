#pragma once
#include<iostream>
#include<string>
class Student : public Person {
public:
	enum GradeStatus {
		Freshman, Sophomore,
		Junior, Senior
	};
private:
	GradeStatus gradesStatus = GradeStatus::Freshman;
	double gpa;
	
public:
	Student();
	Student(GradeStatus grades, double gpaa, std::string namea,
		Mydate birthdate, std::string phoneNoo,
		std::string emaill);

	void setGPA(double gpaa);
	double getGPA();
	void print();
	void inputData();
	
};
