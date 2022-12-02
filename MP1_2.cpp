#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//set up convertor function
long hms_to_secs(int hours, int minutes, int seconds) {
	long result = 0;
	result += hours * 3600;
	result += minutes * 60;
	result += seconds;
	return result;
}


int main() {
	cout <<"\n" << "End loop when hours is negative\n";

	//get hours minutes seconds from users
	while (true) {
		int hours = 0;
		int minutes = 0;
		int seconds = 0;

		cout << "Enter the time (00:00:00): ";
		cin >> hours;
		cin.get();
		cin >> minutes;
		cin.get();
		cin >> seconds;

		//if statement to break if user enters negative number
		if (hours < 0) break;

		// call convertor founction
		long result = hms_to_secs(hours, minutes, seconds);
		cout << "Total Seconds: " << result << '\n';
	}


	getchar();
	return 0;
}