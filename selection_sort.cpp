/*
 *  Author:     Sifiso Yende
 *  Program:    Selection_Sort Algorithm.
 *              Given a list of integers, the program
 *              gives a sorted list of integers in ascending order.
 */
#include <iostream>
using namespace std;

const int ARRAY_SIZE = 10;

void selectionSort(int list[], int SIZE);

int main()
{
    int list[ARRAY_SIZE];

    cout << "Enter " << ARRAY_SIZE << " integers.\n";

    for (int index = 0; index < ARRAY_SIZE; index++)
        cin >> list[index];

    cout << endl;

    cout << "The sorted list is:\n";
    selectionSort(list,ARRAY_SIZE);
    for (int index = 0; index<ARRAY_SIZE; index++)
        cout << list[index] << " ";
    cout << endl;

    return 0;
}

void selectionSort(int list[], int SIZE)
{
    int minIndex;
    int prevIndex;
    int nextIndex;
    int temp;

    for (prevIndex = 0; prevIndex < SIZE-1; prevIndex++)
    {
        minIndex = prevIndex;
        for (nextIndex = prevIndex+1; nextIndex < SIZE; nextIndex++)
        {
            if (list[minIndex] > list[nextIndex])
                minIndex = nextIndex;
        }

        // swapping
        temp = list[minIndex];
        list[minIndex] = list[prevIndex];
        list[prevIndex] = temp;
    }
}