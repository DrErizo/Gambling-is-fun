#include <stdlib.h>
#include <ctime>
#include <iostream>
#include <cstdint>
#include <windows.h>
#include <conio.h>
int main(int argc, char** args) {
    std::string mode; 
    uint16_t choice, num1, num2, num3, roll,roulette;
    uint64_t bet,ballance = 100; 
    bool running;
    
    std::cout << "welcome to the casino, we gave you a starting sum of 100$ your goal is to reach 100 000 000$\nNow the choice of how you spend it belonges to you\n\n";
   
    
    while(running){
    srand(time(NULL));
    std::cout << "1-The one handed thief\nif all the numbers are 7 the the amount of money you put into it will be multiplied by 777 but be carefull if the numbes are any different you lose everything you bet\n\n"
                 "2-dice rolling\nif you want to win you need to roll 6 or 5 in any other case you'll lose\non win your winnings will be multiplied by 5\n\n"
                 "3-russian roulette\na very dangerous game but a really rewarding one too if you win your bet will be multiplied by a 1000 but if you lose......all your ballance will be wiped out\n\n"
                 "Good Luck, Have Fun\n";
    std::cin >> choice;
        std::cout<< "How much money do you want to bet?\n";
        std::cin >> bet;
    if(ballance < bet){
        std::cout << "im afraid you can't bet this much\n";
        running = true;
    }
        
        switch(choice){
        
        std::cout << "you chose " << mode << "\n\n";
        case 1:
            num1 = rand() % 9 + 1;
            num2 = rand() % 9 + 1;
            num3 = rand() % 9 + 1;
            
            mode = "the one handed thief";
            Sleep(500);
            std::cout <<num1 << "||";
            Sleep(500);
            std::cout <<num2 << "||";
            Sleep(500);
            std::cout <<num3 << "\n\n";
            Sleep(500);
            if(num1 + num2 + num3 == 21){
                std::cout << "congratulations!!!\nyou won:" << bet * 777<< "$";
                ballance += bet * 777;
            }
            else{
                std::cout << "well....maybe next time will be a charm\nyou lose:" << bet<< "$";
                ballance -= bet;
            }
            break;
        case 2:
            
           roll = rand() % 5 + 1;
           mode = "dice rolling";
            Sleep(500);
            if(roll == 5,6){
                std::cout << roll << "\n";
                std::cout<< "what a lucky roll, perhaps you should try again and continue this streak?\n you win:"<<bet * 5<< "$"; 
                ballance += bet * 5;
            }
            else {
                std::cout<< "it hurts my soul to see that maybe next round will be different\nyou lose:" << bet<< "$";
                ballance -= bet;
            }
            break;

        case 3:
            roulette = rand() % 8 + 1;
            
            mode = "russian roulette";
            Sleep(500);
            if(roulette == 1){
                std::cout << "phew...that one was intense but congratulations\nyou win" << bet * 500 << "$\n";
                ballance += bet * 1000;
            }
            else{
                std::cout << "*You Die*";
                std::cout << "......that's life well not anymore\n more money for me I guess";
                exit(0);
            }
        break;
    }
        Sleep(500);
        std::cout << "\n\nyour ballance is:" << ballance << "$";
        Sleep(500);
        if(ballance == 100000000){
            std::cout << "congratulations your ultimate goal of reaching 100 000 000$ became a reality\nnow why don't you spend some of that money here?\nMaybe youll win another 100 000 000 no one knows.";
        }
        
        
        std::cout << "\nDo you want to try again?[1-Yes 2-No]\n";
        std::cin >> choice;
        
        if(choice == 1){
            running = true; 
        }
        else{
            exit(0);
        }
    }
    return 0;
}