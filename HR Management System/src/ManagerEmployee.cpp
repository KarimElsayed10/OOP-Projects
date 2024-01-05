#include "ManagerEmployee.h"

ManagerEmployee::ManagerEmployee()
{

}


void ManagerEmployee::ReadManagerEmployeeData()
{
    ReadSalariedEmployeeData();
    cout<<"Enter Employee's bonus: ";
    cin>>bonus;
    cout<<endl;
    Bonus=bonus;
}

void ManagerEmployee::addBouns( double moreBonus )
{
    bonus+=moreBonus;
    Bonus+=moreBonus;
}

double ManagerEmployee::getBonus()
{
    return bonus;
}

string ManagerEmployee::getDetails()
{
    ostringstream details;
    details<<DisplayDetails();
    details<<"Employee's salary is : "<<salary<<" and bonus is "<<bonus<<endl;
    return details.str();
}

double ManagerEmployee::getSalary()
{
    return salary+bonus;
}

ManagerEmployee::~ManagerEmployee()
{
}

