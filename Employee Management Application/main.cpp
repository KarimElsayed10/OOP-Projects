#include <iostream>
#include "Budget.h"
#include "CommissionEmployee.h"
#include "Department.h"
#include "Employee.h"
#include "ExecutiveEmployee.h"
#include "HourlyEmployee.h"
#include "Project.h"
#include "SalariedEmployee.h"
#include "Staff.h"
#include "StaffMember.h"
#include "Volunteer.h"

using namespace std;

int main()
{
    int c=-1;
    while(c!=0)
    {
        cout<<"-------------------------"<<endl;
        cout<<"1. Department"<<endl;
        cout<<"2. Staff"<<endl;
        cout<<"3. Project"<<endl;
        cout<<"-------------------------"<<endl;
        cin>>c;
        switch(c)
        {
        case 1:
        {
            Department d1;
            int x=-1;
            while(x!=0)
            {
                cout<<"-------------------------"<<endl;
                cout<<"1. Add New Department"<<endl;
                cout<<"2. Print All Departments"<<endl;
                cout<<"-------------------------"<<endl;
                cin>>x;
                switch(x)
                {
                case 1:
                    d1.departDetails();
                    break;
                case 2:
                    d1.printDetails();
                    break;
                }
            }
            break;
        }
        case 2:
        {
            Staff s1;
            int y=-1;
            while(y!=0)
            {
                cout<<"---------------------"<<endl;
                cout<<"1. Add New Members"<<endl;
                cout<<"2. Print All Members"<<endl;
                cout<<"3. Delete Member:"<<endl;
                cout<<"---------------------"<<endl;
                cin>>y;
                switch(y)
                {
                case 1:
                    s1.addMember();
                    break;
                case 2:
                    s1.showAll();
                    break;
                case 3:
                    int del_id=0;
                    cout<<"Inter Member id : "<<endl;
                    cin>>del_id;
                    s1.deleteMember(del_id);
                    break;
                }
            }
            break;
        }
        case 3:
        {
            Project p1;
            int z=-1;
            while(z!=0)
            {
                cout<<"----------------------"<<endl;
                cout<<"1. Add New Project"<<endl;
                cout<<"2. Print All Projects"<<endl;
                cout<<"3. Add Budget"<<endl;
                cout<<"4. Increase Budget"<<endl;
                cout<<"----------------------"<<endl;
                cin>>z;
                switch(z)
                {
                case 1:
                {
                    p1.inputData();
                    break;
                }
                case 2:
                {
                    p1.print();
                    break;
                }
                case 3:
                {
                    p1.addBudget();
                    break;
                }
                case 4:
                {
                    Budget b1;
                    int amount=0;
                    cout<<"Inter amount to increase : "<<endl;
                    cin>>amount;
                    //   b1.increaseBudget(amount);
                    break;
                }
                }
            }
            break;
        }

        }
    }

    return 0;
}
