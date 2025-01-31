#ifndef STUDENT_H
#define STUDENT_H
#include<Person.h>

class Student:public Person
{
     private:
         int studentId;
         float gpa;
         string grade;
    public:
        void setStudentId(int studentId);
        void setGPA(float gpa);
        void setGrade(string grade);
        int getStudentId();
        float getGPA();
        string getGrade();
        Student();
        Student(string name,int age,string gender,string address
                ,string phoneNumber,string email
                ,int studentId,float gpa,string grade);
        Student(int studentId,float gpa,string grade);
        virtual ~Student();
        void input(string name,int age,string gender,string address,string phoneNumber,string email
                   ,int studentId,float gpa,string grade);
    void print();


};

#endif // STUDENT_H
