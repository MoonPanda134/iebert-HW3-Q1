#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Person.h"

class Customer: public Person{
    public:
    Customer();
    Customer(std::string first, std::string last, int year, int day, int month, double mon);

    double getMoney();
    void setMoney(double mon);

    bool buy();
    void BuyStuff();

    private:
    double money;
    bool canBuy;
};

#endif //CUSTOMER_H