#ifndef EXAM_H
#define EXAM_H
#include <iostream>
using namespace std;

class Exam
{
private:
    string examName;
    string courseCode;
    string examDate;
public:
    void setExamName(string examName);
    void setExamDate(string examDate);
    void setCourseCode(string courseCode);
    string getExamName();
    string getExamDate();
    string getCourdecode();
    Exam();
    Exam(string examName,string courseCode,string examDate);
    void print();
    void input(string examName,string courseCode,string examDate);
    virtual ~Exam();


};

#endif // EXAM_H
