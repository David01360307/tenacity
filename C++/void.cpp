#include <iostream>

double sayhi(std::string n, int iq, double lenght);

int main(){
    std::string name;
    std::cout << "enter your name:";
    std::cin >>  name;
    int iq = 220;
    double lenght;
    std::cout << "enter square lenght:";
    std::cin >> lenght;

    double area = sayhi(name, iq, lenght);
    std::cout << "area:" << area << " cm2";

}

double sayhi(std::string n, int iq, double lenght){
    std::cout << "hi~~" << n << "\n";
    std::cout << iq << "\n";
    return lenght * lenght;
    
}