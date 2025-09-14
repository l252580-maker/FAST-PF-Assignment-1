#include<iostream>
using namespace std;
int main() {
	int x, y, case_label;

	// Input coordinates
	cout << "Enter x-coordinate: ";
	cin >> x;
	cout << "Enter y-coordinate: ";
	cin >> y;

	// Check if point is on origin or y-axis
	if (x == 0)
		if (y == 0)
			cout << "The point (0,0) lies on origin!";
		else
			cout << "The point (0," << y << ") lies on y - axis!";

	// Check if point is on x-axis
	else if (x != 0)
		if (y == 0)
			cout << "The point (" << x << ",0) lies on x - axis!";

	// Otherwise, point is in a quadrant
		else
		{
			// Encode sign of x and y into a case label
			case_label = (x > 0) * 1 + (x < 0) * 2 + (y > 0) * 1 + (y < 0) * 4;

			// Decide quadrant using switch
			switch (case_label)
			{
			case 2:
			{
				// Quadrant I
				cout << "The point (" << x << "," << y << ") lies in 1st Quadrant.";
				break;
			}
			case 3:
			{
				// Quadrant II 
					cout << "The point (" << x << "," << y << ") lies in 2nd Quadrant.";
					break;
			}
			case 6:
			{
				// Quadrant III
				cout << "The point (" << x << "," << y << ") lies in 3rd Quadrant.";
				break;
			}
			default:
			{
				// Quadrant IV
				cout << "The point (" << x << "," << y << ") lies in 4th Quadrant.";
				break;
			}
			}
		}
	return 0;
}


// Psudo code:

/*
START

DECLARE x, y, case_label
Input x and y coordinate
IF x coordinate equals 0
	If y coordinates equals 0
		Display that point is at origin
	ELSE Display that Point is at y axis

IF x doesn't equals 0
	IF y equals 0
		Display that point lies at x axis
	ELSE
		SET case_label = (x > 0) multiplies 1, then ADD (x < 0) multiplies 2 ADD (y > 0) multiplies 1 ADD (y < 0) multiplies 2

		SWITCH (case_label)
		CASE 2:
			Display that point lies in 1st Quadrant
			Exit
		CASE 3:
			Display that point lies in 2nd Quadrant
			Exit
		CASE 6:
			Display that point lies in 3rd Quadrant
			Exit
		DEFAULT:
			Display that point lies in 4th Quadrant
			Exit

TERMINATE
*/