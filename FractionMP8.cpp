#include "FractionMP8.h"
#include <limits>
#include <sstream>
#include <string>
#include<iostream>
#include<fstream>
using namespace std;
//setup 4 constuctors
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

//get data input, Num, Den
void Fraction::input(int n, int d) {
	num = n;
	if (d == 0) {
		cout << "ERROR: ATTEMPTING TO DIVIDE BY ZERO\nEnter q or Q to end loop" << endl;
	}
	else {
		den = d;
	}
}

int Fraction::getNum() {
	return num;
}

int Fraction::getDen() {
	return den;
}

//operator overloading
Fraction Fraction::operator+(Fraction f) {
	int n = num * f.den + den * f.num;
	int d = den * f.den;
	return Fraction(n, d);
}
Fraction Fraction::operator-(Fraction f) {
	int n = num * f.den - den * f.num;
	int d = den * f.den;
	return Fraction(n, d);
}
Fraction Fraction::operator*(Fraction f) {
	int n = num * f.num;
	int d = den * f.den;
	return Fraction(n, d);
}
Fraction Fraction::operator/(Fraction f) {
	int n = num * f.den;
	int d = den * f.num;
	return Fraction(n, d);
}
Fraction Fraction::operator=(Fraction f) {
	num = f.num;
	den = f.den;
	return *this;
}
Fraction& Fraction::operator+=(Fraction f) {
	*this = *this + f;
	return *this;
}
Fraction& Fraction::operator-=(Fraction f) {
	*this = *this - f;
	return *this;
}
Fraction& Fraction::operator*=(Fraction f) {
	*this = *this * f;
	return *this;
}
Fraction& Fraction::operator/=(Fraction f) {
	*this = *this / f;
	return *this;
}
Fraction& Fraction::operator++() {
	this->num += this->den;
	return *this;
}
Fraction Fraction::operator++(int) {
	Fraction copy{ *this };
	this->num += this->den;
	return copy;
}
Fraction& Fraction::operator--() {
	this->num -= this->den;
	return *this;
}
Fraction Fraction::operator--(int) {
	Fraction copy{ *this };
	this->num -= this->den;
	return copy;
}
Fraction Fraction::operator-() {
	return Fraction(-num, den);
}
Fraction Fraction::operator~() {
	return Fraction(den, num);
}

//True False operator overloading
bool Fraction::operator<(Fraction f) {
	return (float)num / den < (float)f.num / f.den;
}
bool Fraction::operator>(Fraction f) {
	return (float)num / den > (float)f.num / f.den;
}
bool Fraction::operator<=(Fraction f) {
	return (float)num / den <= (float)f.num / f.den;
}
bool Fraction::operator>=(Fraction f) {
	return (float)num / den >= (float)f.num / f.den;
}
bool Fraction::operator==(Fraction f) {
	return (float)num / den == (float)f.num / f.den;
}
bool Fraction::operator!=(Fraction f) {
	return (float)num / den != (float)f.num / f.den;

}
//input, output, string operator overloading
Fraction::operator std::string()const {
	if (den == 1) return std::to_string(num);
	else return std::to_string(num) + "/" + std::to_string(den);
}

std::ostream& operator<<(std::ostream& o, const Fraction& r) {
	o << (std::string)r;
	return o;
}
std::istream& operator>>(std::istream& is, Fraction& r) {
	is >> r.num;
	is.get();
	is >> r.den;
	r.reduce();
	return is;
}

//double and float casting
Fraction::operator float() {
	return (float)num / den;
}
Fraction::operator double() {
	return (double)num / den;
}

//reduce function
void Fraction::reduce() {
	int m = min(abs(num), abs(den));
	for(int i = 2; i <= m; i++) {
		while(num % i == 0 && den % i == 0) {
			num /= i;
			den /= i;
			m /= i;
		}
	}
}

//print function
void Fraction::show() {
	std::cout << num << "/" << den << std::endl;
}

