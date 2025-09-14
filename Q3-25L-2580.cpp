#include<iostream>
using namespace std;
int main() {
	int num1, num2;
	char opr;
	cout << "Enter two numbers:";
	cin >> num1;
	cin >> num2;

	// Menu of available operations
	cout << "All the operations are below:\n";
	cout << "Addition: +\n";
	cout << "Subtraction: -\n";
	cout << "Multiplicaion: *\n";
	cout << "Division: /\n";
	cout << "Remainder of division: %\n";
	cout << "Whether less than: <\n";
	cout << "Whether greater than: >\n";
	cout << "Whether equal to: =\n";
	cout << "Even number check: &\n";
	cout << "Odd number check: |\n";
	cout << "Enter operation: ";
	cin >> opr;

	// Switch for handling user-selected operation
	switch (opr)
	{
	case '+':   // Addition
	{
		cout << "Result: " << num1 + num2;
		break;
	}
	case '-':   // Subtraction
	{
		cout << "Result: " << num1 - num2;
		break;
	}
	case '*':   // Multiplication
	{
		cout << "Result: " << num1 * num2;
		break;
	}
	case '/':   // Division (with zero check via switch)
	{
		switch (num2)
		{
		case 0:
		{
			cout << "Division by 0 not allowed.";
			break;
		}
		default:
		{
			cout << "Result: " << (float)num1 / (float)num2;
			break;
		}
		}
		break;
	}
	case '%':   // Modulus (with zero check via switch)
	{
		switch (num2)
		{
		case 0:
		{
			cout << "Division by 0 not allowed.";
			break;
		}
		default:
		{
			cout << "Result: " << num1 % num2;
			break;
		}
		}
		break;
	}
	case '<':   // Comparison: less than
	{
		if (num1 < num2)
			cout << num1 << " is less than " << num2;
		else
			cout << "False!";
		break;
	}
	case '>':   // Comparison: greater than
	{
		if (num1 > num2)
			cout << num1 << " is greater than " << num2;
		else
			cout << "False!";
		break;
	}
	case '=':   // Comparison: equality
	{
		if (num1 == num2)
			cout << "Both numbers are equal.";
		else
			cout << "False!";
		break;
	}
	case '&':   // Even number check
	{
		if (num1 % 2 == 0 && num2 % 2 == 0)
			cout << "Result: Both are even!";
		else
			cout << "None is even!";
		break;
	}
	case '|':   // Odd number check
	{
		if (num1 % 2 != 0 || num2 % 2 != 0)
			cout << "Result: One of them is odd!";
		else
			cout << "None is odd!";
		break;
	}
	default:    // Invalid operator
		cout << "Invalid choice!";
	}
	return 0;
}
