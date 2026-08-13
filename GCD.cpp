/*
 *Author: Sifiso Yende
 *Program: Greatest Common Divisor.
 *          The program takes two integers as inputs,
 *          then returns the greatest common divisor.
 */
#include <iostream>

using namespace std;

int gcd(int& a, int& b);

int main()
{
    int a;
    int b;

    cout << "Enter two integers:\n";
    cin >> a >> b;
    cout << endl;

    if (a != 0 && b != 0)
    {
        cout << "The greatest common divisor of "<<a <<" and "<<b
             << " is "<<gcd(a,b) << endl;
    }
    return 0;
}

int gcd(int& a, int& b)
{
    int rem;
    if (a > b)
    {
        if (a%b==0)
            return b;
        while (a%b != 0)
        {
            rem = a%b;
            a = b;
            b = rem;
        }
        return b;
    }
    if (b%a == 0)
        return a;
    while (b%a != 0)
    {
        rem = b%a;
        b = a;
        a = rem;
    }
    return a;
}

