#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include <iostream>
using namespace std;
class PhoneNumber
{
private:
    string phone;
    string type;
public:
    void setPhone(string phone)
    {
        this->phone=phone;
    }
    void setType(string type)
    {
        this->type=type;
    }
    string getPhone()
    {
        return phone;
    }
    string getType()
    {
        return type;
    }
    PhoneNumber()
    {

    }
    PhoneNumber(string phone,string type)
    {
        this->phone=phone;
        this->type=type;
    }
    void information()
    {
        cout<<"Please Enter Phone Number"<<endl;
        cin>>phone;
        cout<<"Please Enter Phone Type(home - work - mobile)"<<endl;
        cin>>type;
    }
    void print()
    {
        cout<<"The Phone Number Is : "<<phone<<endl;
        cout<<"The Phone Type Is : "<<type<<endl;
    }
};

#endif // PHONENUMBER_H
