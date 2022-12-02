#include"2.h"
#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;
//constructors
Fraction::Fraction() {
	num = 0;
	den = 1;
}

Fraction::Fraction(int h) {
	input(h, 1);
}

Fraction::Fraction(double deci) {
	input(deci * 100000, 100000);
}

Fraction::Fraction(int n, int d) {
	input(n, d);
}

//getNum, Den, input;
int Fraction::getNum() {
	return num;
}

int Fraction::getDen() {
	return den;
}

void Fraction::input(int n, int d) {
	num = n;
	if (d == 0) {
		cout << "ERROR: ATTEMPTING TO DIVIDE BY ZERO\nEnter q or Q to end loop" << endl;
	}
	else {
		den = d;
	}
}

//functions +-*, c=a.add(b);
Fraction Fraction::add(Fraction f) {
	int n = num * f.den + den * f.num;
	int d = den * f.den;
	return Fraction(n/gcd(n,d), d/gcd(n, d));
}

Fraction Fraction::subtract(Fraction f) {
	int n = num * f.den - den * f.num;
	int d = den * f.den;
	return Fraction(n/gcd(n, d), d / gcd(n, d));
}


Fraction Fraction::multiply(Fraction f) {
	int n = num * f.num;
	int d = den * f.den;
	return Fraction(n / gcd(n, d), d / gcd(n, d));
}


Fraction Fraction::divide(Fraction f) {
	int n = num * f.den;
	int d = den * f.num;
	return Fraction(n / gcd(n, d), d / gcd(n, d));
}

//functions +-*, c=a+b;
Fraction Fraction::add(Fraction a, Fraction b) {
	num = a.num*b.den + b.num*a.den;
	den = a.den*b.den;
	return Fraction(num / gcd(num, den), den / gcd(num, den));
}


Fraction Fraction::subtract(Fraction a, Fraction b) {
	num = a.num*b.den - b.num*a.den;
	den = a.den*b.den;
	if (num > 0) {
		return Fraction(num / gcd(num, den), den / gcd(num, den));
	}else return Fraction((-num) / gcd(num, den), den / (-gcd(num, den)));
	
}


Fraction Fraction::multiply(Fraction a, Fraction b) {
	int _gcd = gcd(num, den);
	num = (a.num*b.num)/_gcd;
	den =(a.den*b.den)/_gcd;
	return Fraction(num, den);
}


Fraction Fraction::divide(Fraction a, Fraction b) {
	num = a.num*b.den;
	den = a.den*b.num;
	return Fraction(num / gcd(num, den), den / gcd(num, den));
}



//print function
void Fraction::print() {

	if (den == 1) {
		cout << num << endl;
	}
	else {
		cout << num << "/" << den << endl;
	}

}

//get greatest common divisor function. I learned this from website.
int Fraction::gcd(int n, int d) {
	int remainder;
	while (d != 0) {
		remainder = n % d;
		n = d;
		d = remainder;
	}
	return n;
}



//operator overloading string, input, output(string, is, os)
/*Fraction::operator std::string()const {
	if (den == 1) return std::to_string(num);
	else return std::to_string(num) + "/" + std::to_string(den);
}*/


/*std::ostream& operator<<(std::ostream& o, const Fraction& r) {
	if (r.den == 1) o << r.num << endl;
	else o << r.num << "/" << r.den << endl;
	return o;
}
std::istream &operator>>(std::istream& input, const Fraction&r) {
	input >> r.num;
	input.get();
	input >> r.den;
	return input;
}*/







