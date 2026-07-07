/***********************************************************************
* Author: Sifiso Yende                                                 *
*                                                                      *
* Program: The program, takes an integer as input, then                *
* displays if it is a prime or not prime.                              *
************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter an integer:\n";
    cin >> num;

    if (num == 1)
    {
        cout << "Not Prime";
        return 1;
    }
    if (num ==2)
    {
        cout << "Prime!!!";
        return 0;
    }

    for (int i =3; (i<=num/2); i++)
    {
        if (num%i == 0)
        {
            cout << "Not Prime!!!";
            return 1;
        }
    }
    cout << "Prime!!!";
    cout << endl;

    return 0;
}