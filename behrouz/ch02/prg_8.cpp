#include <iostream>

using namespace std;

int main()
{
	const float TAX_RATE = 0.09;
	double sales_amount, tax_amount, total_amount;

	cout << "Enter the sale amount: $";
	cin >> sales_amount;
	
	tax_amount = sales_amount * TAX_RATE;
	total_amount = sales_amount + tax_amount;

	cout << "Sale amount: $" << sales_amount << endl;
	cout << "Tax amount: $" << tax_amount << endl;
	cout << "Total amount due: $" << total_amount << endl;
	
	return 0;
}
