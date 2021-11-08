// 
//  Author : Isaiah Ebert
//  Program : HW3, Q1
//  Date Created : November 7, 2021
//  Date Last Modified : November 7, 2021
//  Usage : No command line arguments

//  Problem:
// Create three new classes that are children of Person. One should be a 
// Grandchild of Person.
// Demonstrate these classes in a main function.
//


//Main Program//

#include <iostream>
#include "Person.h"
#include "Customer.h"
#include "Worker.h"
#include "Boss.h"


using namespace std;


void main(){
    Person p1("Person", "Person", 12, 3, 4567);
    cout << p1.getName() << " born on: " << p1.getBirthdate() << endl;

    Worker w1("Worker", "Guy", 11, 1, 1111, 11111.11);
    cout << w1.getName() << " born on: " << w1.getBirthdate() << endl;
    cout << "Their current salary is: " << w1.getSalary() << endl;

    Boss b1("Boss", "Dude", 22, 2, 2222, 22222.22, 2);
    cout << b1.getName() << " born on: " << b1.getBirthdate() << endl;
    cout << "Their current salary is: " << b1.getSalary() << endl;
    cout << "They currently have " << b1.getWorkers() << " people working under them." << endl;
    b1.hireWorkers(7);
    cout << "They currently have " << b1.getWorkers() << " people working under them." << endl;
    b1.hireWorkers(22);

    Customer c1("Customer", "Being", 30, 3, 3333, 333);
    cout << c1.getName() << " born on: " << c1.getBirthdate() << endl;
    cout << "They currently have " << c1.getMoney() << "$" << endl;
    c1.BuyStuff();
    c1.BuyStuff();


}