#include <iostream>

using namespace std;

int main()
{
	signed int first, second, third, fourth;
	signed int sum;

	cout << "Enter first number: ";
	cin >> first;
	cout << "Enter second number: ";
	cin >> second;
	cout << "Enter third number: ";
	cin >> third;
	cout << "Enter fourth number: ";
	cin >> fourth;

	sum = first + second + third + fourth;

	cout << "Their sum is " << sum << endl;

	return 0;
}
