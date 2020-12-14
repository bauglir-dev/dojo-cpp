#include <iostream>
#include <string>

int main()
{
	std::string first_name;
	std::string last_name;

	std::cout << "Enter your first name: ";
	std::cin >> first_name;

	std::cout << "Enter your second name: ";
	std::cin >> last_name;

	std::cout << "Your full name is: " << last_name 
		<< ", " << first_name << std::endl;
	return 0;
}
