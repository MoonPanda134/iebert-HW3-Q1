#ifndef BOSS_H
#define BOSS_H

#include "Worker.h"

class Boss:public Worker {
    public:
    Boss();
    Boss(std::string first, std::string last, int year, int day, int month, double pay, int worker);
    
    int getWorkers();
    void setWorkers(int worker);

    void hireWorkers(int worker);

    private:
    int workers;
};


#endif //BOSS_H