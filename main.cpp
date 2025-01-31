#include <Person.h>
#include <Student.h>
#include <School.h>
#include <iostream>
using namespace std;

int main()
{
    School s("Elfairoz","Alex");
    s.print();
    Student p("Ahmed",22,"male","Alex","01062160382","Ahmed@gmail.com",1,3.5,"very good");
    s.addStudent(p);
    Student p2("Mohammed",24,"male","Cairo","0152456632","mohammed@gmail.com",2,3,"good");
    s.addStudent(p2);
    Student p3("Ali",25,"male","Alex","01226138012","Ali@gmail.com",3,4,"Excellent");
    s.addStudent(p3);
    s.studentsInformation();

    return 0;
}
