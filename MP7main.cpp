#include "MP7header.h"
#include "MP7Source.cpp"
#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>

using namespace std;

int main() {
	//create a, b objects fraction
	Fraction<char> a;
	Fraction<char> b;

	//input user info and operator
	std::string op = " ";

	//loop if statement
	cout << "Please enter one fracton: " << endl;
	a.getFraction();
	cout << "Please enter another fracton: " << endl;
	b.getFraction();
	cout << "Please enter operator: ";
	cin >> op;
	Fraction<char> r;
	
	if (op == "+") {
		r = a + b;
		r.reduce();
		cout << "A = ";
		a.show();
		cout << "\nB = ";
		b.show();
		cout << "\nResult = ";
		r.show();
	}
	else if (op == "-") {
		r = a - b;
		r.reduce();
		r.reduce();
		cout << "A = ";
		a.show();
		cout << "\nB = ";
		b.show();
		cout << "\nResult = ";
		r.show();
	}
	else if (op == "*") {
		r = a * b;
		r.reduce();
		r.reduce();
		cout << "A = ";
		a.show();
		cout << "\nB = ";
		b.show();
		cout << "\nResult = ";
		r.show();
	}
	else if (op == "/") {
		r = a / b;
		r.reduce();
		r.reduce();
		cout << "A = ";
		a.show();
		cout << "\nB = ";
		b.show();
		cout << "\nResult = ";
		r.show();
	}
	else if (op == "+=") {
		r = a += b;
		r.reduce();
		r.reduce();
		cout << "A = ";
		a.show();
		cout << "\nB = ";
		b.show();
		cout << "\nResult = ";
		r.show();
	}
	else if (op == "-=") {
		r = a -= b;
		r.reduce();
		r.reduce();
		cout << "A = ";
		a.show();
		cout << "\nB = ";
		b.show();
		cout << "\nResult = ";
		r.show();
	}
	else if (op == "*=") {
		r = a *= b;
		r.reduce();
		cout << "A = ";
		a.show();
		cout << "\nB = ";
		b.show();
		cout << "\nResult = ";
		r.show();
	}
	else if (op == "/=") {
		r = a /= b;
		r.reduce();
		cout << "A = ";
		a.show();
		cout << "\nB = ";
		b.show();
		cout << "\nResult = ";
		r.show();
	}
	else if (op == "<") {
		if (a < b) cout << "True" << endl;
		else cout << "False" << endl;
	}
	else if (op == ">") {
		if (a > b) cout << "True" << endl;
		else cout << "False" << endl;
	}
	else if (op == ">=") {
		if (a >= b) cout << "True" << endl;
		else cout << "False" << endl;
	}
	else if (op == "<=") {
		if (a <= b) cout << "True" << endl;
		else cout << "False" << endl;
	}
	else if (op == "==") {
		if (a == b) cout << "True" << endl;
		else cout << "False" << endl;
	}
	else if (op == "!=") {
		if (a != b) cout << "True" << endl;
		else cout << "False" << endl;
	}
	else if (op == "++") {
		a = a;
		b = b;
		r = ++a;
		r.reduce();
		cout << "A = ";
		a.show();
		cout << "\nB = ";
		b.show();
		cout << "\nResult = ";
		r.show();
	}
	else if (op == "--") {
		a = a;
		b = --a;
		r.reduce();
		cout << "A = ";
		a.show();
		cout << "\nB = ";
		b.show();
		cout << "\nResult = ";
		r.show();
	}
	else if (op == "++") {
		b.reduce();
		r = a++;
		r.reduce();
		cout << "A = ";
		a.show();
		cout << "\nB = ";
		b.show();
		cout << "\nResult = ";
		r.show();
	}
	else if (op == "--") {
		a = a;
		b = a--;
		b.reduce();
		r = a--;
		r.reduce();
		cout << "A = ";
		a.show();
		cout << "\nB = ";
		b.show();
		cout << "\nResult = ";
		r.show();
	}
	else if (op == "-") {
		b = -a;
		r = b;
		r.reduce();
		cout << "A = ";
		a.show();
		cout << "\nB = ";
		b.show();
		cout << "\nResult = ";
		r.show();
	}
	else if (op == "~") {
		b = ~a;
		r.reduce();
		cout << "A = ";
		a.show();
		cout << "\nB = ";
		b.show();
		cout << "\n";
	}
	else if (op == "q" || op == "Q") {
		cout << "End of the loop ";
	}

	else {
		cout << "Invalid Operator";
	}//end loop


	return 0;
}