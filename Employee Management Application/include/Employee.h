#include <iostream>
using namespace std;

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <StaffMember.h>


class Employee : public StaffMember
{
public:
    Employee();
    Employee(string s);
    virtual ~Employee();
    void getData();
    void print();
    virtual double pay();

protected:
    string socialSecurityNumber;

private:
};

#endif // EMPLOYEE_H
