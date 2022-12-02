#include"point.h"
#include"circle.h"
#include<iostream>
#include<iomanip>
#include<cmath>
#include<string> 
using namespace std;

const double PI = 3.1415;

Circle::Circle() {
	Point::Point(x, y);
	r = 0;
}
Circle::Circle(int xx, int yy, double rr) : Point(xx, yy) {
	r = rr;
}
void Circle::setRadius(double rr) {
	r = rr;
}
double Circle::getRadius() {
	return r;
}

void Circle::printCircle(){
	Point::printPoint();
	cout << "\nThe circumference of circle is: " << circumferenceFromR() << endl;
	cout << "\nThe area of circle is: " << getAreaFromR() << endl;
}
double Circle::getAreaFromR() {
	return PI *r*r;
}
double Circle::circumferenceFromR() {
	return 2 * PI *r;
}
