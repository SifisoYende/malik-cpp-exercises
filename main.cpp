#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int num;
    int guess;
    bool isGuessed;

    srand(time(0));
    num = rand() % 100;

    isGuessed = false;

    while (!isGuessed)
    {
        cout << "Enter an integer greater than or equal to 0 and less than 100: ";
        cin >> guess;
        cout << endl;

        if (guess == num)
        {
            cout << "You guessed correctly!!" << endl;
            isGuessed = true;
        }

        else if (guess < num)
        {
            cout << "Your guess is less than the number!"<< endl << "Guess again!";
            cout << endl;
        }

        else
        {
            cout << "Your guess is higher than the number!" << endl << "Guess again!" << endl;
        }
    }

    return 0;
}