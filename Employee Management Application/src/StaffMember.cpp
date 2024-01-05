#include "StaffMember.h"
#include <iostream>
using namespace std;
StaffMember::StaffMember()
{
    employeeID = 0;
    name = "UNKNOWN";
    phone = "UNKNOWN";
    email = "UNKNOWN";
}
StaffMember::StaffMember(int id,string n,string p,string e)
{
    employeeID = id;
    name = n;
    phone = p;
    email = e;
}
StaffMember::~StaffMember()
{

}
void StaffMember::getData()
{
    cout<<"Inter member id : ";
    cin>>employeeID;
    cout<<endl;
    cout<<"Inter member name : ";
    cin>>name;
    cout<<endl;
    cout<<"Inter member phone : ";
    cin>>phone;
    cout<<endl;
    cout<<"Inter member email : ";
    cin>>email;
    cout<<endl;
}
int StaffMember::getEmployeeId()
{
    return employeeID;
}
void StaffMember::print()
{
    cout<<"Member id : "<<employeeID<<endl;
    cout<<"Member Name : "<<name<<endl;
    cout<<"Member Phone : "<<phone<<endl;
    cout<<"Member Email : "<<email<<endl;
}
double StaffMember::pay()
{

}
