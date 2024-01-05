#include <iostream>
using namespace std;

#ifndef STAFFMEMBER_H
#define STAFFMEMBER_H

#include <Department.h>


class StaffMember : public Department
{
public:
    StaffMember(int id,string n,string p,string e);
    StaffMember();
    void getData();
    void print();
    int getEmployeeId();
    virtual double pay();
    ~StaffMember();

private:
    int employeeID;
    string name,phone,email;
};

#endif
