#include <iostream>
#include <string>
#include <vector>
struct foreignCurrency {
  std::string name;
  double currency;
  double convertedCurr;
  double conversionRate;
  foreignCurrency* ptr = nullptr;
};

struct usdBank{
  double usd {0.00};
};
void currencyTracker(foreignCurrency &c, usdBank &b){
// Prompt currency 
// Enter currency for each
// output total USD after converted
  std::cout << "Enter number of " << c.name << ":";
  std::cin >> c.currency;
  std::cout << "You Entered " << c.currency << " " << c.name << '\n';
  c.convertedCurr = c.currency * c.conversionRate;
  std::cout << "This is: $" << c.convertedCurr << '\n';
  b.usd += c.convertedCurr;
  std::cout << &c << '\n';
  std::cout << "Total: $" << b.usd << '\n';
};

//get struct,name,currency
void currencyCreate(foreignCurrency &c, std::string n, double conv, std::vector<foreignCurrency*>* ptr) {
  c.name = n;
  c.conversionRate = conv;
  c.ptr = &c;
  ptr->push_back(c.ptr);
  std::cout << ptr->size() << '\n';

  //std::cout << c.name <<'\n' << &c << '\n'; 
};

int main(){
  bool banking = true;
  foreignCurrency Colombia, Brazil, Peru;
  std::vector<foreignCurrency*> V;
  usdBank myBank;
  currencyCreate(Colombia, "Colombian Peso", 0.00024, &V);
  //currencyCreate(Brazil, "Brazilian Reais",0.17);
  //currencyCreate(Peru, "Peruvian Soles",0.27);
  std::cout << V[0]->name << '\n';
  
  //std::cout << myBank.usd;
  //std::cout << &Brazil << " in Main"; //address matches inside function




};
