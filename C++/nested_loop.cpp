#include <iostream>

int main(){

    char symbol;
    int rows;
    int columns;

    std::cin >> symbol;
    std::cin >> rows;
    std::cin >> columns;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            std::cout << symbol << " ";
        }
        std::cout << "\n";
    }



    return 0;
}