#include <iostream>
#include <string>

std::string inputGuess();
int guessAnswer(std::string answer);

void initGame(){
    std::string input_answer;
    std::cout << "Enter a answer: ";
    std::cin >> input_answer;

    int isPlaying = 1;
    while(isPlaying){
        isPlaying = guessAnswer(input_answer);
    }
}

int guessAnswer(std::string answer){
    std::string input_guess = inputGuess();

    int strikeCount = 0;
    int ballCount = 0;

    for(int i = 0; i < 3; i++){
        if(answer.at(i) == input_guess.at(i)){
            strikeCount++;
        }else if (answer.find(input_guess.at(i)) != std::string::npos){
            ballCount++;
        }
    }
    if(strikeCount == 3){
        std::cout << "You Win!";
        return 0;
    }
    else{
        std::cout << "Strikes: "<<strikeCount<< ", Balls: "<<ballCount<<std::endl;
        return 1;
    }

}