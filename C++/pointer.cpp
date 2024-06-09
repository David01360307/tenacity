#include <iostream>

int main(){
    int *pointer = nullptr;
    int x = 123;

    //pointer = &x;

    if(pointer == nullptr){
        std::cout << "FUCK";
        std::cout << *pointer;
    }
    else{
        std::cout << "BRILLIANT";
    }
}