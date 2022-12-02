#pragma once
#include "Header.h"
#include<iostream>
#include<array>
#include<string>
#include<iomanip>

using namespace std;


MyArray::MyArray(int size) {
	this->size = size;
	offset = 0;
	arr = new int[size];
}
MyArray::MyArray(int beginNumber, int endNumber) {
	offset = beginNumber;
	size = endNumber- beginNumber;
	arr = new int[size];
}
int& MyArray::operator[](int index) {
	if (index > size+offset||index<offset) {
		cout << "Invalid Enter" << endl;
	}
	return arr[index-offset];
}

int MyArray::begin() {
	return offset;

}
int MyArray::end() {
	return offset + size;
}

int MyArray::getSize() {
	return size;
}

