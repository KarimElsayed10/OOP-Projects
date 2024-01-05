#//Karim Elsayed
#ifndef HRSYSTEM_H
#define HRSYSTEM_H
#include "Employee.h"
#include "Department.h"
class HRSystem
{
private:
    int NumOfEmp=0;
    Employee* EmployeeList;
    int NumOfDep=0;
    Department* department;
    void addEmpToDepart(Employee employee);
    int findDepart(int ID);
public:
    HRSystem();
    ~HRSystem();
    void addEmployee();
    void delEmployee(int ID);
    void calcTotalPayroll();
    void editEmployee(int ID);
    void findEmployee(int ID);
    void showAll();
    void printDepartment(int ID);
    int getIndex(int ID);
};

#endif // HRSYSTEM_H
