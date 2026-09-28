/*
    Author:   Sifiso Yende
    Program:  Vowel_Remover
              Given a string input, the program removes the vowels in a string,
               and return a string with no vowels.
 */
#include <iostream>
#include <string>

using namespace std;

bool isVowel(char ch);
string vowelRemover(string& str);

int main()
{
    string str;

    cout << "Enter a string:\n";
    getline(cin, str);

    cout << "The string " << str << " after removing vowels is ";
    cout << vowelRemover(str) << endl;

    return 0;
}

bool isVowel(char ch)
{
    switch (tolower(ch))
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return true;

    default:
        return false;
    }
}

string vowelRemover(string& str)
{
    string pStr = "";

    string::size_type len = str.length();

    for (int i = 0; i < len; i++)
    {
        if (!isVowel(str[i]))
        {
            pStr = pStr + str[i];
        }
    }
    str = pStr;
    pStr.clear();

    return str;
}