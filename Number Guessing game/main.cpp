#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int number = rand() % 100 + 1;
    int guess;
    int attempts;

    cout << "Guess a number between 1 and 100" << endl;

    for (attempts = 1; attempts<=100 ; attempts++)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < number)
        {
            cout << "Too low. Try again." << endl;
        }
        else if (guess > number)
        {
            cout << "Too high. Try again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number " << number << " in " << attempts << " attempts." << endl;

        }
    }

    return 0;
}
