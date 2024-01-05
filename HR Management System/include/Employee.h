#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <bits/stdc++.h>
#include "Benefit.h"
using namespace std;

class Employee
{
private:
    int NumOfBenfits=0;
    Benefit* BenefitList;
protected:
    double Salary=0;
    double Bonus=0;
    int empID;
    string name;
    string phone;
    string email;
    string jobTitle;
public:
    string type;
    string departName;
    int departID;
    Employee();
    ~Employee();
    void readEmployeeData();
    string DisplayDetails();
    int getID();
    string getType();
    string getName();
    string getPhone();
    void setPhone(string newPhone);
    string getEmail();
    void setEmail(string newEmail);
    string getJobTitle();
    void setJobTitle(string newJobTitle);
    virtual double getSalary();
    double calculatePay();
};


#endif // EMPLOYEE_H
