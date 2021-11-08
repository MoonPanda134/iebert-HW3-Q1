#include "Customer.h"
#include <iostream>
using std::string;

Customer::Customer()
{
    Fname = "";
    Lname = "";
    birthDay = 1;
    birthMonth = 1;
    birthYear = 1;
    money = 1;
    canBuy = buy();
}

Customer::Customer(string first, string last, int day, int month, int year, double mon){
    Fname = first;
    Lname = last;
    birthDay = day;
    birthMonth = month;
    birthYear = year;
    money = mon;
    canBuy = buy();
}

bool Customer::buy(){
    if(money > 0)
        return true;
    else
        return false;
}

double Customer::getMoney(){
    return money;
}

void Customer::setMoney(double mon){
    money = mon;
}

void Customer::BuyStuff(){
    if (canBuy == true){
        std::cout << "\nThis customer buys stuff!" << std::endl;
        money -= money;
        std::cout << "They spent all of their money!" << std::endl;
        canBuy = buy();
    }
    else{
        std::cout << "\nThis customer doesn't have money!" << std::endl;
    }
}