#//Kian Academy
#include "HRSystem.h"
#include "HourlyEmployee.h"
#include "ManagerEmployee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
HRSystem::HRSystem()
{
    EmployeeList=new Employee[100];
    department=new Department[100];
}
int HRSystem::findDepart(int ID)
{
    for(int index=0; index<NumOfDep; index++)
    {
        if(department[index].getID()==ID)
        {
            return index;
        }
    }
    return -1;
}

void HRSystem::addEmpToDepart(Employee employee)
{
    int index=findDepart(employee.departID);
    if(index==-1)
    {
        index=NumOfDep;
        department[index].setID(employee.departID);
        department[index].setName(employee.departName);
        NumOfDep++;
    }
    Department &depart=department[index];
    depart.Employees[depart.NumOfEmp]=employee;
    depart.NumOfEmp++;
    //department[index].Employees[department[index].NumOfEmp]=employee;
}

void HRSystem::addEmployee()
{
    string type;
    cout<<"Enter Employee's type:( Hourly - Salaried - Manager - Commission )"<<endl;
    cin>>type;
    cout<<endl;
    if(type=="Hourly")
    {
        HourlyEmployee employee;
        employee.ReadHourlyEmployeeData();
        employee.type=type;
        EmployeeList[NumOfEmp]=employee;
        addEmpToDepart(EmployeeList[NumOfEmp]);
    }
    else if(type=="Salaried")
    {
        SalariedEmployee employee;
        employee.ReadSalariedEmployeeData();
        employee.type=type;
        EmployeeList[NumOfEmp]=employee;
        addEmpToDepart(EmployeeList[NumOfEmp]);
    }
    else if(type=="Manager")
    {
        ManagerEmployee employee;
        employee.ReadManagerEmployeeData();
        employee.type=type;
        EmployeeList[NumOfEmp]=employee;
        addEmpToDepart(EmployeeList[NumOfEmp]);
    }
    else
    {
        CommissionEmployee employee;
        employee.ReadCommissionEmployeeData();
        employee.type=type;
        EmployeeList[NumOfEmp]=employee;
        addEmpToDepart(EmployeeList[NumOfEmp]);
    }
    NumOfEmp++;
    cout<<"OK Employee added"<<endl;
}

int HRSystem::getIndex(int ID)
{
    for(int index=0; index<NumOfEmp; index++)
    {
        if(EmployeeList[index].getID()==ID)
        {
            return index;
        }
    }
    return -1;
}
void HRSystem::delEmployee(int ID)
{
    int found=getIndex(ID);
    if(found==-1)
    {
        cout<<"Employee not found\n";
        return;
    }
    for(int index=found+1; index<NumOfEmp; index++)
    {
        EmployeeList[index-1]=EmployeeList[index];
    }
    NumOfEmp--;
}

void HRSystem::showAll()
{
    for(int index=0; index<NumOfEmp; index++)
    {
        cout<<setw(50)<<"Employee "<<index+1<<endl;
        cout<<EmployeeList[index].DisplayDetails()<<endl;
    }
}

void HRSystem::editEmployee(int ID)
{
    int found=getIndex(ID);
    if(found==-1)
    {
        cout<<"Employee not found\n";
        return;
    }
    EmployeeList[found].readEmployeeData();
}

void HRSystem::calcTotalPayroll()
{
    double totalPayroll=0;
    for(int index=0; index<NumOfEmp; index++)
    {
        totalPayroll+=EmployeeList[index].calculatePay();
    }
    cout<<"Total Payroll is "<<totalPayroll<<" dollars"<<endl;
}

void HRSystem::findEmployee(int ID)
{
    int found=getIndex(ID);
    if(found==-1)
        cout<<"Employee not found\n";
    else
        cout<<EmployeeList[found].DisplayDetails()<<endl;
}

void HRSystem::printDepartment(int ID)
{
    int index=findDepart(ID);
    if(index==-1)
    {
        cout<<"Department not found"<<endl;
    }
    else
    {
        department[index].Print();
    }
}

HRSystem::~HRSystem()
{
    delete EmployeeList;
    delete department;
}

