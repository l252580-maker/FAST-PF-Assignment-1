#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int code, qty, crncy, total_price;
	float sales_tax, meal_price;

	// Menu display
	cout << "Code" << setw(10) << "Meal" << setw(30) << "Price per kg in PKR" << endl;
	cout << "1" << setw(20) << "Chicken Handi" << setw(10) << "1800" << endl;
	cout << "2" << setw(20) << "Chicken Karahi" << setw(10) << "2000" << endl;
	cout << "3" << setw(20) << "Chicken Tikka" << setw(10) << "2200" << endl;
	cout << "4" << setw(20) << "Chicken Haleem" << setw(10) << "500" << endl;
	cout << "5" << setw(20) << "Creamy Chicken" << setw(10) << "2500" << endl;
	cout << "****************************************************************\n";

	// Taking input for dish code and quantity
	cout << "Enter your choice: ";
	cin >> code;
	cout << "****************************************************************\n";
	cout << "Please enter quantity in kgs: ";
	cin >> qty;
	cout << "****************************************************************\n";

	if (code >= 1 && code <= 5)  // Valid dish code check
	{
		if (qty > 0)  // Valid quantity check
		{
			cout << "Please enter the currency in which you want to pay: Press 1 for PKR, 2 for Dollar, 3 for Euro: ";
			cin >> crncy;
			cout << "****************************************************************\n";

			// Assign meal price according to dish code
			if (code == 1)
				meal_price = 1800 * qty;
			else if (code == 2)
				meal_price = 2000 * qty;
			else if (code == 3)
				meal_price = 3100 * qty;
			else if (code == 4)
				meal_price = 500 * qty;
			else
				meal_price = 2500 * qty;

			// Sales tax calculation based on meal price
			if (meal_price <= 1000)
				sales_tax = 0;
			else if (meal_price > 1000 && meal_price <= 3000)
				sales_tax = 0.02 * meal_price;
			else if (meal_price > 3000)
				sales_tax = 0.05 * meal_price;
			else
				cout << "Invalid Data Entry!";

			total_price = meal_price + sales_tax;

			// Currency conversion and final output
			if (crncy == 1) // PKR
			{
				cout << "Meal price: PKR " << meal_price << endl;
				cout << "Sales tax: PKR " << sales_tax << endl;
				cout << "Total price: PKR " << total_price << endl;
			}
			else if (crncy == 2) // USD
			{
				meal_price = meal_price / 165;
				sales_tax = sales_tax / 165;
				total_price = meal_price + sales_tax;
				cout << "Meal price: $" << meal_price << endl;
				cout << "Sales tax: $" << sales_tax << endl;
				cout << "Total price: $" << total_price << endl;
			}
			else if (crncy == 3) // Euro
			{
				meal_price = meal_price / 193;
				sales_tax = sales_tax / 193;
				total_price = meal_price + sales_tax;
				cout << "Meal price: €" << meal_price << endl;
				cout << "Sales tax: €" << sales_tax << endl;
				cout << "Total price: €" << total_price << endl;
			}
			else
				cout << "Invalid currency selection!";
		}
		else
			cout << "Invalid quantity!";
	}
	else
		cout << "Invalid Code of dish!";

	return 0;
}
