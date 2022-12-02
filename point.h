#include<iostream>
#include<string> 
class Point {
protected:
	int x;
	int y;
public:
	Point();
	Point(int xx, int yy);
	void input(int xx, int yy);
	void setX(int xx);
	int getX();
	void setY(int yy);
	int getY();
	void printPoint();



};
