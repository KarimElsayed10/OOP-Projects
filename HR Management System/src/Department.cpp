#//Kian Academy
#include "Department.h"

Department::Department()
{
    Employees=new Employee[100];
}

Department::Department(int ID,string name)
{
    departID=ID;
    departName=name;
}

int Department::getID()
{
    return departID;
}

void Department::setID(int ID)
{
    departID=ID;
}
string Department::getName()
{
    return departName;
}

void Department::setName(string name)
{
    departName=name;
}
void Department::Print()
{
    cout<<"Department Name is: "<<departName<<endl;
    cout<<"Department ID is: "<<departID<<endl;
    cout<<"Department Employee are :"<<endl;
    for(int index=0; index<NumOfEmp; index++)
    {
        cout<<"Employee number "<<index+1<<" his name is "<<Employees[index].getName()<<" and his ID is "<<Employees[index].getID()<<endl;
    }
}

Department::~Department()
{
    delete Employees;
}
