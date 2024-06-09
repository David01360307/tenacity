#include <iostream>
#include <time.h>

int main(){

    int num;
    int tries;
    int guess;
    int max = 100;
    int min = 1;

    srand(time(NULL));
    num = rand() % (100 - 1 + 1) + 1;

    do{
        std::cout << "enter " << min << "~" << max << " num: ";
        std::cin >> guess;
        tries ++;

        if(guess > num){
            std::cout << "too high\n";
            if(max > guess){
                max = guess - 1;
            }
        }
        else if(guess < num){
            std::cout << "too low\n";
            if (min < guess){
                min = guess + 1;
            }    
        }
        else{
            std::cout << "correct!! " << "You have guessed: " << tries << " times";
        }

    }while(guess != num);
    

    return 0;

}