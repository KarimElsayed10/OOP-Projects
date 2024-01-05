#include "Department.h"

Department::Department()
{

    departID = 0;
    departName = "UNKNOWN";
}

Department::~Department()
{

}
void Department::departDetails()
{
    cout<<"Inter depart id : ";
    cin>>departID;
    cout<<endl;
    cout<<"Inter depart name : ";
    cin>>departName;
    cout<<endl;
}
void Department::printDetails()
{
    cout<<"Depart id : "<<departID<<endl;
    cout<<"Depart name : "<<departName<<endl;
}
