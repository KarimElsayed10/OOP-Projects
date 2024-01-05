#include "Contact.h"
#include <PhoneNumber.h>
#include <iostream>
#include <string>
using namespace std;
Contact::Contact()
{
    phones=new PhoneNumber[100];
    phoneCount=0;
}
Contact::Contact(string firstName,string lastName,int id,string e_mail,string gender,string city)
{
    this->firstName=firstName;
    this->lastName=lastName;
    this->id=id;
    this->e_mail=e_mail;
    this->gender=gender;
    this->city=city;

}
void Contact::input()
{
    cout<<"\n.......CREATE NEW PHONE RECORD........."<<endl;
    cout<<"Enter Record First Name   : "<<endl;
    cin>>firstName;
    cout<<"Enter Record Last Name   : "<<endl;
    cin>>lastName;
    cout<<"Enter your id Number : "<<endl;
    cin>>id;
    cout<<"Enter E-Mail : "<<endl;
    cin>>e_mail;
    cout<<"Enter Record Gender  : "<<endl;
    cin>>gender;
    cout<<"Enter Record City  : "<<endl;
    cin>>city;
    string phone,type;
    cout<< "Enter Your PHONE NUMBER :"<<endl;
    cin>>phone;
    cout<< "Enter PHONE NUMBER TYPE :"<<endl;
    cin>>type;
    PhoneNumber *new_phone =new PhoneNumber(phone,type);
    phones[phoneCount]=*new_phone;
    phoneCount++;
    cout<<"\nRecord Saved to File......"<<endl<<endl<<endl<<endl;
}
void Contact::print()
{
    cout<<"First Name is : "<<firstName<<endl;
    cout<<"Last Name  is : "<<lastName<<endl;
    cout<<"ID is : "<<id<<endl;
    cout<<"Email is : "<<e_mail<<endl;
    cout<<"Gender is : "<<gender<<endl;
    cout<<"City is : "<<city<<endl;
    cout<<"\tPHONE LIST: "<<endl;
    for (int i=0; i<phoneCount; ++i)
    {
        cout<<"\t"<<i+1<< " - ";
        phones[i].print();
    }
}
void Contact::setId(int id)
{
    this->id=id;
}
void Contact::setGender(string gender)
{
    this->gender=gender;
}
void Contact::setFirstName(string firstName)
{
    this->firstName=firstName;
}
void Contact::setLastName(string lastName)
{
    this->lastName=lastName;
}
void Contact::setE_Mail(string e_mail)
{
    this->e_mail=e_mail;
}
void Contact::setCity(string city)
{
    this->city=city;
}
int Contact::getId()
{
    return id;
}
string Contact::getGender()
{
    return gender;
}
string Contact::getFirstName()
{
    return firstName;
}
string Contact::getLastName()
{
    return lastName;
}
string Contact::getE_Mail()
{
    return e_mail;
}
string Contact::getCity()
{
    return city;
}
Contact::~Contact()
{
    delete[] phones;
}
