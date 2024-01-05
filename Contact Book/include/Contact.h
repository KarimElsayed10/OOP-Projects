#ifndef CONTACT_H
#define CONTACT_H
#include <PhoneNumber.h>
#include <iostream>
#include <string>
using namespace std;
class Contact
{
private:
    int id,phoneCount;
    string firstName,lastName,e_mail,city,gender;
    PhoneNumber* phones;
public:
    Contact();
    Contact(string firstName,string lastName,int id,string e_mail,string gender,string city);
    void input();
    void print();
    void setId(int id);
    void setGender(string gender);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setE_Mail(string e_mail);
    void setCity(string city);
    int getId();
    string getGender();
    string getFirstName();
    string getLastName();
    string getE_Mail();
    string getCity();
    virtual ~Contact();
};

#endif // CONTACT_H
