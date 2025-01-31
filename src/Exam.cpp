#include "Exam.h"

Exam::Exam()
{
    //ctor
}

Exam::~Exam()
{
    //dtor
}
void Exam::setExamName(string examName)
{
    this->examName=examName;
}
void Exam::setExamDate(string examDate)
{
    this->examDate=examDate;
}
void Exam::setCourseCode(string courseCode)
{
    this->courseCode=courseCode;
}
string Exam::getExamName()
{
    return examName;
}
string Exam::getExamDate()
{
    return examDate;
}
string Exam::getCourdecode()
{
    return courseCode;
}
Exam::Exam(string examName,string courseCode,string examDate)
{
    this->examName=examName;
    this->examDate=examDate;
    this->courseCode=courseCode;
}
void Exam::print()
{
    cout<<"The Exam Name is : "<<examName<<endl;
    cout<<"The Exam Date is : "<<examDate<<endl;
    cout<<"The Course Code is : "<<courseCode<<endl;
}
void Exam::input(string examName,string courseCode,string examDate)
{
    this->examName=examName;
    this->examDate=examDate;
    this->courseCode=courseCode;
}
