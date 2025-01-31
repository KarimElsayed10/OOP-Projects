#include "Person.h"
#include <iostream>
using namespace std;

Person::Person()
{
//cout<<"default constructor in person class"<<endl;
} Person::~Person()
{
  //  cout<<"default destructor in person class"<<endl;
}
Person::Person(string name,int age,string gender,string address,string phoneNumber,string email)
{
    //cout<<"parametrize constructor in person class"<<endl;
    this->name=name;
    this->age=age;
    this->gender=gender;
    this->address=address;
    this->phoneNumber=phoneNumber;
    this->email=email;
}
void Person::input(string name,int age,string gender,string address,string phoneNumber
                   ,string email)
{
    this->name=name;
    this->age=age;
    this->gender=gender;
    this->address=address;
    this->phoneNumber=phoneNumber;
    this->email=email;
}
void Person::print()
{
    cout<<"the Name is : "<<name<<endl;
    cout<<"the Age is : "<<age<<endl;
    cout<<"the Gender is : "<<gender<<endl;
    cout<<"the Address is : "<<address<<endl;
    cout<<"the Phone Number is : "<<phoneNumber<<endl;
    cout<<"the Email is : "<<email<<endl;
}
void Person::setName(string name)
{
    this->name=name;
}
void Person::setAge(int age)
{
    this->age=age;
}
void Person::setGender(string gender)
{
    this->gender=gender;
}
void Person::setAddress(string address)
{
    this->address=address;
}
void Person::setPhoneNumber(string phoneNumber)
{
    this->phoneNumber=phoneNumber;
}
void Person::setEmail(string email)
{
    this->email=email;
}
string Person::getName()
{
    return name;
}
int Person::getAge()
{
    return age;
}
string Person::getGender()
{
    return gender;
}
string Person::getAddress()
{
    return address;
}
string Person::getPhoneNumber()
{
    return phoneNumber;
}
string Person::getEmail()
{
    return email;
}
