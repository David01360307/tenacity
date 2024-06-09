#include <iostream>
#include <time.h>

int main(){

    srand(time(0));
    int ranNum = rand() % (5 - 1 + 1) + 1;

    switch (ranNum)
    {
    case 1:
        std::cout << "You get a pie.";
        break;
    case 2:
        std::cout << "You get a pig.";
        break;    
    case 3:
        std::cout << "You get a pant.";
        break;    
    case 4:
        std::cout << "You get  pizza.";
        break;
    case 5:
        std::cout << "You get  me.";
        break;    
    
    default:
        break;
    }

    return 0;
}