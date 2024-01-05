#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee()
{
    salary = 0;
}
SalariedEmployee::SalariedEmployee(double s)
{
    salary = s;
}
SalariedEmployee::~SalariedEmployee()
{

}
void SalariedEmployee::getData()
{
    Employee::getData();
    cout<<"Inter salary : ";
    cin>>salary;
    cout<<endl;
}
void SalariedEmployee::print()
{
    Employee::print();
    cout<<"Salary : "<<salary<<endl;
}
double SalariedEmployee::pay()
{
    return salary;
}
