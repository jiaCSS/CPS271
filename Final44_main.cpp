#pragma once
#include<iostream>
using namespace std;
void printPattern(int row) {

	int i;
	static int starts = -1;
	if (row < 0) return;//base
	
	starts = starts + 1;
	for (i = 0; i < row; i++)//print out space before *
		cout << " ";
	for (i = 0; i < starts; i++)
		cout << "**";//print out **
	cout << endl;
	printPattern(row-1);//repeat row-1 times


	//decreasing * printing 
	for (i = 0; i < row; i++)
		cout << " ";
	for (i = 0; i < starts; i++)
		cout << "**";
	cout << endl;
	starts = starts - 1;//start become 0
}

int main() {
	//input data
	int size;
	cout << "Enter the size of pattern: " << endl;
	cin >> size;
	printPattern(size);

	return 0;


}



