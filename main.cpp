#include<iostream>
#include<iomanip>
#include<array>
#include<string>
#include "Header.h"


using namespace std;


int main() {
	int choice;
	cout << "Please enter 1 for only knowing the size of an array: " << endl;
	cout << "Please enter 2 for unknowing size but knowing beginning and ending of index of an array: ";
	cin >> choice;

	if (choice == 1) {
		int size = 0;
		cout << "Enter the size of array: " << endl;
		cin >> size;
		MyArray myarray1(size);
		for (int i = 0; i < size; i++) {
			cout << "Array[" << i << "]: ";
			cin >> myarray1[i];
		}
		cout << "\nThe list of array is: " << endl;
		for (int i = 0; i < size; i++) {
			cout << "List[" << i << "]: " << myarray1[i] << endl;
		}
	}
	else if (choice == 2) {

		int beginNumber = 0;
		int endNumber = 0;
		cout << "Enter the beginning of index: " << endl;
		cin >> beginNumber;
		cin.get();
		cout << "Enter the end of index: " << endl;
		cin >> endNumber;

		MyArray myarray(beginNumber, endNumber);
		//int size = endNumber;

		for (int i = myarray.begin(); i < myarray.end(); i++) {
			cout << "Array[" << i << "]: ";
			cin >> myarray[i];
		}
		cout << "\nThe list of array is: " << endl;

		for (int i = myarray.begin(); i < myarray.end(); i++) {
			cout << "List[" << i << "]: " << myarray[i] << endl;
		}
	}
	else
		cout << "Invalid Enter" << endl;



	return 0;
}


