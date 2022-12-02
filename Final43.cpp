#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
bool palindrome(const vector<T>& vect);
int main()
{
	int num, size;
	cout << "enter the number of size : ";
	cin >> size;
	vector<int> values;
	cout << "Enter  numbers by putting space between two nubmers(1 2) : ";

	while (size)
	{
		cin >> num;
		values.push_back(num);
		size--;
	}
	for (int i = 0; i < values.size(); i++)
		cout << values[i] << ' ';
	if (palindrome(values))
		cout << " \nis a palindrome.";
	else
		cout << "\nis not a palindrome.";



	return 0;
}


template <typename T>
bool palindrome(const vector<T>& vect)
{
	return equal(vect.begin(), vect.begin() + vect.size() / 2, vect.rbegin()); 
	
}