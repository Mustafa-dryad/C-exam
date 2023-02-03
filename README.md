# C-exam

# Steps

1. Fill in each gap with code logic and then we can evaluate indivisual sections later
2. compare with the solutions if necessary.
3. Try using google to solve the errors.
4. **Relax** and **dont stress** Take it slow and Just make a note of the errors
5. **DO NOT CRY**


# Task description

he topic of this problem is classes and exception handling. The class Snack is given with the corresponding  member functions as show below. Implement a task only in the corresponding cpp file (task1 in task1.cpp task2 in task2.cpp, and so on). Implementations in the wrong cpp file will not be graded! If you want to test your source code you can modify the provided main.cpp. Attention the source code already compiles, however the functions are not yet implemented correctly.

## Task 1 (1.5 Points):

Define the public function void Snack::set_name(std::string):
 If the string passed to the function is empty, an exception is to be thrown (type: std::invalid_argument), with "Name cannot be empty" as its argument. Otherwise the value is to be assigned to the proper class member variable, name_.


## Task 2 (2.5 Points):

Define the parameterized constructor: Snack(std::string name, float price, bool expired):
Provide a try-catch block as part of the constructor. Inside the try block, the function set_name( ) is to be called with the argument name. In the catch block, rethrow the exception with throw.
After the try-catch block, if the value passed by price is smaller than 0, price_ should be set to price times -2. In all other cases price_ becomes price. 
The member variable expr_ should be assigned the value of expired.

## Task 3 (3 Points):

Define the public function int Snack::set_price(float price) :
If the value passed by price is smaller than 0 the function should return -2.
If the value of price is greater or equal to 0, proceed as follows:

    If the value passed by price is smaller than the current value of price_,  the function should assign price to price_  and return -1.
    If the value passed by price is larger than the current value of price_, the function should assign price to price_  and return 1.
    If price is equal to price_,  the function should assign price to price_  and return 0.

## Task 4 (1 Point):

Define the public function: bool Snack::set_expired(bool exp) :
The function should check if  expr_  is equal to exp.

    If this is the case it sets the member variable expr_ to the value of expr and returns true as a change of the value happened.
    If this is not the case it sets the member variable expr_ to the value of expr and returns false.


## Task 5 (5 Point):

  Additionally a function working with Snack objects that are stored using a vector should be implemented. It has the following signature: void SortByPrice(std::vector<Snack>& list_ref, bool asc).
This function should sort the vector list_ref  based on the price_ of the Snacks. The sorting should be done in the following order:

    Ascending  if asc is true
    Descending if asc is false. 

In both cases if variables have the same value for price_, the sorting should be done based on the name_ in ascending order.

## Task 6 (2 Point):

  Implement the function int Snack::how_many_for_ten(double &change) const :
It should return the amount of Snacks you can buy for 10.00 Euro, however, rounding should not be applied. So if your calculation returns a value of 1.3, the function should return 1.  Using the reference variable change the money that remains from 10 Euro when the calculated amount of Snack is bought should be stored.
