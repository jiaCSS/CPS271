#pragma once
#include<iostream>
#include<string>
using namespace std;

class myString {
private:
	string str;

public:
	myString();
	myString(string str);
	string getStr();
	//myString& operator+= (const myString& s);
	void operator+=(myString mystr);
	void show();
};

myString::myString() {
	str = "";
}
myString::myString(string str) {
	this->str = str;
}
//myString& myString::operator+= (const myString& s) {
//	str = str + s.str;
//	return myString ;
//}
void myString::operator+=(myString mystr) {
	str = str + "  " + mystr.str;
}
string myString::getStr() {

	return str;
}

void myString::show() {

	cout << str << endl;

}
int main() {

	myString s1("hello");
	myString s2("there");
	cout << "s1 string is : " << s1.getStr() << endl;
	cout << "s2 string is : " << s2.getStr() << endl;


	s1 += s2;
	cout << "concatenation string is : " ;
	s1.show();

	return 0;
}