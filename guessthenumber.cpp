#include <iostream>
#include <cstdlib>
#include <ctime>

void guessTheNumber() {
    std::srand(std::time(0));
    int numberToGuess = std::rand() % 100 + 1;
    int guess = 89;
    
    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I've picked a number between 1 and 100. Try to guess it!" << std::endl;
    
    while (guess != numberToGuess) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid input. Please enter an integer." << std::endl;
            continue;
        }
        
        if (guess < numberToGuess) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > numberToGuess) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the correct number." << std::endl;
        }
    }
}

int main() {
    guessTheNumber();
    return 0;
}
