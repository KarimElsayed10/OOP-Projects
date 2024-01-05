#//Karim Elsayed
#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include "Employee.h"
class Department
{
private:
    int departID;
    string departName;
public:
    int NumOfEmp=0;
    Employee* Employees;
    Department();
    Department(int ID,string name);
    ~Department();
    int getID();
    string getName();
    void setID(int ID);
    void setName(string name);
    void Print();
};

#endif // DEPARTMENT_H
