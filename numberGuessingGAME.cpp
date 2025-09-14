#include <iostream>
#include <cstdlib>
#include <ctime> 
#include <limits>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void numberGuessingGame();

int main(){ 
    numberGuessingGame();
    return 0;
}

void numberGuessingGame() {
    srand(static_cast<unsigned int>(time(0)));
    int numberToGuess = rand() % 100 + 1;
    int userGuess = 0;
    int attempts = 0;
    const int maxAttempts = 5;
    cout << "welcome to the Number Guessing game " << endl;
    cout << "I've selected a number between 1 to 100. i beleave you can guess it in 5 attempts" << endl;
    while (attempts < maxAttempts) {
        cout << "Enter the number: ";
        cin >> userGuess;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "invalid input Please enter a number between 1 to 100" << endl;
            continue;
        }
        attempts++;
        if (userGuess < numberToGuess) {
            cout << "too low!!!! try a new number" << endl;
        } else if (userGuess > numberToGuess) {
            cout << "too high!!!! try a new number " << endl;
        } else {
            cout << "congratulations! you guessed the number " << numberToGuess << " in " << attempts << " attempts." << endl;
            break;
        }
    }
    if (attempts == maxAttempts && userGuess != numberToGuess) {
        cout << "sorry you've used all your attempts. The number was " << numberToGuess << ". better luck next time!" << endl;
    }
}