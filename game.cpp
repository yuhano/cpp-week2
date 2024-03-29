#include <iostream>
#include <string>

std::string inputGuess();
int guessAnswer(std::string answer);
std::string generateNumber();

void initGame(){
    std::string answer = generateNumber();

    int isPlaying = 1;
    int playCount = 0;
    
    while(isPlaying){
        std::cout << 5-playCount << " chances left."<< std::endl;
        isPlaying = guessAnswer(answer);
        playCount += isPlaying;

        if (playCount == 5){
            isPlaying = 0;
            std::cout << "You lose!";
        }
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