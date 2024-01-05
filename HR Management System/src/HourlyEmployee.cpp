#//Kian Academy
#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee()
{

}

void HourlyEmployee::ReadHourlyEmployeeData()
{
    readEmployeeData();
    cout<<"Enter Employee's hours worked: ";
    cin>>hoursWorked;
    cout<<endl;
    cout<<"Enter Employee's rate: ";
    cin>>rate;
    cout<<endl;
    Salary=hoursWorked*rate;
}

void HourlyEmployee::addHours(double moreHours)
{
    hoursWorked+=moreHours;
    Salary=hoursWorked*rate;
}

double HourlyEmployee::getHoursWorked()
{
    return hoursWorked;
}

double HourlyEmployee::getRate()
{
    return rate;
}

void HourlyEmployee::setRate(double newRate)
{
    rate=newRate;
    Salary=rate*hoursWorked;
}

string HourlyEmployee::getDetails()
{
    ostringstream details;
    details<<DisplayDetails();
    details<<"Employee's rate: "<<rate<<" and his hours worked is "<<hoursWorked<<endl;
    return details.str();
}

double HourlyEmployee::getSalary()
{
    return rate*hoursWorked;
}

HourlyEmployee::~HourlyEmployee()
{

}
