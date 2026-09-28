/*-----------------------------------------------------------------
 *Author: Sifiso Yende
 *Program: Pig_Latin_Form
 *
 *         The program takes a string as an input,
 *         then return the pig latin form.
 *
 *-------------------------------------------------------------------*/

#include <iostream>
#include <string>

using namespace std;

bool isVowel(char ch);
string rotate(string pStr);
string pigLatinString(string pStr);

int main()
{
    string pStr;

    cout <<"Enter a string:\n";
    getline(cin,pStr);

    cout << "The pig latin form of "<<pStr << " is "<<pigLatinString(pStr) << endl;

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
    case 'y':
        return true;

    default:
        return false;
    }
}

string rotate(string pStr)
{
    unsigned int len = pStr.length();
    string rStr;
    rStr = pStr.substr(1,len-1) + pStr[0];

    return rStr;
}

string pigLatinString(string pStr)
{
    unsigned int len;
    bool foundVowel;
    unsigned iter;

    if (isVowel(pStr[0]))
        pStr = pStr + "-way";

    else
    {
        pStr = pStr + "-";
        pStr = rotate(pStr);
        len = pStr.length();
        foundVowel = false;

        for ( iter = 1; iter < len-1; iter++)
        {
            if (isVowel(pStr[0]))
            {
                foundVowel = true;
                break;
            }
            else
                pStr = rotate(pStr);
        }

        if (!foundVowel)
            pStr = pStr.substr(1,len) + "-way";
        else
            pStr = pStr + "ay";
    }
    return pStr;
}