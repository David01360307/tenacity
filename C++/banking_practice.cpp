#include <iostream>

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

    double balance = 56784;
    char choice;
    do{
        std::cout << "********************\n";
        std::cout << "What's your wanting to do?\n";
        std::cout << "********************\n";
        std::cout << "A. show balance\n";
        std::cout << "B. deposit money\n";
        std::cout << "C. withdraw money\n";
        std::cout << "D. exit\n";
        std::cin >> choice;
        switch(choice){
            case 'A': showbalance(balance);
                    break;
            case 'B': balance += deposit();
                      showbalance(balance);
                    break;
            case 'C': balance -= withdraw(balance);
                      showbalance(balance);
                    break;
            case 'D': std::cout << "Thank you for using!\n";
                    break;   
            default:  std::cout << "Invaild choice.\n";             

        }
    }while(choice != 'D');

}

void showbalance(double balance){
    std::cout << "Your balance is " << balance << " dollars\n" << "\n";
}
double deposit(){
    double amount = 0;
    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;
    if (amount > 0){
        return amount;
    }
    else{
        std::cout << "that is not good.";
        return 0;
    }
    
}
double withdraw(double balance){
    double amount1 = 0;
    std::cout << "Enter amount to be withdrawed: ";
    std::cin >> amount1;
    if (amount1 > balance){
        std::cout << "atrocious...";
        return 0;
    }
    else{
        return amount1;
    }
}

