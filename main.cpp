#include"point.h"
#include"circle.h"
#include"cylinder.h"
#include<iostream>
#include<iomanip>
#include<cmath>
#include<string> 
using namespace std;
int main() {
	int lx = 0;
	int ly = 0;
	int lr = 0;
	int lh = 0;
	cout << "Enter x coordinate: "<<endl;
	cin >> lx;
	cout << "Enter y coordinate: "<< endl;
	cin >> ly;
	cout << "Enter radius r: " << endl;
	cin >> lr;
	cout << "Enter high: " << endl;
	cin >> lh;

	Point a(lx, ly);
	Circle c1(lx, ly, lr);
	Cylinder d(lx, ly, lr, lh);
	d.printCylinder();
	

	
	return 0;
}