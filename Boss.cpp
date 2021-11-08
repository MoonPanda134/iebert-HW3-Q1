#include "Boss.h"
#include <iostream>
using std::string;

Boss::Boss()
{
    Fname = "";
    Lname = "";
    birthDay = 1;
    birthMonth = 1;
    birthYear = 1;
    salary = 100.00;
    workers = 1;
}

Boss::Boss(string first, string last, int day, int month, int year, double pay, int worker){
    Fname = first;
    Lname = last;
    birthDay = day;
    birthMonth = month;
    birthYear = year;
    salary = pay;
    workers = worker;
}

int Boss::getWorkers(){
    return workers;
}

void Boss::setWorkers(int worker){
    workers = worker;
}

void Boss::hireWorkers(int worker){
    if ((worker + workers) <= 10){
        workers += worker;
        std::cout << "\nThis Boss hires more workers!" << std::endl;
    }
    else{
        std::cout << "\nThis Boss already has enough workers!" << std::endl;
    }
}