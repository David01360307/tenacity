#include <iostream>
#include <time.h>

int playerchoice();
int computerchoice();
int showchoice(int choice, int pc);
int winner(int player, int computer);

int main(){

    int player;
    int computer;

    player = playerchoice();
    showchoice(player,1);
    computer = computerchoice();
    showchoice(computer,0);
    winner(player, computer);

}

int playerchoice(){
    std::cout << "choice one\n";
    std::cout << "0=r 1=p 2=s :";
    char num;
    do{
        std::cin >> num;
        switch (num)
        {
        case 'r':
            return 0;
            break;
        case 'p':
            return 1;
            break;
        case 's':
            return 2;
            break;

        default:
            std::cout << "GET OUT!!\n" << "re-choose:";
            break;
        }  
    }while (num != 0 && num != 1 && num != 2);
    
    
}
int showchoice(int choice, int pc){
    if (pc == 0){
        std::cout << "Computer's choice:" << choice << "\n";
    }
    else{
        std::cout << "Your choice:" << choice << "\n";
    }
    return 0;
}
int computerchoice(){
    int ran;

    srand(time(NULL));
    ran = rand() % (2 - 0 + 1) + 0;
    switch (ran)
    {
    case 0:
        return 0;
        break;
    case 1:
        return 1;
        break;
    case 2:
        return 2;
        break;

    default:
        break;
    }  
}
int winner(int player, int computer){
    if ((player + 1) % 3 == computer){
        std::cout << "Computer wins";
    }
    else if ((computer + 1) % 3 == player){
        std::cout << "You win";
    }
    else{
        std::cout << "tie.";
    }
    return 0;
}
