#include <iostream>

std::string topping = "shit";

void pizza();
void pizza(std::string topping);

int main(){

    pizza("chocolate");

}

void pizza(){
    std::cout << "Here is your pizza!";
}
void pizza(std::string topping){
    std::cout << "Here is your " << ::topping << " pizza!";
}
