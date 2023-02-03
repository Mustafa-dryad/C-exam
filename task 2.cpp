#include "snack.h"
#include <string>
#include <iostream>



Snack::Snack(std::string name, float price, bool expired)
{
//try code here 
}
 
 
 
 
/*

Solution
#include<stdexcept>

try{
        set_name(name);
    }catch(const invalid_argument e){
        throw e;
        
    }
    if(price<0){
        price_=price*-2;
    }else{
        price_=price;
    }
    expr_=expired;
+/
