#include <iostream>

int main(){

    const int size = 100;

    std::string foods[size];

    fill(foods, foods + (size/2), "shit");
    fill(foods + (size/2), foods + size,  "pizza");

    for(std::string food : foods)     {
        std::cout << food << '\n';
    }
    
    return 0;
}