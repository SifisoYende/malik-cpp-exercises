/*
 Author: Sifiso Yende
 Program: Reverse Number
          The program takes an integer as an input,
          then reverses the number.
 */
#include <iostream>
#include <string>

using namespace std;

int reverseDigit(int& num);

int main()
{
    int num;

    cout << "Enter an integer:\n";
    cin >> num;
    cout << endl;

    cout << "The reverse of the number "<< num << " is " << reverseDigit(num) << endl;

    return 0;
}

int reverseDigit(int& num)
{
    int lastDigit;
    int newNum = 0;

    while (num !=0)
    {
        lastDigit = num%10;
        newNum = (newNum*10)+lastDigit;
        num = num/10;
    }
    num = newNum;

    
    return num;
}


