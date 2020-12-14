#include <iostream>
#include <string>

using namespace std;

int main()
{
	string street_number, street_name, city_name, state_name, zip_code;
	string output_format;

	cout << "Enter street number: ";
	cin >> street_number;

	cout << "Enter street name: ";
	cin >> street_name;
	
	cout << "Enter city name: ";
	cin >> city_name;
	
	cout << "Enter state name: ";
	cin >> state_name;

	cout << "Enter zip code: ";
	cin >> zip_code;

	output_format = street_number + ", " + street_name + " " + city_name + ", " +
		state_name + " " + zip_code;

	cout << output_format << endl;
	return 0;
}
