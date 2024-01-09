// create a game where a user must guess a number between 1 and 10
// the program will loop until the user guesses correctly
// tell the user if their guess is too high or too low

#include <iostream>
using namespace std;

// get a random number between 1 and 10
int getRandomNumber() {
    srand(time(NULL));
    int randomNumber = rand() % 10 + 1;
    return randomNumber;
}

int main() {
    int randomNumber = getRandomNumber();
    int guess;
    int tries = 0;
    do {
        cout << "Guess a number between 1 and 10: ";
        cin >> guess;
        tries++;
        if (guess > randomNumber) {
            cout << "Too high!" << endl;
        } else if (guess < randomNumber) {
            cout << "Too low!" << endl;
        } else {
            cout << "You win!" << endl;
        }
    } while (guess != randomNumber);
    cout << "It took you " << tries << " tries." << endl;
    return 0;
}
