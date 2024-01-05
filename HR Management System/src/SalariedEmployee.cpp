#//Kian Academy
#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee()
{

}

void SalariedEmployee::ReadSalariedEmployeeData()
{
    readEmployeeData();
    cout<<"Enter Employee's salary: ";
    cin>>salary;
    cout<<endl;
    Salary=salary;
}

string SalariedEmployee::getDetails()
{
    ostringstream details;
    details<<DisplayDetails();
    details<<"Employee's salary is : "<<salary<<endl;
    return details.str();
}

double SalariedEmployee::getSalary()
{
    return salary;
}
