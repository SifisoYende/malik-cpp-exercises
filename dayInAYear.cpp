/*
Author: Sifiso Yende
Program: Number of day in a year.
         The program takes month-day-year as an input,
         then find the number of the day in a year.
 */
#include <iostream>
using namespace std;

bool isLeapYear(const int& year);
int numOfDayInAYear(const double& month, const double& day,const int& year);

int main()
{
    char ch;
    double month;
    double day;
    int year;

    cout << "Enter the date in the form month-day-year\n";
    cin >> month >> ch >> day >> ch >> year;
    cout << endl;

    cout << "The day of this date "<<month <<"-"<<day<<"-"<<year << " is "<< numOfDayInAYear(month,day,year) << endl;

    return 0;
}

bool isLeapYear(const int& year)
{
    if ((year%100 != 0 && year%4 == 0) || year%400 == 0)
        return true;
    return false;
}

int numOfDayInAYear(const double& month, const double& day, const int& year)
{
    double numOfDaysInYear = 365;

    if (isLeapYear(year))
        numOfDaysInYear++;
    double numOfDaysPerMonth = numOfDaysInYear/12.0;
    return static_cast<int>((month*numOfDaysPerMonth)-(numOfDaysPerMonth - day));

}

