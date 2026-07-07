//*********************************************************
// Author: S.S Yende
//
// Program: Counts zeros, odds, and evens
// This program counts the number of odd and even numbers.
// The program also counts the number of zeros.
//**********************************************************

#include <iostream>

using namespace std;

int main()
{
    // Declaring Variables.

    int numOfEvens;
    int numOfOdds;
    int numOfZeros;
    int numOfInt;
    int num;

    // Initializing Variables.

    numOfEvens = 0;
    numOfOdds = 0;
    numOfZeros = 0;

    // Getting number of integers.
    cout << "Enter the number of integers:\n";
    cin >> numOfInt;
    cout << endl;

    cout << "Enter the "<< numOfInt << " integers." << endl;
    for (int i = 0; i < numOfInt; i++)
    {
        cin >> num;

        if ( num%2 == 0)
        {
            numOfEvens += 1;

            if ( num == 0)
            {
                numOfZeros += 1;
            }
        }

        else
            numOfOdds += 1;
    }

    cout <<"There are "<<numOfEvens <<" even integers.\n";
    cout << "There are "<<numOfOdds << " odd integers.\n";
    cout << "There are "<<numOfZeros << " zeros integer.\n";
    return 0;
}