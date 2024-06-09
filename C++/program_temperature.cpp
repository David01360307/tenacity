#include <iostream>

int main(){

    double temp;
    char unit;

    std::cout << "What's unit you want to convert to(F/C): ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "enter the temperature in Celsius: ";
        std::cin >> temp;
        temp = (1.8) * temp + 32.0;
    } 
    else if(unit == 'C' || unit == 'c'){
        std::cout << "enter the temperature in Fahrenheit: ";
        std::cin >> temp;
        temp = (temp - 32.0) / 1.8;
    }
    else{
        std::cout << "GET OUT";
    }

    std::cout << "result: " << temp << unit;

}