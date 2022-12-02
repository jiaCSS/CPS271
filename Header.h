#pragma once
#include<iostream>
#include<array>
#include<string>
class MyArray {
private:
	int* arr;
	int size;
	int offset;
	
	// beginning = offset
	// end = size + offset

public:
	MyArray(int size);
	MyArray(int beginNumber, int endNumber);

	~MyArray() { delete[]arr; }

	int begin();
	int end();

	int& operator[](int index);
	int getSize();
	
};
