#include "Mydate.h"
#include <iostream>
#include <iomanip>
#include <string> 
#include <cmath> 
#include <vector> 

using namespace std;
Mydate::Mydate() {
	int y = 1000;
	int m = 1;
	int d = 1;
}
Mydate::Mydate(int yy, int mm, int dd) {
	y = yy;
	m = mm;
	d = dd;
}
void Mydate::setY(int yy) {
	y = yy;
}
void Mydate::setM(int mm) {
	m = mm;
}
void Mydate::setD(int dd) {
	d == dd;
}
int Mydate::getY() {
	return y;
}
int Mydate::getM() {
	return m;
}
int Mydate::getD() {
	return d;
}
void Mydate::printMydate() {
	cout << d << "-" << m << "-" << y << endl;

}
void Mydate::inputMydateData() {
	cin >> d >> m >> y;
}
