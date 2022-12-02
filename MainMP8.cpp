#include"FractionMP8.h"
#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<fstream>
#include<algorithm>
#include<vector>
#include<array>
#include <list>
#include<iterator>
using namespace std;

//prototype;
vector<Fraction> readVectorFile();
list<Fraction> readListFile();
vector<Fraction> megreFraction(list<Fraction> a, vector<Fraction> b);


//main begin
int main() {

	//invoke function vector and list
	vector<Fraction> fractionVector;
	fractionVector = readVectorFile();

	list<Fraction> fractionList;
	fractionList= readListFile();


	//iterator vector and list
	cout << "Vector sort list: " << endl;
	for (auto& it : fractionVector) {
		cout << it;
		cout << ", " << endl;
		
	}
	cout << endl;
	cout << "List sort list: " << endl;
	for (auto& it : fractionList) {
		cout << it;
		cout << ", " << endl;
	}
	//invoke merge vector and list
	cout << endl;
	cout << "List and vector merge together: " << endl;
	vector<Fraction> merg;	
	merg= megreFraction(fractionList, fractionVector);

	for (auto& i : merg) {
		cout << i;
		cout << ", " << endl;
		
	}
	
	
	return 0;
	
}//end main


//vector function
vector<Fraction> readVectorFile() {
	vector <Fraction> v;
	Fraction f;
	ifstream fin("FractionToVector.txt");
	while ((fin.peek() != EOF)) {
		fin >> f;
		v.push_back(f);
	}
	sort(v.begin(), v.end());
	return v;
}


//list function
list<Fraction> readListFile() {
	list <Fraction> l;
	Fraction f;
	ifstream fin("FractionToList.txt");
	while ((fin.peek() != EOF)) {
		fin >> f;
		l.push_back(f);
	}
	l.sort();
	return l;
}

//merge function
vector<Fraction> megreFraction(list<Fraction> a, vector<Fraction> b){
	vector<Fraction> r;
	merge(a.begin(), a.end(), b.begin(), b.end(), 
		insert_iterator<vector<Fraction>>(r, r.end()));
	//remove duplicates
	r.erase(unique(r.begin(), r.end()), r.end());

	//return vector
	return r;
}

