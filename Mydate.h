#pragma once
#include<iostream>
#include<string> 
#include<vector> 
class Mydate {
private:
	int y;
	int m;
	int d;
public:
	Mydate();
	Mydate(int dd, int mm, int yy);
	void setY(int yy);
	void setM(int mm);
	void setD(int dd);
	int getY();
	int getM();
	int getD();
	void printMydate();
	void inputMydateData();
	
};