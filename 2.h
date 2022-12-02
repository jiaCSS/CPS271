#include<iostream>
#include<string>
#include<exception>

class Fraction {
private:
	int num;
	int den;

public://constructors
	Fraction();
	Fraction(int h);
	Fraction(double deci);
	Fraction(int n, int d);

	//getNum, Den, input;
	int getNum();
	int getDen();
	void input(int n, int d);

	//functions +-*, c=a.add(b);
	Fraction add(Fraction f);
	Fraction subtract(Fraction f);
	Fraction multiply(Fraction f);
	Fraction divide(Fraction f);

	//functions +-*, c=a+b;
	Fraction add(Fraction a, Fraction b);
	Fraction subtract(Fraction a, Fraction b);
	Fraction multiply(Fraction a, Fraction b);
	Fraction divide(Fraction a, Fraction b);

	//print function
	void print();

	//get greatest common divisor function. I learned this from website.
	int gcd(int n, int d);

	//operator overloading string, input, output(string, is, os)
	operator std::string()const;
	friend std::ostream& operator<<(std::ostream&o, const Fraction&r);
	friend std::istream& operator>>(std::istream&input, const Fraction&r);
};
