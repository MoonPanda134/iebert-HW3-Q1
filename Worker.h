#ifndef WORKER_H
#define WORKER_H

#include "Person.h"

class Worker: public Person{
    public:
    Worker();
    Worker(std::string first, std::string last, int year, int day, int month, double pay);

    double getSalary();
    void setSalary(double pay);

    private:
    double salary;
};


#endif //WORKER_H