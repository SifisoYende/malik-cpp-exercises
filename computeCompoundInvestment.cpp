/*
 * Author: Sifiso Yende
 * Program: Compound Interest.
 *          The function takes three inputs: (1) Principal (Amount To Be Invested)
 *                                           (2) Period (numbers of months to be invested)
 *                                           (3) Interest_Rate (growth rate in percentage(%))
 */

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
void computeCompoundInvestment(double& principal, const unsigned int& period, const double& interest);

int main()
{
    double principalValue;
    unsigned int period;
    double interest;

    cout << "Enter the amount you want to invest:\n";
    cin >> principalValue;
    cout << endl;

    cout << "Enter the number of months you wants to invest:\n";
    cin >> period;
    cout << endl;

    cout << "Enter the interest rate(%) p.a compounded monthly:\n";
    cin >> interest;
    cout << endl;

    computeCompoundInvestment(principalValue, period, interest);

    return 0;
}

void computeCompoundInvestment(double& principal, const unsigned int& period, const double& interest)
{
     ofstream outFile;
     outFile.open("Compounding Interest.txt");
     double initialAmount = principal;
     double accumulatedInterest;

    cout << showpoint << fixed << setprecision(2);

    outFile << showpoint << fixed << setprecision(2);

    cout << setw(18) << left << "Initial_Amount "
         <<setw(9) << left << principal << endl;
     outFile << setw(18) << left << "Initial_Amount "
            << setw(9) << left << principal << endl;

    cout << setw(18) << left << "Period "
         <<setw(9) << left << period <<" months " << endl;
     outFile << setw(18) << left << "Period "
         <<setw(9) << left << period <<" months " << endl;


    cout << setw(18) << left << "Interest "
         <<setw(9) << left << interest <<" % " << endl;

     outFile << setw(18) << left << "Interest "
         <<setw(9) << left << interest <<" % " << endl;
    unsigned int month = 1;

     cout << endl << endl;
     outFile << endl << endl;

    cout << setw(18) << left << "Month : "
         <<setw(9) << left << "Accumulated_Amount "
          << setw(25) << right << "Accumulated interest" << endl;

     outFile << setw(18) << left << "Month : "
         <<setw(9) << left << "Accumulated_Amount "
          << setw(25) << right << "Accumulated interest" << endl;

     for (month; month <= period; month++)
     {
          principal = principal + principal*(interest/(12*100.0));
          accumulatedInterest = (principal - initialAmount);
          cout << setw(18) << left << month
         <<setw(9) << left << principal
          << setw(25) << right << accumulatedInterest << endl;

          outFile << setw(18) << left << month
         <<setw(9) << left << principal
          << setw(25) << right << accumulatedInterest << endl;
     }

     cout << endl << endl;
     outFile << endl << endl;

     cout << "Interest amount:   " << (principal - initialAmount);
    outFile << "Interest amount:   " << (principal - initialAmount);

     cout << endl;
    outFile << endl;
    outFile.close();
}