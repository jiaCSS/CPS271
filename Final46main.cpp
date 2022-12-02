#pragma once
#include<iostream>
#include<iomanip>
#include<fstream>
#include<cstdlib>>
#include<cstring>

using namespace std;

int main() {
	char data[100];
	ofstream fileout("hardware.txt", ios::out | ios::binary);
	for (char ltr = 'A'; ltr <= 'Z'; ltr++)
	{
		char ch = static_cast<char>(rand()%(26) + 65);
		fileout.write((char*)(&ch), sizeof(ch));
	}

	fileout.close();

	//open file
	ifstream filein;
	filein.open("hardware.txt");
	filein>>data;
	cout << data <<" "<< endl;

	//reverse first 10
	int n = 10;
	for (int i = 0; i < 5; i++) {
		swap(data[i], data[n - i - 1]);		
	}
	ofstream fileout2("hardware_swap.txt", ios::out | ios::binary);
	fileout2 << data;
	cout << data;
	fileout2.close();


	return 0;
}



