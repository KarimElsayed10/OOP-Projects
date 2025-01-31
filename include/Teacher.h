#ifndef TEACHER_H
#define TEACHER_H
#include<Person.h>
#include <iostream>
using namespace std;
class Teacher:public Person
{
private:
    int teacherID;
    string subject;
    float salary;
public:
    void setTeacherId(int teacherID);
    void setSubject(string subject);
    void setSalary(float salary);
    int getTeacherID();
    string getSubject();
    float getSalary();
    Teacher();
    Teacher(int teacherID,string subject,float salary);
    Teacher(string name,int age,string gender,string address,string phoneNumber,
            string email,int teacherID,string subject,float salary);
            void print();
            void input(string name,int age,string gender,string address,string phoneNumber,
            string email,int teacherID,string subject,float salary);
    virtual ~Teacher();

protected:


};

#endif // TEACHER_H
