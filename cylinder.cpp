#include"point.h"
#include"circle.h"
#include"cylinder.h"
#include<iostream>
#include<iomanip>
#include<cmath>
#include<string> 
using namespace std;
Cylinder::Cylinder() {
	Circle::Circle();
	h = 0;
}
Cylinder::Cylinder(int xx, int yy, double rr, double hh) 
	: Circle(xx, yy, rr) {
	h = hh;
}
void Cylinder::setH(double hh) {
	h = hh;
}
double Cylinder::getH() {
	return h;
}
double Cylinder::getCylinderVolume() {
	Circle::getAreaFromR();
	return (getAreaFromR())*h;
}
double Cylinder::getCylinderSurfaceArea() {
	Circle::getAreaFromR();
	Circle::circumferenceFromR();
	return (2*getAreaFromR()) + (circumferenceFromR())*h;
}
void Cylinder::printCylinder() {
	Circle::printCircle();
	cout << "\nThe volume of cylinder is: " <<getCylinderVolume()<< endl;
	cout << "\nThe surface area of cylinder is: " <<getCylinderSurfaceArea()<< endl;
}