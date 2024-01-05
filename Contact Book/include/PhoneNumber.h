#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include <iostream>
#include <string>

using namespace std;

class PhoneNumber
{
private:
    string phone;
    string type;
public:
    PhoneNumber();
    PhoneNumber(string phone,string type);
    ~PhoneNumber();
    void setPhone(string ph);
    void setType(string ty);
    void information();
    void print();
    string getPhone();
    string getType();
};

#endif // PHONENUMBER_H
