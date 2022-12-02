#pragma once
#include<iostream>
#include<string>
#include<array>
using namespace std;

class PhoneNumber {
private:
	string areaCode;
	string exchange;
	string lineNum;
public:
	PhoneNumber();
	void setAreaCode(string areaCode);
	void setExchange(string exchange);
	void setLineNum(string lineNum);
	

	string getAreaCode();
	string getExchange();
	string getLineNum();
	
	
	bool validAreaCode(string areaCode);
	bool validExchange(string exchange);
	bool validWholePhoneNum(string phoneNum);

};