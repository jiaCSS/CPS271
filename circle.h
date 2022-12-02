#include<iostream>
#include<string> 
class Circle :public Point {
protected:
	double r;

public:
	Circle();
	Circle(int xx, int yy, double rr);
	void setRadius(double rr);
	double getRadius();
	void printCircle();
	double getAreaFromR(); 
	double circumferenceFromR();
	//friend std::ostream&operator<<(std::ostream&output, const Circle&r);
};