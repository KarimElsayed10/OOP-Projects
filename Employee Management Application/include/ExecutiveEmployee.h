#include <iostream>
using namespace std;

#ifndef EXECUTIVEEMPLOYEE_H
#define EXECUTIVEEMPLOYEE_H

#include <SalariedEmployee.h>


class ExecutiveEmployee : public SalariedEmployee
{
public:
    ExecutiveEmployee();
    ExecutiveEmployee(double b);
    virtual ~ExecutiveEmployee();
    void getData();
    void print();
    void addBonus(double moreBonus);
    double pay();

private:
    double bonus;
};

#endif // EXECUTIVEEMPLOYEE_H
