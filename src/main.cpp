#include <stdlib.h>
#include <iostream>
#include <cstdint>
#include <windows.h>
int main(int argc, char** args) {
    uint16_t choice, num1, num2, num3, roll,roulette;
    uint64_t bet,ballance = 100; 
    bool running = true;
    num1 = rand() % 10;
    num2 = rand() % 10;
    num3 = rand() % 10;
    roll = rand() % 6 + 1;
    roulette = rand() % 8 + 1;
    
    std::cout << "welcome to the casino, we gave you a starting sum of 100$ your goal is to reach 1000000$ Now\nthe choice of how you spend it belonges to you\n\n1-The one handed thief\n2-dice rolling\n3-russian roulette\nGood Luck, Have Fun";
    std::cin >> choice;
    while(running){

        std::cout<< "How much money do you want to bet?";
        std::cin >> bet;
        
        if(ballance < bet){
            std::cout << "im afraid you can't bet this much";
        }
        else{
            running = true;
        }
        switch(choice){
        
        case 1:
            
            std::cout << "you chose the one handed thief if all the numbers are 7 the the amount of money you put into it will be multiplied by 777 but be carefull if the numbes are any different you lose everyting you bet";
            Sleep(500);
            std::cout <<num1 << "||";
            Sleep(500);
            std::cout <<num2 << "||";
            Sleep(500);
            std::cout <<num3;
            if(num1,num2,num3 == 7){
                std::cout << "congratulations!!!\nyou won:" << bet * 777;
                ballance += bet * 777;
            }
            else{
                std::cout << "well....maybe next time will be a charm you lose:" << bet ;
                ballance -= bet;
            }
            break;
        case 2:
            
            std::cout << "you chose the dice rolling if you want to win you need to roll 6 or 5 in any other case you'll lose\non win youe winnings will be multiplied by 5";
            
            if(roll == 5,6){
                std::cout<< "what a lucky roll, perhaps you should try again and continue this streak?\n you win:"<<bet * 5; 
                ballance += bet * 5;
            }
            else if (roll == 0,1,2,3,4){
                std::cout<< "it hurts my soul to see that maybe next round will be different\nyou lose:" << bet;
                ballance -= bet;
            }
            break;

        case 3:
            
            std::cout << "a very dangerous game but a really rewarding one too if you win your bet will be multiplied by a 1000 but if you lose......all your ballance will be wiped out";
            
            if(roulette == 1){
                std::cout << "phew...that one was intense but congratulations\nyou win" << bet * 1000;
                ballance += bet * 1000;
            }
            else if(roulette == 0,2,3,4,5,6,7,8){
                std::cout << "......that's life well not anymore\n more money for me I guess";
                
            }
        break;
    }
        std::cout << "\n\nyour ballance is:" << ballance << "$";
        std::cout << "do you want to try again?[1-Yes 2-No]";
        std::cin >> choice;
        
        if(choice == 1){
            running = true; 
        }
        else{
            running = false;
        }
    }
    return 0;
}