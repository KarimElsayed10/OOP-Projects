#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include "Employee.h"
class CommissionEmployee: public Employee
{
public:
    double rate;
    double target;
    CommissionEmployee();
    ~CommissionEmployee();
    string getDetails();
    double getSalary();
    void ReadCommissionEmployeeData();
};
#endif // COMMISSIONEMPLOYEE_H
