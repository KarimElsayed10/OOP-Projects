#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include <bits/stdc++.h>
#include "Employee.h"
using namespace std;
class HourlyEmployee: public Employee
{
private:
    double hoursWorked;
    double rate;
public:
    HourlyEmployee();
    ~HourlyEmployee();
    void addHours(double moreHours);
    double getHoursWorked();
    double getRate();
    void setRate(double rate);
    void ReadHourlyEmployeeData();
    string HourlyEmployeeDisplayDetails();
    string getDetails();
    double getSalary();
};

#endif // HOURLYEMPLOYEE_H
