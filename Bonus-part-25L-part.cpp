#include<iostream>
using namespace std;
int main() {
    int x1, x2, x3, y1, y2, y3, side1, side2, side3, great, sml1, sml2;
    float  area;

    // Input coordinates of 3 points
    cout << "Enter the coordinates of 1st point (x,y): ";
    cin >> x1;
    cin >> y1;
    cout << "Enter the coordinates of 2nd point (x,y): ";
    cin >> x2;
    cin >> y2;
    cout << "Enter the coordinates of 3rd point (x,y): ";
    cin >> x3;
    cin >> y3;

    // Formula to calculate area of triangle (used to check collinearity)
    area = 0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

    // If area is zero then points are collinear and no triangle is possible
    if (area == 0)
        cout << "Triangle can't be formed by collinear points!";
    else
    {
        // Calculate squared lengths of all sides
        // sqrt is not needed because comparison works with squares
        side1 = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
        side2 = ((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2));
        side3 = ((x1 - x3) * (x1 - x3)) + ((y1 - y3) * (y1 - y3));

        // Find the largest side for right angle check
        if (side1 > side2 && side1 > side3)
        {
            great = side1;
            sml1 = side2;
            sml2 = side3;
        }
        else if (side2 > side1 && side2 > side3)
        {
            great = side2;
            sml1 = side1;
            sml2 = side3;
        }
        else
        {
            great = side3;
            sml1 = side1;
            sml2 = side2;
        }

        // Check for equilateral triangle
        if (side1 == side2 && side1 == side3)
            cout << "Equilateral Triangle.";

        // Check for isosceles triangle
        else if (side1 == side2 || side2 == side3 || side1 == side3)
        {
            // Also check if it is right angled
            if (great == sml1 + sml2)
                cout << "Isosceles and Right Angled Triangle.";
            else
                cout << "Isosceles Triangle.";
        }

        // Otherwise scalene triangle
        else
        {
            // Also check if it is right angled
            if (great == sml1 + sml2)
                cout << "Scalene and Right Angled Triangle.";
            else
                cout << "Scalene Triangle.";
        }
    }
    return 0;
}


// Pseudo Code

/*
START

DECLARE all coordinates
DECLARE Area
Input Coordinates of three points
SET Area equals Formula to check for collinearity
IF Area equals 0
    Display that tringle can't be formed
ELSE
    SET side1 equals Distance between two respective points
    SET side2 equals Distance between two respective points
    SET side3 equals Distance between two respective points

    IF side1 is greater than other two sides
        SET great equals side1
        SET sml1 equals 1st small side
        SET sml2 equals 2nd small side
    ELSE IF
        SET great equals side2
        SET sml1 equals 1st small side
        SET sml2 equals 2nd small side
    ELSE
        SET great equals side3
        SET sml1 equals 1st small side
        SET sml2 equals 2nd small side

    IF all sides are equal
        Displays that triangle is equilateral
    ELSE IF any two sides are equal
        IF one side squared equals sum of other two sides squared
            Display that triangle is isosceles and right angled triangle
        ELSE Display that triangle is isosceles
    ELSE
        IF one side squared equals sum of other two sides squared
            Display that triangle is Scalene and right angled triangle
        ELSE Display that triangle is scalene

TERMINATE
*/