#include <StaffMember.h>
#include <iostream>
using namespace std;

#ifndef STAFF_H
#define STAFF_H


class Staff
{
public:
    Staff();
    void addMember();
    void deleteMember(int staff_id);
    void showAll();
    ~Staff();

private:
    StaffMember *staffList;
    int counter,listSize;

};

#endif
