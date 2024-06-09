#include <iostream>

int main(){
    std::string name;
    
    std::cout << "enter your name: ";
    std::getline(std::cin, name);

    name.insert(0,"sex ");
    
    if(name.empty()){
        std::cout << "damn";
    }
    else{
        std::cout << name.erase(0,2);
    }

    return 0;

}