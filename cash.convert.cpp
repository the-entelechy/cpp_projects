#include <iostream>
#include <string>
#include <vector>
struct foreignCurrency {
  std::string name;
  double currency;
  double convertedCurr;
  double conversionRate;
};

struct usdBank{
  double usd {0.00};
};
void currencyTracker(foreignCurrency &c){
// Prompt currency 
// Enter currency for each
// output total USD after converted
  std::cout << "Enter number of " << c.name << ":";
  std::cin >> c.currency;
  std::cout << "You Entered " << c.currency << " " << c.name << '\n';
  c.convertedCurr = c.currency * c.conversionRate;
  std::cout << "This is: $" << c.convertedCurr << '\n';
  std::cout << &c << '\n';
};

//get struct,name,currency
void currencyCreate(foreignCurrency &c, std::string n, double conv) {
  c.name = n;
  c.conversionRate = conv;
  //std::cout << c.name <<'\n' << &c << '\n'; 
};

int main(){
  foreignCurrency Colombia, Brazil, Peru;
  usdBank myBank;
  currencyCreate(Colombia, "Colombian Peso", 0.00024);
  currencyCreate(Brazil, "Brazilian Reais",0.17);
  currencyCreate(Peru, "Peruvian Soles",0.27);
  currencyTracker(Brazil);

  std::cout << &Brazil << " in Main"; //address matches inside function




};
