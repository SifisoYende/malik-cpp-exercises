/*
    Author:  Sifiso Yende
    Program: Federal_Tax
             The program calculates the federal tax.
 */
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void getData(string& maritalStatus, double& grossSalary ,
    unsigned int& numOfChildren, double& contributedTaxRate);

double taxAmount(const string& maritalStatus, const unsigned int& numOfChildren,
    const double& grossSalary,
    const double& contributedTaxRate);

int main()
{
    string maritalStatus;
    double grossSalary = 0.0;
    unsigned int numOfChildren = 0;
    double contributedTaxRate = 0.0;

    getData(maritalStatus,grossSalary,numOfChildren,contributedTaxRate);
    cout << endl;

    cout << "The tax amount is: " << taxAmount(maritalStatus,numOfChildren,grossSalary,contributedTaxRate) << endl;

    return 0;
}

void getData(string& maritalStatus, double& grossSalary, unsigned int& numOfChildren, double& contributedTaxRate)
{
    cout << "Enter marital status (\"single\" or \"married\"):\n";
    getline(cin,maritalStatus);
    cout << endl;

    if (maritalStatus=="married")
    {
        cout << "Enter the number of your children under 14 yrs old.\n";
        cin >> numOfChildren;
        cout << endl;
    }

    cout << "Enter a gross salary:\n";
    cin >> grossSalary;
    cout << endl;

    cout << "Enter contributed tax rate(<=6%)\n";
    cin >> contributedTaxRate;
    contributedTaxRate = contributedTaxRate/100.0;
    cout << endl;

}

double taxAmount(const string& maritalStatus, const unsigned int& numOfChildren,
    const double& grossSalary,const double& contributedTaxRate)
{
    cout << fixed << showpoint << setprecision(2);
    double tax_rate = 0.00;
    double standardExemption = 4000.00;
    double personalExemption = 1500.00;
    double tax = 0.00;

    // Pension Plan
    if (maritalStatus=="married")
    {
        standardExemption = 7000.00;
        unsigned int numOfPeople = (2 + numOfChildren);
        personalExemption = (numOfPeople * personalExemption);
    }

    if (grossSalary >=0 && grossSalary <=15000)
    {
        tax_rate = 15/100.0;
        tax = grossSalary * tax_rate;
    }

    else if (grossSalary <= 40000)
    {
        tax_rate = 25/100.0;
        tax = grossSalary * tax_rate + 2250;
    }

    else if (grossSalary > 40000)
    {
        tax_rate = 35/100.0;
        tax = grossSalary * tax_rate + 8460;
    }

    double taxableIncome = (tax+personalExemption - (standardExemption + (contributedTaxRate * grossSalary)));

    return taxableIncome;
}