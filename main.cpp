/***********************************************************************
* Author: Sifiso Yende
*
* Program: The program takes a positive integer as an input,
* then check if it's divisible by 11, then display the message.
************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned num;
    int T = 0;
    int count = 0;
    cout << "Enter a non negative integer:\n";
    cin >> num;

    while (num != 0)
    {
        T += pow(-1,count)*(num%10);
        num = num/10;
        count++;
    }
    if (T%11 == 0)
    {
        cout << "T = "<<T<<" and is ";
        cout <<"Divisble by 11"<< endl;
    }
    else
    {
        cout << "T = "<<T<<" and is ";
        cout << "Not divisible by 11" << endl;
    }
    return 0;
}