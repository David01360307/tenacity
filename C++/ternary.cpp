#include <iostream>

int main(){

    int grade = 9;

    //grade % 2 == 0 ? std::cout << "EVEN" : std::cout << "ODD" ;
    
    std::cout << (grade % 2 == 0 ? "EVEN" : "ODD");

    return 0;

}