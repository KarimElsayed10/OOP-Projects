#include <iostream>
using namespace std;

#ifndef DEPARTMENT_H
#define DEPARTMENT_H


class Department
{
    public:
        Department();
        virtual ~Department();
        void departDetails();
        void printDetails();

    private:
        int departID;
        string departName;
};

#endif // DEPARTMENT_H
