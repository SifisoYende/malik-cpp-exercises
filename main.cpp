/************************************************************************
*  Author: Sifiso Yende
*
*  Program: The program gets the present populations of two cities A,B,
*  where the population of A is less than of B,
*  and their growth rates, then find out when will population A
*  be equal or greater than of B.
****************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int pop_A;
    int pop_B;

    double rate_A;
    double rate_B;

    int numOfYears = 0;

    cout << "Enter the current populations of city A, and B, respectively:\n";
    cin >> pop_A >> pop_B;
    cout << endl;

    cout << "Enter the growth rates (%) of city A, and B, respectively:\n";
    cin >> rate_A >> rate_B;

    rate_A = rate_A/100.0;
    rate_B = rate_B/100.0;
    cout << endl;

    cout << fixed << showpoint << setprecision(2);
    cout << "Population_A:    " << "Population_B:    " << "Years:    "<<endl;
    cout << setw(12) << pop_A <<setw(17)<<pop_B << setw(11)<<numOfYears << endl;
    while (pop_A < pop_B)
    {
        numOfYears++;
        pop_A += (pop_A*rate_A);
        pop_B += (pop_B*rate_B);

        cout << setw(12) << pop_A <<setw(17)<<pop_B << setw(11)<<numOfYears
             << endl;
    }

    cout <<"After "<< numOfYears <<" years, "
         << "population_A will be: " <<pop_A
         << " greater or equal to: " <<pop_B
         << " of population_B."<<endl;
    return 0;
}