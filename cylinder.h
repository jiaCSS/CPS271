#include<iostream>
#include<string> 
class Cylinder :public Circle{
protected:
	double h;
public:
	Cylinder();
	Cylinder(int xx, int yy, double rr, double hh);
	void setH(double hh);
	double getH();
	double getCylinderVolume();
	double getCylinderSurfaceArea();
	void printCylinder();

};