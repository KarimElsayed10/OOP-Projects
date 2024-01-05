#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee()
{
    target = 0.0;
}
CommissionEmployee::CommissionEmployee(double t)
{
    target = t;
}
CommissionEmployee::~CommissionEmployee()
{

}
void CommissionEmployee::getData()
{
    Employee::getData();
    cout<<"Inter target : ";
    cin>>target;
    cout<<endl;
}
void CommissionEmployee::print()
{
    Employee::print();
    cout<<"Target : "<<target<<endl;
}
double CommissionEmployee::pay()
{
    return (5/100.0)*(target);
}

