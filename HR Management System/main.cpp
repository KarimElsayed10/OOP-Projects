#//Kian Academy
#include <bits/stdc++.h>
#include "HRSystem.h"
using namespace std;
int main()
{
    HRSystem HR;
    int ch;
    do
    {
        cout<<"\t\t\t\tHR Management System"<<endl;
        cout<<"::::::::::::::: PROGRAM MENU :::::::::::::::"<<endl;
        cout<<"0. Exit\n";
        cout<<"1. Add a New Employee"<<endl;
        cout<<"2. Delete a Employee"<<endl;
        cout<<"3. Search Specific Employee"<<endl;
        cout<<"4. Edit Specific Employee"<<endl;
        cout<<"5. Display All Saved Empoyee"<<endl;
        cout<<"6. Calculate Total Payroll"<<endl;
        cout<<"7. Print Department and its Empoyees"<<endl;
        cout<<"Enter Your Choice  "<<endl;
        cin>>ch;
        system("cls");
        cout<<"---------------------------------------"<<endl<<endl<<endl;
        switch(ch)
        {
        case 1:
            HR.addEmployee();
            break;
        case 2:
            int ID;
            cout<<"Enter ID for your Employee: ";
            cin>>ID;
            cout<<endl;
            HR.delEmployee(ID);
            break;
        case 3:
            cout<<"Enter ID for your Employee: ";
            cin>>ID;
            cout<<endl;
            HR.findEmployee(ID);
            break;
        case 4:
            cout<<"Enter ID for your Employee: ";
            cin>>ID;
            cout<<endl;
            HR.editEmployee(ID);
            break;
        case 5:
            HR.showAll();
            break;
        case 6:
            HR.calcTotalPayroll();
            break;
        case 7:
            cout<<"Enter ID for your Department: ";
            cin>>ID;
            cout<<endl;
            HR.printDepartment(ID);
            break;
        }
    }
    while(ch);
    return 0;
}
