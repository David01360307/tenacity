#include <iostream>
#include <cmath>
namespace first{
    int x = 1;
}

using tfg = std::string;


int main(){
    std::cout << "ing..." << "\n";
   
    char grade;

    std::cout << "What's letter grade" << "\n";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "It is Average";
            break;
        case 'B':
            std::cout << "It is Beyond my expections";
            break;
        case 'C':
            std::cout << "Are your intelligence equaling the Cat!?"; 
        case 'D':
            std::cout << "Becomeing Dust is worthy of you."; 
        default:
            std::cout << "GET OUT";           

    }

    
   
    



    return 0;
}