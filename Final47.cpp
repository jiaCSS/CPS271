#pragma once
#include<iostream>
#include<iomanip>
using namespace std;

void print(int num)
{
    if (num > 0)
    {
        cout << num << " ";
        print(num - 1);
    }
}


int main() {

    print(4);


    return 0;
}