/*
Author: Sifiso Yende
Program: Vowels Counts
         The program takes a sequence of characters as an input
         then counts the vowels in it.
*/
#include <iostream>
#include <string>

using namespace std;

bool isVowel(const char& ch);
int vowelCount(const string& str);

int main()
{
    string str;

    cout <<"Enter a sequence of characters and -1 to quit:\n";
    getline(cin, str);
    cout << endl;

    while (str != "-1")
    {
        cout << "Number of vowels in "<<str <<" is " <<vowelCount(str)<< endl;
        cout << endl;

        cout <<"Enter a sequence of characters and -1 to quit:\n";
        getline(cin, str);
    }
    return 0;
}

bool isVowel(const char& ch)
{
    string str = "aeiou";
    for (int i = 0; i < str.size();i++)
    {
        if (str[i] == tolower(ch))
        {
            return true;
        }
    }
    return false;
}

int vowelCount(const string& str)
{
    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (isVowel(str[i]))
            count++;
    }
    return count;
}

