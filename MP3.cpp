#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
class Fraction {
private:
	int num;
	int den;
public:
	Fraction();
	Fraction(int h);
	void input(int n, int d);
	void print();
	Fraction(double deci);
	Fraction(int n, int d);
	Fraction add(Fraction f);
	Fraction subtract(Fraction f);
	Fraction multiply(Fraction f);
	Fraction divide(Fraction f);
	Fraction add(Fraction a, Fraction b);
	Fraction subtract(Fraction a, Fraction b);
	Fraction multiply(Fraction a, Fraction b);
	Fraction divide(Fraction a, Fraction b);
	int getNum();
	int getDen();


};
Fraction::Fraction() {
	num = 0;
	den = 1;

}
void Fraction::input(int n, int d) {
	num = n;
	if (d == 0) {
		cout << "ERROR: ATTEMPTING TO DIVIDE BY ZERO" << endl;
	}
	else {
		den = d;
	}
}
Fraction::Fraction(int h) {
	input(h, 1);
}
Fraction::Fraction(double deci) {
	input(deci * 100000, 100000);
}
void Fraction::print() {

	if (den == 1) {
		cout << num << endl;
	}
	else {
		cout << "The value is: " << num << "/" << den << endl;
	}

}
Fraction::Fraction(int n, int d) {
	input(n, d);
}
Fraction Fraction::add(Fraction f) {
	int n = num * f.den + den * f.num;
	int d = den * f.den;
	return Fraction(n, d);
}
Fraction Fraction::subtract(Fraction f) {
	int n = num * f.den - den * f.num;
	int d = den * f.den;
	return Fraction(n, d);
}
Fraction Fraction::multiply(Fraction f) {
	int n = num * f.num;
	int d = den * f.den;
	return Fraction(n, d);
}
Fraction Fraction::divide(Fraction f) {
	int n = num * f.den;
	int d = den * f.num;
	return Fraction(n, d);
}
Fraction Fraction::add(Fraction a, Fraction b) {
	num = a.num*b.den + b.num*a.den;
	den = a.den*b.den;
	return Fraction(num, den);
}
Fraction Fraction::subtract(Fraction a, Fraction b) {
	num = a.num*b.den - b.num*a.den;
	den = a.den*b.den;
	return Fraction(num, den);
}
Fraction Fraction::multiply(Fraction a, Fraction b) {
	num = a.num*b.num;
	den = a.den*b.den;
	return Fraction(num, den);
}
Fraction Fraction::divide(Fraction a, Fraction b) {
	num = a.num*b.den;
	den = a.den*b.num;
	return Fraction(num, den);
}
int Fraction::getNum() {
	return num;
}
int Fraction::getDen() {
	return den;
}
Fraction getFraction();
Fraction getFraction() {
	int lnumerator, ldenominator;
	cout << "Enter two number and operator, it will give you value" << endl;
	cout << "Enter two numbers or fractions(num,num): ";
	cin >> lnumerator;
	cin.get();
	cin >> ldenominator;
	return Fraction(lnumerator, ldenominator);
}



int main() {

	Fraction a(20);
	Fraction b(40);
	Fraction c1;
	c1 = a.add(b);
	c1.print();

	Fraction c2;
	c2 = a.subtract(b);
	c2.print();
	Fraction c3;
	c3 = a.multiply(b);
	c3.print();
	Fraction c4;
	c4 = a.divide(b);
	c4.print();


	int lnum=0, lden=0;
	int llnum=0, llden=0;
	char op;
	char slash;
	cout << "Please enter one fracton: " << endl;
	cin >> lnum;
	cin.get();
	cin >> slash;
	cin.get();
	cin	>> lden;
	cout << "Please enter another fracton: " << endl;
	cin >> llnum;
	cin.get();
	cin >> slash;
	cin.get();
	cin >> llden;
	Fraction w(lnum, lden);
	Fraction z(llnum, llden);
	Fraction x;
	cout << "\nPlease enter operator: ";

	if (op == '+') {
		cout << "The addtion value is: ";
		x.add(w,z);
		x.print();
	}
	else if (op == '-') {
		cout << "The subtraction value is: ";
		x.subtract(w, z);
		x.print();
	}
	else if (op == '*') {
		cout << "The multiplication value is: ";
		x.multiply(w, z);
		x.print();
	}
	else if (op == '/') {
		cout << "The division value is: ";
		x.divide(w, z);
		x.print();
	}




	Fraction h(2, 4);
	Fraction g(3, 4);
	Fraction r1 = r1.add(h, g);
	r1.print();
	Fraction r2 = r2.subtract(h, g);
	r2.print();
	Fraction r3 = r3.multiply(h, g);
	r3.print();
	Fraction r4 = r4.divide(h, g);
	r4.print();



	return 0;
}