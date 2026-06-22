//*******************************************************************************
// Authors: S.Y. Yende
//
// Program: Fibonacci Number
// The program takes the first two numbers of the Fibonacci sequence
// and the desired nth. Then evaluate and display the Fibonacci sequence until
// the desired nth term.
//*******************************************************************************

#include <iostream>

using namespace std;

int main()
{
    unsigned long long previous1;
    unsigned long long previous2;
    unsigned long long current;
    int count;
    int nthFibonacci;


    cout << "Enter the first two Fibonacci numbers: ";
    cin >> previous1 >> previous2;
    cout << endl;

    cout << "Enter the nth term you desire: ";
    cin >> nthFibonacci;
    cout << endl;

    if (nthFibonacci == 1)
    {
        current = previous1;
        cout << current <<endl;
    }
    if (nthFibonacci == 2)
    {
        current = previous2;
        cout << previous1 << " " << current << endl;
    }

    else if ( nthFibonacci > 2 )
    {
        count = 2;

        cout << previous1 << " " << previous2;
        while ( count < nthFibonacci )
        {

            current = previous2 + previous1;
            previous1 = previous2;
            previous2 = current;
            count++;
            cout << " " << current << " ";
        }
        cout << endl;

    }

    return 0;

}