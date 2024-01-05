#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "Employee.h"

class SalariedEmployee: public Employee
{
public:
    double salary;
    SalariedEmployee();
    string getDetails();
    void ReadSalariedEmployeeData();
    double getSalary();
};

#endif // SALARIEDEMPLOYEE_H
