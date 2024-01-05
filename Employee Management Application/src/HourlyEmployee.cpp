#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee()
{
    hoursWorked = 0;
    rate = 0;
}
HourlyEmployee::HourlyEmployee(double h,double r)
{
    hoursWorked = h;
    rate = r;
}

HourlyEmployee::~HourlyEmployee()
{

}
void HourlyEmployee::getData()
{
    Employee::getData();
    cout<<"Inter hours worked : ";
    cin>>hoursWorked;
    cout<<endl;
    cout<<"Inter rate : ";
    cin>>rate;
    cout<<endl;
}
void HourlyEmployee::print()
{
    Employee::print();
    cout<<"Hours worked : "<<hoursWorked<<endl;
    cout<<"Rate : "<<rate<<endl;
}
void HourlyEmployee::addHours(int moreHours)
{
    hoursWorked+=moreHours;
}
double HourlyEmployee::pay()
{
    return rate*hoursWorked;
}
