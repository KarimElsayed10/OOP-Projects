#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include <PhoneNumber.h>
using namespace std;
class Contact
{
private:
    int id;
    string name;
    string gender;
    string city;
    string note;
    PhoneNumber phones[4];
    int x;
public:
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    string getGender()
    {
        return gender;
    }
    string getCity()
    {
        return city;
    }
    string getNote()
    {
        return note;
    }
    void setID(int id)
    {
        this->id=id;
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setGender(string gender)
    {
        this->gender=gender;
    }
    void setCity(string city)
    {
        this->city=city;
    }
    void setNote(string note)
    {
        this->note=note;
    }
    Contact()
    {

    }
    Contact(int id,string name,string gender,string city,string note)
    {
        this->id=id;
        this->name=name;
        this->gender=gender;
        this->city=city;
        this->note=note;
    }
    void information()
    {
        cout<<"Please Enter Your ID : "<<endl;
        cin>>id;
        cout<<"Please Enter Your Name : "<<endl;
        cin>>name;
        cout<<"Please Enter Your Gender : "<<endl;
        cin>>gender;
        cout<<"Please Enter Your City : "<<endl;
        cin>>city;
        cout<<"Please Enter Your Note : "<<endl;
        cin>>note;
        cout<<"Please Enter Number Of Phones From(1 - 4)"<<endl;
        cin>>x;
        for(int i=0; i<x; i++)
        {
            phones[i].information();
        }
    }
    void print()
    {
        cout<<"The ID IS : "<<id<<endl;
        cout<<"The Name IS : "<<name<<endl;
        cout<<"The Gender IS : "<<gender<<endl;
        cout<<"The City IS : "<<city<<endl;
        cout<<"The Note IS : "<<note<<endl;
        for(int i=0; i<x; i++)
        {
            phones[i].print();
        }
    }
};

#endif // CONTACT_H
