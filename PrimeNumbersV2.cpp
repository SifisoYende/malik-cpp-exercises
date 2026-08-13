/*
    Author: Sifiso Yende
    Program: Prime Numbers_Version2
             The program takes a positive integers (n),
             then displays first n, prime numbers.
 */
#include <iostream>
using namespace std;

bool isPrime(const int num);
void primeDisplay(const int num);

int main()
{
    int numOfIntegers;

    cout << "Enter a positive integer:\n";
    cin >> numOfIntegers;
    cout << endl;

    primeDisplay(numOfIntegers);

    cout << endl;

    return 0;
}

bool isPrime(const int num)
{
    if (num <= 1)
        return false;
    if (num == 2)
        return true;
    if (num%2 == 0)
        return false;
    for (int i = 3; i*i <= num; i++)
    {
        if (num%i == 0)
            return false;
    }
    return true;
}

void primeDisplay(const int num)
{
    int counter1 = 0;
    int counter2 = 2;

    if (num <=0)
        return;

    while (counter1 != num)
    {
        if (isPrime(counter2))
        {
            counter1++;
            cout << counter2 << " ";
        }
        counter2++;
    }
}

