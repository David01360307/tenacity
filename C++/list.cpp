#include <iostream>

double gettotal(double price[], int size);

int main(){

    double price[] = {34, 45, 67.3, 45.6};
    int size = sizeof(price) / sizeof(double);
    double total = gettotal(price, size);
    
    std::cout << "$" << total;
    
    return 0;
}

double gettotal(double price[], int size){
    double total = 0;

    for(int i = 0; i < size; i++){
        total += price[i];
    }    

    return total;

}