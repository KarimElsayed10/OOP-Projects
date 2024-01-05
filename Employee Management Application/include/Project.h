#include <iostream>
#include "Employee.h"
#include "Budget.h"
using namespace std;

#ifndef PROJECT_H
#define PROJECT_H


class Project
{
    public:
        Project();
        ~Project();
        void setManagerData();
        void inputData();
        void addBudget();
        void getTotalBudget();
        void print();

    private:
        int projectID,managerId;
        string location,managerName,managerPhone,managerEmail;
        Employee manager;
        double currentCost;
        Budget *budgetList;
        int listSize,listCount;

};

#endif // PROJECT_H
