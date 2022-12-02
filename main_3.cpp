#include"Fraction_3.h"
#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<conio.h>

using namespace std;
int main() {
	//Fraction f(2, 3);

	// f += 5.6;





	//create a, b objects fraction
	Fraction a, b;


	//input user info and operator
	std::string op = " ";

	//loop if statement
		cout << "Please enter one fracton: " << endl;
		cin >> a;
		cout << "Please enter another fracton: " << endl;
		cin >> b;
		cout << "Please enter operator: ";
		cin >> op;
		Fraction r;
		if (op == "+") {
			r = a + b;
			r.reduce();
			cout << "A = " << a << endl;
			cout << "B = " << b << endl;
			cout << "Result = " << r << endl;
		}
		else if (op == "-") {
			r = a - b;
			r.reduce();
			cout << "A = " << a << endl;
			cout << "B = " << b << endl;
			cout << "Result = " << r << endl;
		}
		else if (op == "*") {
			r = a * b;
			r.reduce();
			cout << "A = " << a << endl;
			cout << "B = " << b << endl;
			cout << "Result = " << r << endl;
		}
		else if (op == "/") {
			r = a / b;
			r.reduce();
			cout << "A = " << a << endl;
			cout << "B = " << b << endl;
			cout << "Result = " << r << endl;
		}
		else if (op == "+=") {
			r = a += b;
			r.reduce();
			cout << "A = " << a << endl;
			cout << "B = " << b << endl;
			cout << "Result = " << r << endl;
		}
		else if (op == "-=") {
			r = a -= b;
			r.reduce();
			cout << "A = " << a << endl;
			cout << "B = " << b << endl;
			cout << "Result = " << r << endl;
		}
		else if (op == "*=") {
			r = a *= b;
			r.reduce();
			cout << "A = " << a << endl;
			cout << "B = " << b << endl;
			cout << "Result = " << r << endl;
		}
		else if (op == "/=") {
			r = a /= b;
			r.reduce();
			cout << "A = " << a << endl;
			cout << "B = " << b << endl;
			cout << "Result = " << r << endl;
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
			b.reduce();
			cout << "A = " << a << endl;
			cout << "B = " << b << endl;
			cout << "Result = " << r << endl;
		}
		else if (op == "--") {
			a = a;
			b = --a;
			b.reduce();
			r = --a;
			r.reduce();
			cout << "A = " << a << endl;
			cout << "B = " << b << endl;
			cout << "Result = " << r << endl;
		}
		else if (op == "++") {
			a = a;
			b = b;
			b.reduce();
			r = a++;
			r.reduce();
			cout << "A = " << a << endl;
			cout << "B = " << b << endl;
			cout << "Result = " << r << endl;
		}
		else if (op == "--") {
			a = a;
			b = a--;
			b.reduce();
			r = a--;
			r.reduce();
			cout << "A = " << a << endl;
			cout << "B = " << b << endl;
			cout << "Result = " << r << endl;
		}
		else if (op == "-") {
			b = -a;
			r = b;
			cout << "A = " << a << endl;
			cout << "B = " << b << endl; 
			cout << "Result = " << r << endl;
		}
		else if (op == "~") {
			b = ~a;
			cout << "A = " << a << endl;
			cout << "B = " << b << endl;
		}
		else if (op == "q" || op == "Q") {
			cout << "End of the loop ";
		}

		else {
			cout << "Invalid Operator";
		}//end loop
	






	return 0;
}