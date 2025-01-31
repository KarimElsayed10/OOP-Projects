#include "Course.h"
#include <iostream>
using namespace std;
Course::Course()
{

}

Course::~Course()
{

}
void Course::setCourseCode(string courseCode)
{
    this->courseCode=courseCode;
}
void Course::setCourseName(string courseName)
{
    this->courseName=courseName;
}
void Course::setTeacherName(string teacherName)
{
    this->teacherName=teacherName;
}
string Course::getCourseCode()
{
    return courseCode;
}
string Course::getCourseName()
{
    return courseName;
}
string Course::getTeacherName()
{
    return teacherName;
}
Course::Course(string courseCode,string courseName,string teacherName)
{
    this->courseCode=courseCode;
    this->courseName=courseName;
    this->teacherName=teacherName;
}
void Course::print()
{
    cout<<"The Course Code is : "<<courseCode<<endl;
    cout<<"The Course Name is : "<<courseName<<endl;
    cout<<"The Teacher Name is : "<<teacherName<<endl;
}
void Course::input(string courseCode,string courseName,string teacherName)
{
    this->courseCode=courseCode;
    this->courseName=courseName;
    this->teacherName=teacherName;
}
