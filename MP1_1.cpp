#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;


double power(double n, int p = 2) {
	return pow(n, p);
}

int main()
{
	
	double result = power(20);
	cout <<"The power value is " << result << '\n';


	getchar();
	return 0;
}

