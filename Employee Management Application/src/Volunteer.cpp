#include "Volunteer.h"

Volunteer::Volunteer()
{
    amount = 0;
}

Volunteer::~Volunteer()
{

}
void Volunteer::setAmount()
{
    StaffMember::getData();
    cout<<"Inter the amount : ";
    cin>>amount;
    cout<<endl;
}
void Volunteer::print()
{
    StaffMember::print();
    cout<<"The amount : "<<amount<<endl;
}
double Volunteer::pay()
{
    return amount;
}
