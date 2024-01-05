#include "PhoneNumber.h"
#include <iostream>
#include <string>
using namespace std;
PhoneNumber::PhoneNumber()
{
}
PhoneNumber::PhoneNumber(string phone,string type)
{
    setPhone(phone);
    setType(type);
}
PhoneNumber::~PhoneNumber()
{
}
void PhoneNumber::information()
{
    cout<<"Enter Your Phone : ";
    cin>>phone;
    cout<<endl;
    cout<<"Enter Your Phone Type : ";
    cin>>type;
    cout<<endl;
}
void PhoneNumber::print()
{
    cout<<"PHONE : "<<phone<<"\t | "<<type<<endl;
}
void PhoneNumber::setPhone(string phone)
{
    this->phone = phone;
}

string PhoneNumber::getPhone()
{
    return phone;
}

void PhoneNumber::setType(string type)
{
    this->type = type;
}

string PhoneNumber::getType()
{
    return type;
}
