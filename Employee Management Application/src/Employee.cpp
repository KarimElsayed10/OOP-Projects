#include "Employee.h"

Employee::Employee()
{
    socialSecurityNumber = " ";
}
Employee::Employee(string s)
{
    socialSecurityNumber = s;
}
Employee::~Employee()
{

}
void Employee::getData()
{
    StaffMember::getData();
    cout<<"Inter social security number : ";
    cin>>socialSecurityNumber;
    cout<<endl;
}
void Employee::print()
{
    StaffMember::print();
    cout<<"Social security number : "<<socialSecurityNumber<<endl;
}
double Employee::pay()
{

}
