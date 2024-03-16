#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


std::string inputGuess(){
    std::string input_guess;
    std::cout << "Enter a guess: ";
    std::cin >> input_guess;

    return input_guess;
}

std::string generateNumber(){
    srand((unsigned int)time(NULL));

    char c[4];
    for (int i = 0; i < 3; i++){
        c[i] = (int)rand()%10 +'0';
    }
    std::string str(c);

    return str;
}

