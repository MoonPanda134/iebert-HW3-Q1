#include "Worker.h"
using std::string;

Worker::Worker()
{
    Fname = "";
    Lname = "";
    birthDay = 1;
    birthMonth = 1;
    birthYear = 1;
    salary = 100.00;
}

Worker::Worker(string first, string last, int day, int month, int year, double pay){
    Fname = first;
    Lname = last;
    birthDay = day;
    birthMonth = month;
    birthYear = year;
    salary = pay;
}

double Worker::getSalary(){
    return salary;
}

void Worker::setSalary(double pay){
    salary = pay;
}