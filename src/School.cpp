#include "School.h"
#include <iostream>
using namespace std;
School::School()
{
    studentCounter=0;
    teacherCounter=0;
    classRoomCounter=0;
    staffCounter=0;
    courseCounter=0;
}

School::~School()
{

}
void School::addStudent(Student student)
{
    if(studentCounter<=99)
    {
        students[studentCounter++]=student;

    }
    else
    {
        cout<<"The Student School is Full"<<endl;
    }
}
void School::addTeacher(Teacher teacher)
{
    if(teacherCounter<=99)
    {
        teachers[teacherCounter]=teacher;
        teacherCounter++;//2
    }
    else
    {
        cout<<"The teacher in School is Full"<<endl;
    }
}
void School::addStaff(Staff staff)
{
    if(studentCounter<=99)
    {
        staffs[staffCounter]=staff;
        staffCounter++;//2
    }
    else
    {
        cout<<"The Staff in School is Full"<<endl;
    }
}
void School::addCourse(Course course)
{
    if(courseCounter<=99)
    {
        courses[courseCounter]=course;
        courseCounter++;//2
    }
    else
    {
        cout<<"The Couurses im School is Full"<<endl;
    }
}
void School::addClassRoom(Classroom classroom)
{
    if(classRoomCounter<=99)
    {
        classRooms[classRoomCounter]=classroom;
        classRoomCounter++;//2
    }
    else
    {
        cout<<"The Class Room in School is Full"<<endl;
    }
}
void School::setShoolName(string schoolName)
{
    this->schoolName=schoolName;
}
void School::setAddress(string address)
{
    this->address=address;
}
string School::getSchoolName()
{
    return schoolName;
}
string School::getAddress()
{
    return address;
}
School::School(string schoolName,string address)
{
    studentCounter=0;
    teacherCounter=0;
    classRoomCounter=0;
    staffCounter=0;
    courseCounter=0;
    this->schoolName=schoolName;
    this->address=address;
}
void School::print()
{
    cout<<"The School Name is : "<<schoolName<<endl;
    cout<<"The Address is : "<<address<<endl<<endl;
}
void School::input(string schoolName,string address)
{
    this->schoolName=schoolName;
    this->address=address;
}
void School::studentsInformation()
{
    for(int i=0; i<studentCounter; i++)
    {
        cout<<"The Student Number : "<<i+1<<" is : "<<endl;
        students[i].print();
        cout<<endl<<endl;
    }
}
