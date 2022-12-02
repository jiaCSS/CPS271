#pragma once
#include<iostream>
#include<iterator>
#include<iomanip>
#include<vector>
#include<algorithm>

using namespace std;

int main() {


    int grades[] = { 12, 34, 56, 34, 34, 78, 38, 43, 12, 25 };
    vector<int> vGr(grades, grades + 10);
    //vector<int> ::iterator location; this line doesn't work, but I changed auto location
    int quiz[2] = { 43, 56 };
    ostream_iterator<int> scr(cout, "\t");


    copy(vGr.begin(), vGr.end(), scr);
    cout << endl;
    copy(quiz, quiz + 2, scr);
    sort(vGr.begin(), vGr.end());
    copy(vGr.begin(), vGr.end(), scr);
    cout << endl;

    auto location = find(vGr.begin(), vGr.end(), 34);//I changed auto loction, it works.
    int x =  location - vGr.begin();
    cout << x << endl;


	return 0;
}