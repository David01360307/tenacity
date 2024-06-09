#include <iostream>
#include <cmath>

int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "***********CALCULATOR*************" << "\n";

    std::cout << "enter the (+ - * /)" << "\n";
    std::cin >> op;

    std::cout << "enter the num1:";
    std::cin >> num1;

    std::cout << "enter the num2:";
    std::cin >> num2;

    switch (op){
    case '+':
        std::cout << num1 + num2;
        break;
    case '-':
        std::cout << num1 - num2;
        break;
    case '*':
        std::cout << num1 * num2;
        break;
    case '/':
        std::cout << num1 / num2;
        break;        
    
    default:
        std::cout << "GET OUT";
        break;
    }


    std::cout << "\n" << "**********************************";
 
    return 0;
}