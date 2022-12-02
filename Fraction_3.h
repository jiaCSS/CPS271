#include <memory>
#include <numeric>
#include <string>
class Fraction {
	//two memeber num,den
private:
	int num;
	int den;
public:
	//4 constructors
	Fraction();
	Fraction(int h);
	Fraction(double deci);
	Fraction(int n, int d);

	//get data input, Num, Den
	void input(int n, int d);
	int getNum();
	int getDen();

	//operator overloading
	Fraction operator+(Fraction f);
	Fraction operator-(Fraction f);
	Fraction operator*(Fraction f);
	Fraction operator/(Fraction f);


	Fraction operator=(Fraction f);
	Fraction &operator+=(Fraction f);
	Fraction &operator-=(Fraction f);
	Fraction &operator*= (Fraction f);
	Fraction &operator/= (Fraction f);
	Fraction &operator++();
	Fraction operator++(int);
	Fraction &operator--();
	Fraction operator--(int);
	Fraction operator-();
	Fraction operator~();

	bool operator<(Fraction f);
	bool operator>(Fraction f);
	bool operator>=(Fraction f);
	bool operator<=(Fraction f);
	bool operator==(Fraction f);
	bool operator!=(Fraction f);
	//bool operator!(Fraction f);I don't know how to do "!"
	
	operator float();
	operator double();

	operator std::string()const;
	friend std::ostream& operator<<(std::ostream& o, const Fraction& r);
	friend std::istream& operator>>(std::istream& is, Fraction& r);


	//reduce function
	void reduce();
	//print function
	void show();
};
