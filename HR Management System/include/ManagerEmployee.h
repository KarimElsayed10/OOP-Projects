#ifndef MANAGEREMPLOYEE_H
#define MANAGEREMPLOYEE_H
#include "SalariedEmployee.h"
class ManagerEmployee: public SalariedEmployee
{
private:
    double bonus;
public:
    void ReadManagerEmployeeData();
    ManagerEmployee();
    ~ManagerEmployee();
    void addBouns(double moreBonus);
    double getBonus();
    string getDetails();
    double getSalary();
};

#endif // MANAGEREMPLOYEE_H
