#include <iostream>

using namespace std;

int main()
{
	const unsigned short int SECONDS_PER_MINUTE = 60;
	const unsigned short int MINUTES_PER_HOUR = 60;
	int seconds_per_hour = SECONDS_PER_MINUTE * MINUTES_PER_HOUR;

	int hours, minutes, seconds;
	int total_seconds;

	cout << "Enter the hours: ";
	cin >> hours;
	cout << "Enter the minutes: ";
	cin >> minutes;
	cout << "Enter the seconds; ";
	cin >> seconds;

	total_seconds = hours * seconds_per_hour + minutes * SECONDS_PER_MINUTE
		+ seconds;

	cout << "The total number of seconds is: " << total_seconds << endl;

	return 0;
}

