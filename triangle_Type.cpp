/*
 *Author: Sifiso Yende
 *Program: triangle type
 *          The program takes three inputs as lengths of triangle,
 *          then return the type of the triangle depending on the
 *          given inputs.
 */
#include <iostream>
using namespace std;

enum triangleType {scalene, isosceles, equilateral, noTriangle};

triangleType triangleShape(double& val1, double& val2, double& val3);
void displayShape(int num);

int main()
{
    double val1, val2, val3;
    triangleType num;

    cout << "Enter the lengths of sides of triangle: a,b,c\n";
    cin >> val1 >> val2 >> val3;

    num = triangleShape(val1,val2,val3);

    displayShape(num);

    return 0;
}

triangleType triangleShape(double& val1, double& val2, double& val3)
{
    if (val1 == val2 && val2 == val3)
    {
        return equilateral;
    }
    else if (((val1 == val2)||(val2==val3)||(val3==val1))&&(val1+val2 > val3
        && val2 + val3 > val1 && val3 + val1 > val2))
    {
        return isosceles;
    }
    else if ((val1+val2) > val3 && (val2 + val3) > val1 && (val3 + val1) > val2)
    {
        return scalene;
    }
    return noTriangle;
}

void displayShape(int num)
{
    switch (num)
    {
    case 0:
        cout << "scalene";
        break;
    case 1:
        cout << "isosceles";
        break;
    case 2:
        cout << "equilateral";
        break;
    case 3:
        cout << "noTriangle";
        break;
    }
}