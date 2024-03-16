#include <iostream>
#include <string>

std::string inputGuess(){
    std::string input_guess;
    std::cout << "Enter a guess: ";
    std::cin >> input_guess;

    return input_guess;
}