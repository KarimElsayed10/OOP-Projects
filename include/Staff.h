#ifndef STAFF_H
#define STAFF_H
#include<Person.h>
#include <iostream>
using namespace std;

class Staff:public Person
{
private:
    int staffID;
    string role;
    float salary;
public:
    void setStaffId(int staffID);
    void setRole(string role);
    void setSalary(float salary);
    int getStaffID();
    string getRole();
    float getSalary();
    Staff();
    Staff(int staffID,string role,float salary);
    Staff(string name,int age,string gender,string address,string phoneNumber
          ,string email,int staffID,string role,float salary);
          void print();
          void input();
    virtual ~Staff();

protected:


};

#endif // STAFF_H
