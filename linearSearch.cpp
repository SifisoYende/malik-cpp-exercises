/*
    Author       : Sifiso Yende

    Program      : Linear Search
    Explaination : Given an integer, check if it's in an array,
                   if it's in the array, return its location,
                   otherwise return -1.
 */
#include <iostream>

using namespace std;

const int ARRAY_SIZE = 10;

int linearSearch(const int list[], int listSize,
    int searchedItem);

int main()
{
    int list[ARRAY_SIZE];
    int searchedItem;

    cout << "Enter 10 integers:\n";

    for (int index = 0; index < ARRAY_SIZE; index++)
    {
        cin >> list[index];
    }
    cout << endl;

    cout << "Enter the integer you want to search:\n";
    cin >> searchedItem;
    cout << endl;

    if (linearSearch(list,ARRAY_SIZE,searchedItem) != -1)
    {
        cout << searchedItem << " is FOUND at position "
            <<linearSearch(list, ARRAY_SIZE, searchedItem);
        cout << endl;
    }
    else
    {
        cout << searchedItem << " is NOT FOUND in the array." << endl;
    }

    return 0;
}

int linearSearch(const int list[], int listSize, int searchedItem)
{
    bool found = false;

    int index = 0;

    while (index < listSize && !found)
    {
        if (searchedItem == list[index])
        {
            found = true;
        }
        else
            index++;
    }

    if (found)
        return index;

    return -1;
}