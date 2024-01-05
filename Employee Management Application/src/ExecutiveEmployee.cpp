#include "ExecutiveEmployee.h"

ExecutiveEmployee::ExecutiveEmployee()
{
    bonus = 0;
}
ExecutiveEmployee::ExecutiveEmployee(double b)
{
    bonus = b;
}
ExecutiveEmployee::~ExecutiveEmployee()
{

}
void ExecutiveEmployee::getData()
{
    SalariedEmployee::getData();
    cout<<"Inter bonus : ";
    cin>>bonus;
    cout<<endl;
}
void ExecutiveEmployee::print()
{
    SalariedEmployee::print();
    cout<<"Bonus : "<<bonus<<endl;
}
void ExecutiveEmployee::addBonus(double moreBonus)
{
    bonus+=moreBonus;
}
double ExecutiveEmployee::pay()
{
    return salary+bonus;
}
