#//Kian Academy
#include "Employee.h"
Employee::Employee()
{
    BenefitList=new Benefit[100];
}
void Employee::readEmployeeData()
{
    cout<<"Enter Employee's ID: "<<endl;
    cin>>empID;
    cout<<endl;
    cout<<"Enter Employee's Name: "<<endl;
    cin.ignore();
    getline(cin,name);
    cout<<endl;
    cout<<"Enter Employee's phone: "<<endl;
    cin>>phone;
    cout<<endl;
    cout<<"Enter Employee's email: "<<endl;
    cin>>email;
    cout<<endl;
    cout<<"Enter Employee's Department name : "<<endl;
    cin>>departName;
    cout<<"Enter Employee's ID : "<<endl;
    cin>>departID;
    cout<<endl;
    cout<<"Enter Employee's jobTitle: "<<endl;
    cin>>jobTitle;
    cout<<endl;
    cout<<"Enter Employee's number of Benefits: "<<endl;
    cin>>NumOfBenfits;
    cout<<endl;
    for(int index=0; index<NumOfBenfits; index++)
    {
        cout<<"For Benefit number "<<index+1<<": ";
        BenefitList[index].readBenefit();
        cout<<endl;
    }
}

int Employee::getID()
{
    return empID;
}

string Employee::getName()
{
    return name;
}

string Employee::getPhone()
{
    return phone;
}

void Employee::setPhone(string newPhone)
{
    phone=newPhone;
}

string Employee::getEmail()
{
    return email;
}

void Employee::setEmail(string newEmail)
{
    email=newEmail;
}


string Employee::getJobTitle()
{
    return jobTitle;
}

void Employee::setJobTitle(string newJobTitle)
{
    jobTitle=newJobTitle;
}
string Employee::DisplayDetails()
{
    ostringstream details;
    details<<"Employee's ID is "<<empID<<endl;
    details<<"Employee's Name is "<<name<<endl;
    details<<"Employee's phone is "<<phone<<endl;
    details<<"Employee's Email is "<<email<<endl;
    details<<"Employee's jobTitle is "<<jobTitle<<endl;
    details<<"Employee's Department name and ID: "<<departName<<' '<<departID<<endl;
    details<<"Employee's number of Benefits is "<<NumOfBenfits<<" and they are "<<endl;
    for(int index=0; index<NumOfBenfits; index++)
    {
        details<<"Employee's Benefit number "<<index+1<<" and its details are that "<<BenefitList[index].displayBenefit()<<endl;
    }
    details<<"Employee's Salary is "<<getSalary()<<endl;
    return details.str();
}

double Employee::getSalary()
{
    return Salary;
}

double Employee::calculatePay()
{
    return Salary+Bonus;
}
Employee::~Employee()
{

}
