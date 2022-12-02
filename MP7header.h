#pragma once
#include <iostream>

template <typename T>
class Fraction {
	//two memeber num,den
private:
	T num;
	T den;
public:
	//4 constructors
	Fraction();
	Fraction(T h);
	Fraction(double deci);
	Fraction(T n,T d);

	//get data input, Num, Den
	void input(T n, T d);
	T getNum();
	T getDen();

	//operator overloading
	Fraction<T> operator+(Fraction<T> f);
	Fraction<T> operator-(Fraction<T> f);
	Fraction<T> operator*(Fraction<T> f);
	Fraction<T> operator/(Fraction<T> f);


	Fraction<T> operator=(Fraction<T> f);
	Fraction<T> operator+=(Fraction<T> f);
	Fraction<T> operator-=(Fraction<T> f);
	Fraction<T> operator*= (Fraction<T> f);
	Fraction<T> operator/= (Fraction<T> f);
	Fraction<T> operator++();
	Fraction<T> operator++(int);
	Fraction<T> operator--();
	Fraction<T> operator--(int);
	Fraction<T> operator-();
	Fraction<T> operator~();

	bool operator<(Fraction f);
	bool operator>(Fraction f);
	bool operator>=(Fraction f);
	bool operator<=(Fraction f);
	bool operator==(Fraction f);
	bool operator!=(Fraction f);
	//bool operator!(Fraction f);I don't know how to do "!"

	operator float();
	operator double();

	operator std::string() const;
	//friend std::ostream& operator<<(std::ostream& o, const Fraction<T>& r);
	//friend std::istream& operator>>(std::istream& is, Fraction<T>& r);


	//reduce function
	void reduce();
	
	//print function
	void show();
	void getFraction();

};
