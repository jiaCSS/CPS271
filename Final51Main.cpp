#include<iostream>
#include<string>
#include<array>
#include<iomanip>
#include"Final51.h"
#include<fstream>
using namespace std;


int main() {
	PhoneNumber phnoenumber;
	string number;
	//fstream fin("Final51_input.txt.txt");
	cout << "Enter a phone number: ";
	cin >> number;
	
	while (getline(cin, number, '\n')) {
		if (phnoenumber.validWholePhoneNum(number) == false) {
			
			cout << "Enter another valid phoneNumber: ";
			continue;
		}
		if (phnoenumber.validAreaCode(number) == false) {
			
			cout << "Enter another valid phoneNumber: ";
			continue;
		}

		if (phnoenumber.validExchange(number) == false) {
			
			cout << "Enter another valid phoneNumber: ";
			continue;
		}

		break;
	}
	

	string tokenareacode = "";
	int postionareacode = number.find(" ");

	tokenareacode = number.substr(0, postionareacode);
	phnoenumber.setAreaCode(tokenareacode);


	string tokenexchange;
	int postionexchange = number.find("-");

	auto start = postionareacode;
	auto end = postionexchange-5;
	tokenexchange= number.substr(start, end);
	phnoenumber.setExchange(tokenexchange);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         

	string tokenlinenum = "";

	tokenlinenum = number.substr(postionexchange+1, 14);
	phnoenumber.setLineNum(tokenlinenum);
	cout << phnoenumber.getAreaCode() << phnoenumber.getExchange()<<"-" << phnoenumber.getLineNum() << endl;


	
	








	return 0;
}