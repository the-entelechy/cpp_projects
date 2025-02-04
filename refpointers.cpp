#include <iostream>
#include "classes.h"

int main(){
//  Sales_item ysh("tola");
//  std::cout << ysh.isbn();
    int x = 5;
    std::cout << &x << "\n";
    //create reference y that references x
    int &y = x;
    x = x + 1;
    //prints address of x 
    //changing the reference also changes the value
    std::cout << &y << "\n";
    //create int pointer pointing to address of y 
    int* size;
    size = &y;
    //derefrencing the pointer gives the value at the address.
    //and changing the value will persist for all variables with the same address
    ++*size;
    std::cout << *size << "\n";
    std::cout << &y << "\n";


};
