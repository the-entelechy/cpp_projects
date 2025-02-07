#include <iostream>
#include <string>
#include <vector>
struct foreignCurrency {
  std::string name;
  double currency;
  double conversionRate;
  foreignCurrency* ptr = nullptr;
};

struct usdBank{
  double usd {0.00};
};
void currencyTracker(std::vector<foreignCurrency*>* ptr, usdBank &b){
// Prompt currency 
// Enter currency for each
// output total USD after converted
  double convertedCurr = 0;
  for(int i=0;i < ptr->size();i++){
    //std::cout << (*ptr)[i]->name << '\n';
    std::cout << "Enter number of " << (*ptr)[i]->name << ":";
    std::cin >> (*ptr)[i]->currency;
    std::cout << "You Entered " << (*ptr)[i]->currency << " " << (*ptr)[i]->name << '\n';
    convertedCurr = (*ptr)[i]->currency * (*ptr)[i]->conversionRate;
    std::cout << "This is: $" << convertedCurr << '\n';
    b.usd += convertedCurr;
    std::cout << "Total: $" << b.usd << '\n';
  };
};

//get struct,name,currency
void currencyCreate(foreignCurrency &c, std::string n, double conv, std::vector<foreignCurrency*>* ptr) {
  c.name = n;
  c.conversionRate = conv;
  c.ptr = &c;
  ptr->push_back(c.ptr);
  //std::cout << ptr->size() << '\n';
  //std::cout << c.name <<'\n' << &c << '\n';
};

int main(){
  bool banking = true;
  foreignCurrency Colombia, Brazil, Peru;
  std::vector<foreignCurrency*> V;
  std::vector<foreignCurrency*>* ptr = &V;
  usdBank myBank;
  currencyCreate(Colombia, "Colombian Peso", 0.00024, ptr);
  currencyCreate(Brazil, "Brazilian Reais",0.17, ptr);
  currencyCreate(Peru, "Peruvian Soles",0.27, ptr);
  //std::cout << V.size() << '\n';

  currencyTracker(ptr,myBank);
  //std::cout << myBank.usd;
  //std::cout << &Brazil << " in Main"; //address matches inside function

};
