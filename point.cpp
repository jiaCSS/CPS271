#include"point.h"
#include<iostream>
#include<iomanip>
#include<cmath>
#include<string> 
using namespace std;
Point::Point() {
	x = 0;
	y = 0;
}
Point::Point(int xx, int yy) {
	input(xx, yy);
}
void Point::input(int xx, int yy) {
	x = xx;
	y = yy;
}
void Point::setX(int xx) {
	x = xx;
}
int Point::getX() {
	return x;
}
void Point::setY(int yy) {
	y = yy;
}
int Point::getY() {
	return y;
}

void Point::printPoint() {	
	cout <<"The xy coordinate you Enter is: "<< "(" << x << "," << y << ")" << endl;
}
