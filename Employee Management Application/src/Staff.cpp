#include "Staff.h"

Staff::Staff()
{
    counter = 0;
    listSize = 5;
    staffList = new StaffMember[listSize];
}

Staff::~Staff()
{
    delete []staffList;
}
void Staff::addMember()
{
    StaffMember *new_staff = new StaffMember();
    new_staff->getData();
    staffList[counter++] = *new_staff;
}
void Staff::deleteMember(int staff_id)
{
    if(counter==0)
    {
        cout<<"NO Member Exist~!\n";
        return ;
    }
    bool deleted=false;
    for(int i=0; i<counter; ++i)
    {
        if(staffList[i].getEmployeeId()==staff_id)
        {
            if(i==counter-1)
            {
                counter--;
            }
            else
            {
                staffList[i]= staffList[counter-1];
                counter--;
            }
            deleted = true;
            break;
        }
    }
    if(deleted)
    {
        cout<<"Member Deleted Successfully!\n";
    }
    else
    {
        cout<<"NO Member Exist\n";
    }
}
void Staff::showAll()
{
    if(counter==0)
    {
        cout<< "NO Member Found!\n";
        return;
    }
    for(int i=0; i<counter; ++i)
    {
        staffList[i].print();
    }
}
