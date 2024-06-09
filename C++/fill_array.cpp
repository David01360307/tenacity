#include <iostream>

int main(){
    std::string foods[5];
    int size = sizeof(foods) / sizeof(foods[0]);

    for (int i = 0; i < size; i++){
        std::cout << "enter what you want:"<< i; 
        std::cin >> foods[i];
    }

    for (std::string food : foods){
        std::cout << food << '\n';
    }


    return 0;
}