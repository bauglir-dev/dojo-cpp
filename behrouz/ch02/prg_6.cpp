#include <iostream>

using namespace std;

int main()
{
	double side_length, perimeter, area;

	cout << "Enter the side length of the square: ";
	cin >> side_length;
	perimeter = 4 * side_length;
	area = side_length * side_length;
	cout << "Perimeter: " << perimeter << "; Area: " << area << "."  << endl;

	return 0;
}
