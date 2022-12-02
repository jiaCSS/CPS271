#include"2.h"
#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>

using namespace std;
int main() {
	//setup local variables, num, den, op(operator)
	int lnum = 0, lden = 0;
	int llnum = 0, llden = 0;
	char op = ' ';
	//allow user input
	cout << "Please enter one fracton: " << endl;
	cin >> lnum;
	cin.get();
	cin >> lden;
	cout << "Please enter another fracton: " << endl;
	cin >> llnum;
	cin.get();
	cin >> llden;
	cout << "Please enter operator: ";
	cin >> op;

	//creat 3 fractions, w, z, x. for exmaple: X=W+Z.
	Fraction w(lnum, lden);
	Fraction z(llnum, llden);
	Fraction x;

	//loop throw if statements.
	if (op == '+') {
		cout << "The addtion value is: " << x.add(w, z) << endl;
	}
	else if (op == '-') {
		cout << "The subtraction value is: " << x.subtract(w, z) << endl;
	}
	else if (op == '*') {
		cout << "The multiplication value is: " << x.multiply(w, z) << endl;
	}
	else if (op == '/') {
		cout << "The division value is: " << x.divide(w, z) << endl;
	}
	else if (op == 'q' || op == 'Q') {
		cout << "End of the loop ";
	}
	else {
		cout << "Invalid Operator";
	}//end loop


	return 0;
}