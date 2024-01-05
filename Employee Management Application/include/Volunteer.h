#include <iostream>
using namespace std;

#ifndef VOLUNTEER_H
#define VOLUNTEER_H

#include <StaffMember.h>


class Volunteer : public StaffMember
{
    public:
        Volunteer();
        virtual ~Volunteer();
        void setAmount();
        void print();
        double pay();


    private:
        double amount;
};

#endif // VOLUNTEER_H
