#include <iostream>

int main(){
    std::string name;

    while(name.empty()){
        std::cout << "Please enter your name: ";
        std::getline(std::cin , name);
    }

    std::cout << "Welcome, " << name << "\n";

    int number;

    do{
        std::cout << "enter a positive #: ";
        std::cin >> number;
    }while(number < 0); //轟天騎士團

    std::cout << "the # you thinking is " << number;

    return 0;

}
