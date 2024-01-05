#include <iostream>
using namespace std;

#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include <Employee.h>


class HourlyEmployee : public Employee
{
public:
    HourlyEmployee();
    HourlyEmployee(double h,double r);
    virtual ~HourlyEmployee();
    void getData();
    void print();
    void addHours(int moreHours);
    double pay();

private:
    double hoursWorked,rate;
};

#endif // HOURLYEMPLOYEE_H
