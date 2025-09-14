#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;

	// Check if number is even
	if (num % 2 == 0)
	{
		cout << "The number is Even!\n";

		// Further check: divisibility by 4
		if (num % 4 == 0)
			cout << "It is divisible by 4!";
		else
			cout << "Number is not divisible by 4!";
	}
	// Otherwise, number is odd
	else
	{
		cout << "The number is Odd!\n";

		// Further check: divisibility by 3
		if (num % 3 == 0)
			cout << "It is divisible by 3!";
		else
			cout << "Number is not divisible by 3!";
	}
	return 0;
}
