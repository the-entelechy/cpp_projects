#include <iostream>

void loop(){
    for(int i = 0; i<=10; i++){
    std::cout << i << "\n";  
    };

};
int sum(){
    int num1 = 5;
    int* nump = &num1;
    std::cout << &nump << "\n" << nump << "\n";
    num1 = num1 + 1;
    int sum = num1 + *nump; 
return sum;
}
int main(){
    std::cout << "I am The Entelechy\n";
    //loop(); 
    std::cout << sum();

return 0;
}
