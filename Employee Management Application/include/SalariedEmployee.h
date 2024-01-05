#include <iostream>
using namespace std;

#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include <Employee.h>


class SalariedEmployee : public Employee
{
    public:
        SalariedEmployee();
        SalariedEmployee(double s);
        virtual ~SalariedEmployee();
        void getData();
        void print();
        virtual double pay();

    protected:
        double salary;
};

#endif // SALARIEDEMPLOYEE_H
