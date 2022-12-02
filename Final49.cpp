#pragma once
#include<iostream>
#include<iomanip>
using namespace std;

template <typename T>
void swapFunction(T a, T b) {

	cout << "before the swap two number: ";
	cout << a <<"  "<< b << endl;

	 swap(a, b);

	 cout << "after the swap two number: ";
	 cout << a << "  " << b << endl;
	
}

int main() {

	int a = 40;
	int b = 50;
	swapFunction(40, 50);

	cout << "\n";
	string c = "hello";
	string d = "good morning";
	swapFunction("hello","good morning");
	return 0;
}