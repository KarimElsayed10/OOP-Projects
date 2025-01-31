#ifndef SCHOOL_H
#define SCHOOL_H
#include<Student.h>
#include<Teacher.h>
#include<Course.h>
#include<Staff.h>
#include<Classroom.h>
#include <iostream>
using namespace std;
class School
{
private:
    string schoolName;
    string address;
    Student students[100];
    Teacher teachers[100];
    Course courses[100];
    Staff staffs[100];
    Classroom classRooms[100];
    int studentCounter;
    int teacherCounter;
    int courseCounter;
    int staffCounter;
    int classRoomCounter;
public:
    void addStudent(Student student);
    void addTeacher(Teacher teacher);
    void addStaff(Staff staff);
    void addClassRoom(Classroom classroom);
    void addCourse(Course course);
    void setShoolName(string schoolName);
    void setAddress(string address);
    string getSchoolName();
    string getAddress();
    School();
    School(string schoolName,string address);
    void print();
    void studentsInformation();
    void input(string schoolName,string address);
    virtual ~School();



};

#endif // SCHOOL_H
