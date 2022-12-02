#pragma once
#include<iostream>
#include<iomanip>
using namespace std;


template <class T>
class strange {
private:
	T   a;
	T   b;

public:
	strange();
	strange(T a, T b);

	void operator == (const strange& s);	//part a
};


template <class T>
strange<T>::strange() {
	a = 0;
	b = 0;
}


template <class T>//part c
void strange<T>::operator == (const strange<T>& s) {
	if (a == s.a && b == s.b)
		cout << "there are the same" << endl;
	else
		cout << "there are not the same" << endl;
}

template <class T>
strange<T>::strange(T a, T b) {
	this->a = a;
	this->b = b;
}


int main() {

	strange<int> sObj(3, 5);// part b

	strange<int> sObj1(2, 5);

	sObj == sObj1;


	return 0;

}

