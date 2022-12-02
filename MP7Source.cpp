#include "MP7header.h"
#include <limits>
#include <sstream>
#include <string>
#include<iostream>
using namespace std;
//setup 4 constuctors

template <typename T>
Fraction<T>::Fraction() {
	num = 0;
	den = 1;
}
template <typename T>
Fraction<T>::Fraction(T h) {
	input(h, 1);
}
template <typename T>
Fraction<T>::Fraction(double deci) {
	input(deci * 100000, 100000);
}

template <typename T>
Fraction<T>::Fraction(T n, T d) {
	input(n, d);
}

//get data input, Num, Den

template <typename T>
void Fraction<T>::input(T n, T d) {
	num = n;
	if (d == 0) {
		cout << "ERROR: ATTEMPTING TO DIVIDE BY ZERO\nEnter q or Q to end loop" << endl;
	}
	else {
		den = d;
	}
}
template <typename T>
T Fraction<T>::getNum() {
	return  num;
}
template <typename T>
T Fraction<T>::getDen() {
	return  den;
}

//operator overloading
 template <typename T>
Fraction<T> Fraction<T>::operator+(Fraction<T> f) {
	T n = num * f.den + den * f.num;
	T d = den * f.den;
	return Fraction( n, d);
}
template <typename T>
Fraction<T> Fraction<T>::operator-(Fraction<T> f) {
	T n = num * f.den - den * f.num;
	T d = den * f.den;
	return Fraction(n, d);
}
template <typename T>
Fraction<T> Fraction<T>::operator*(Fraction<T> f) {
	T n = num * f.num;
	T d = den * f.den;
	return Fraction(n, d);
}
template <typename T>
Fraction<T> Fraction<T>::operator/(Fraction<T> f) {
	T n = num * f.den;
	T d = den * f.num;
	return Fraction(n, d);
}
template <typename T>
Fraction<T> Fraction<T>::operator=(Fraction<T> f) {
	num = f.num;
	den = f.den;
	return *this;
}

template <typename T>
Fraction<T> Fraction<T>::operator+=(Fraction<T> f) {
	*this = *this + f;
	return *this;
}
template <typename T>
Fraction<T> Fraction<T>::operator-=(Fraction<T> f) {
	*this = *this - f;
	return *this;
}
template <typename T>
Fraction<T> Fraction<T>::operator*=(Fraction<T> f) {
	*this = *this * f;
	return *this;
}
template <typename T>
Fraction<T> Fraction<T>::operator/=(Fraction<T> f) {
	*this = *this / f;
	return *this;
}
template <typename T>
Fraction<T> Fraction<T>::operator++() {
	this->num += this->den;
	return *this;
}
template <typename T>
Fraction<T> Fraction<T>::operator++(int) {
	Fraction copy{ *this };
	this->num += this->den;
	return copy;
}
template <typename T>
Fraction<T> Fraction<T>::operator--() {
	this->num -= this->den;
	return *this;
}
template <typename T>
Fraction<T> Fraction<T>::operator--(int) {
	Fraction copy{ *this };
	this->num -= this->den;
	return copy;
}
template <typename T>
Fraction<T> Fraction<T>::operator-() {
	return Fraction(-num, den);
}
template <typename T>
Fraction<T> Fraction<T>::operator~() {
	return Fraction(den, num);
}

//True False operator overloading
template <typename T>
bool Fraction<T>::operator<(Fraction f) {
	return (float)num / den < (float)f.num / f.den;
}
template <typename T>
bool Fraction<T>::operator>(Fraction f) {
	return (float)num / den > (float)f.num / f.den;
}
template <typename T>
bool Fraction<T>::operator<=(Fraction<T> f) {
	return (float)num / den <= (float)f.num / f.den;
}
template <typename T>
bool Fraction<T>::operator>=(Fraction<T> f) {
	return (float)num / den >= (float)f.num / f.den;
}
template <typename T>
bool Fraction<T>::operator==(Fraction<T> f) {
	return (float)num / den == (float)f.num / f.den;
}
template <typename T>
bool Fraction<T>::operator!=(Fraction<T> f) {
	return (float)num / den != (float)f.num / f.den;

}
//input, output, string operator overloading
template <typename T>
Fraction<T>::operator std::string()const {
	if (den == 1) return std::to_string(num);
	else return std::to_string(num) + "/" + std::to_string(den);
}
//template <typename T>
//std::ostream& operator<<(std::ostream& o, const Fraction<T>& r) {
//	o << (std::string)r;
//	return o;
//}
//template <typename T>
//std::istream& operator>>(std::istream& is, Fraction<T>& r) {
//	is >> r.num;
//	is.get();
//	is >> r.den;
//	return is;
//}

//double and float casting
template <typename T>
Fraction<T>::operator float() {
	return (float)num / den;
}
template <typename T>
Fraction<T>::operator double() {
	return (double)num / den;
}

//reduce function
template <typename T>
void Fraction<T>::reduce() {
	T m = min(abs(num), abs(den));
	for (int i = 2; i <=  m; i++) {
		if (num % i == 0 && den % i == 0) {
			 num =  num /  i;
			 den =  den/  i;
			 m /=  i;
		}
	}
}

//print function
template <typename T>
void Fraction<T>::show() {
	std::cout << (long long)num << "/" << (long long)den << std::endl;
}
template <typename T>
void Fraction<T>::getFraction() {
	long long n, d;
	cin >> n;
	cin.get();
	cin >> d;
	num = n;
	den = d;
	if (den == 0) {
		cout << "ERROR: ATTEMPTING TO DIVIDE BY ZERO\nEnter q or Q to end loop" << endl;
	}
}