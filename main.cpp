/***********************************************************************
* Author: Sifiso Yende                                                 *
*                                                                      *
* Program: The program takes an integer as input, then                 *
* displays if it is a prime or not prime.                              *
************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter an integer:\n";
    cin >> num;

    // Fix: Catch 0, 1, and all negative numbers
    if (num <= 1)
    {
        cout << "Not Prime" << endl;
        return 0; 
    }
    
    // Catch 2 explicitly
    if (num == 2)
    {
        cout << "Prime!!!" << endl;
        return 0;
    }

    // Fix: Catch all other even numbers instantly
    if (num % 2 == 0)
    {
        cout << "Not Prime!!!" << endl;
        return 0;
    }

    // Optimisation: Only check odd numbers up to the square root
    // i * i <= num is the same as i <= sqrt(num) but faster
    for (int i = 3; (i * i <= num); i += 2)
    {
        if (num % i == 0)
        {
            cout << "Not Prime!!!" << endl;
            return 0;
        }
    }
    
    cout << "Prime!!!" << endl;

    return 0;
}
