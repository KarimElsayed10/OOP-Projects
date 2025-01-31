#include "Student.h"
#include<Person.h>
#include <iostream>
using namespace std;Student::Student()
{
    // cout<<"default constructor in student class"<<endl;
}

Student::~Student()
{
//cout<<"default destructor in student class"<<endl;
}
Student::Student(int studentId,float gpa,string grade)
{
    // cout<<"parametrize constructor in student class"<<endl;
    this->studentId=studentId;
    this->gpa=gpa;
    this->grade=grade;
}
Student::Student(string name,int age,string gender,string address
                 ,string phoneNumber,string email
                 ,int studentId,float gpa,string grade)
    :Person(name,age,gender,address,phoneNumber,email)
{
    this->studentId=studentId;
    this->gpa=gpa;
    this->grade=grade;
}
void Student::input(string name,int age,string gender,string address,string phoneNumber,string email
                    ,int studentId,float gpa,string grade)
{
    Person::input(name,age,gender,address,phoneNumber,email);
    this->studentId=studentId;
    this->gpa=gpa;
    this->grade=grade;
}
void Student::print()
{
    Person::print();
    cout<<"the Student Id is : "<<studentId<<endl;
    cout<<"the GPA is : "<<gpa<<endl;
    cout<<"the Grade is : "<<grade<<endl;

}
void Student::setStudentId(int studentId)
{
    this->studentId=studentId;
}
void Student::setGPA(float gpa)
{
    this->gpa=gpa;
}
void Student::setGrade(string grade)
{
    this->grade=grade;
}
int Student::getStudentId()
{
    return studentId;
}
float Student::getGPA()
{
    return gpa;
}
string Student::getGrade()
{
    return grade;
}

