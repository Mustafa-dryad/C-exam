#include <iostream>
using namespace std;

#include "snack.h"

int main(){
   Snack snicker=Snack("Snickers",2.0,false);
   std::cout<<snicker.name()<<" "<<snicker.price()<<" "<<snicker.expired()<<std::endl;
   Snack twix=Snack("Twix",3.0,false);
   std::cout<<twix.name()<<" "<<twix.price()<<" "<<twix.expired()<<std::endl;
   Snack mars=Snack("Mars",1.5,false);
   std::cout<<mars.name()<<" "<<mars.price()<<" "<<mars.expired()<<std::endl;
   Snack oreo=Snack("Oreo",-1.5,false);
   std::cout<<oreo.name()<<" "<<oreo.price()<<" "<<oreo.expired()<<std::endl;
   std::vector<Snack> snack_list;
   snack_list.push_back(snicker);
   snack_list.push_back(twix);
   try {
           snicker.set_name("Rider");
   }
   catch (std::exception &e)
   {
           std::cout << e.what() << std::endl;
   }
   try {
       Snack newsnack=Snack("",2.0,false);
   }
   catch (std::exception &e)
   {
           std::cout << e.what() << std::endl;
   }
   std::cout<<mars.set_price(-1.0)<<" "<<mars.price()<<std::endl;
   std::cout<<mars.set_price(1.5)<<" "<<mars.price()<<std::endl;
   std::cout<<mars.set_price(1.0)<<" "<<mars.price()<<std::endl;
   std::cout<<mars.set_price(1.5)<<" "<<mars.price()<<std::endl;
   mars.set_expired(true);std::cout<<mars.expired()<<std::endl;
   snack_list.push_back(mars);
   snack_list.push_back(oreo);
   SortByPrice(snack_list,1);
   for(int i=0;i<snack_list.size();i++){
       std::cout<<snack_list.at(i).name()<<" "<<snack_list.at(i).price()<<" "<<snack_list.at(i).expired()<<", ";
   }
   std::cout<<std::endl;
   SortByPrice(snack_list,false);
   for(int i=0;i<snack_list.size();i++){
       std::cout<<snack_list.at(i).name()<<" "<<snack_list.at(i).price()<<" "<<snack_list.at(i).expired()<<", ";
   }
   std::cout<<std::endl;
   double change=0.0;
   std::cout<<mars.how_many_for_ten(change)<<" "<<change<<std::endl;
   return 0;
}
