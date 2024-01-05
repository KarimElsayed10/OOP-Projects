#include <iostream>
using namespace std;

#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include <Employee.h>


class CommissionEmployee : public Employee
{
    public:
        CommissionEmployee();
        CommissionEmployee(double t);
        virtual ~CommissionEmployee();
        void getData();
        void print();
        double pay();

    private:
        double target;
};

#endif // COMMISSIONEMPLOYEE_H
