#include <string>
#include <iostream>
#include <vector>
class Snack{
public:
    Snack(std::string, float, bool);
    int set_price(float);
    void set_expired(bool);
    void set_name(std::string);
    std::string name() const{return name_;}
    float price() const{return price_;}
    bool expired() const{return expr_;}
    int how_many_for_ten();
private:
    std::string name_;
    float price_;
    bool expr_;
};
void SortByPrice(std::vector<Snack>&,bool);
