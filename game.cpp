#include <iostream>
#include <string>

std::string inputGuess();
int guessAnswer(std::string answer);
std::string generateNumber();

void initGame(){
    std::string answer = generateNumber();
    std::cout <<"Answer is "<< answer<<std::endl;

    int isPlaying = 1;
    while(isPlaying){
        isPlaying = guessAnswer(answer);
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