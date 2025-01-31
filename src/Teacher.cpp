#include "Teacher.h"
#include<Person.h>
#include <iostream>
using namespace std;
Teacher::Teacher()
{

}

Teacher::~Teacher()
{

}
void Teacher::setTeacherId(int teacherID)
{
    this->teacherID=teacherID;
}
void Teacher::setSubject(string subject)
{
    this->subject=subject;
}
void Teacher::setSalary(float salary)
{
    this->salary=salary;
}
int Teacher::getTeacherID()
{
    return teacherID;
}
string Teacher::getSubject()
{
    return subject;
}
float Teacher::getSalary()
{
    return salary;
}
Teacher::Teacher(int teacherID,string subject,float salary)
{
    this->teacherID=teacherID;
    this->subject=subject;
    this->salary=salary;
}
Teacher::Teacher(string name,int age,string gender,string address,string phoneNumber,
                 string email,int teacherID,string subject,float salary)
    :Person(name,age,gender,address,phoneNumber,email)
{

    this->teacherID=teacherID;
    this->subject=subject;
    this->salary=salary;
}
void Teacher::print()
{
    Person::print();
    cout<<"the teacher id is : "<<teacherID<<endl;
    cout<<"the Subject is : "<<subject<<endl;
    cout<<"the Salary is : "<<salary<<endl;

}
void Teacher::input(string name,int age,string gender,string address,string phoneNumber,
                    string email,int teacherID,string subject,float salary)
{
    Person::input(name,age,gender,address,phoneNumber,email);
    this->teacherID=teacherID;
    this->subject=subject;
    this->salary=salary;
}
