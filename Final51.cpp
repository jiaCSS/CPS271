#include<iostream>
#include<string>
#include<array>
#include<iomanip>
#include"Final51.h"
#include<fstream>
using namespace std;
PhoneNumber::PhoneNumber() {
	 areaCode="";
	 exchange="";
	 lineNum="";
}
void PhoneNumber::setAreaCode(string areaCode) {
	this->areaCode = areaCode;
}
void PhoneNumber::setExchange(string exchange) {
	this->exchange = exchange;
}
void PhoneNumber::setLineNum(string lineNum) {
	this->lineNum = lineNum;
}

string PhoneNumber::getAreaCode() {
	return areaCode;
}
string PhoneNumber::getExchange() {
	return exchange;
}
string PhoneNumber::getLineNum() {
	return lineNum;
}


bool PhoneNumber::validAreaCode(string number) {

	if (number[0]!= '(') {
		cout << "Missing '(' at the beginning of areaCode, so this is invalid areaCode" <<"\n\n";
		return false;
	}
	if (number[1] == '0')
	{
		cout << "Area code begins with 0 or 1 , so this is invalid areaCode\n\n";
		return false;
	}
	if (number[1] == '1')
	{
		cout << "Area code begins with0 or 1, , so this is invalid areaCode\n\n";
		return false;
	}
	if (number.at(2) != 48)
	{
		if (number.at(2) != 49)
		{
			cout << "Middle digit of area code is not 0 or 1, so this is invalid areaCode\n\n";
			return false;
		}
	}
	if (number.at(2) != 49)
	{
		if (number.at(2) != 48)
		{
			cout << "Middle digit of area code is not 0 or 1, so this is invalid areaCode\n\n";
			return false;
		}
	}
	if (number[4] != ')') {
		cout << "Missing')' at the end of areaCode\n\n";
		return false;
	}
	if (number[5] != ' ') {
		cout << "Missing' '(space) after ')'  areaCode\n\n";
		return false;
	}
	 
	
	this->areaCode = number;
	cout << "areaCode is correct" << "\n";
	return true;
}

bool PhoneNumber::validExchange(string number) {
	
	char ch3 = '-';
	if (number[6] == '0' || number[6] == '1') {
		cout << "The exchange do not begin with '0'or'1', so it is invalid exchange\n\n";
		return false;
	}
	if (number[9] != '-') {
		cout << "Missing '-' at end of exchange\n\n";
		return false;
	}		
	this->exchange = number;
	cout << "exchange is correct" <<exchange<< endl;
	return true;
}

bool PhoneNumber::validWholePhoneNum(string number) {
	if (number.size() != 14) {
		cout << "Size of phone number is not 14\n\n";
		return false;
	}
	else
		return true;

}


