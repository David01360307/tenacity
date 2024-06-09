#include <iostream>
#include <time.h>

int main(){

    srand(time(NULL));

    int num = (rand() % (10 - 3 + 1) + 3);

    std::cout << num;
    
    
    return 0;
}