#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int number, guess, attempts = 0;
    srand(time(0));
    number = rand() % 100 + 1;

    do
    {
        cout << "Guess the number between 1 to 100" << endl;
        cin >> guess;
        if (guess < number)
        {
            cout << "Enter higher number please " << endl;
        }
        else if (guess > number)
        {
            cout << "Enter lower number please " << endl;
        }
        else
            cout << "Congratulations !! You guesses it in " << attempts << " attempts" << endl;
        attempts++;
    } while (guess != number);

    return 0;
}
