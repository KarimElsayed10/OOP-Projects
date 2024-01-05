#include "Project.h"
#include "Employee.h"
#include "Budget.h"


Project::Project()
{
    projectID = 0;
    listCount = 0;
    location = "UNKNOWN";
    currentCost = 0;
    listSize = 5;
    budgetList = new Budget[listSize];

}
Project::~Project()
{
    delete [] budgetList;
}
void Project::setManagerData()
{
    cout<<"Inter manager id : ";
    cin>>managerId;
    cout<<endl;
    cout<<"Inter manager name : ";
    cin>>managerName;
    cout<<endl;
    cout<<"Inter manager phone : ";
    cin>>managerPhone;
    cout<<endl;
    cout<<"Inter manager email : ";
    cin>>managerEmail;
    cout<<endl;
}
void Project::inputData()
{
    setManagerData();
    cout<<"Inter project id : ";
    cin>>projectID;
    cout<<endl;
    cout<<"Inter location : ";
    cin>>location;
    cout<<endl;
    cout<<"Inter current cost : ";
    cin>>currentCost;
    cout<<endl;
    int n=0;
    cout<<"How many Budgets ?"<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int id;
        double value;
        cout<<"Budget id : ";
        cin>>id;
        cout<<endl;
        cout<<"Budget value : ";
        cin>>value;
        cout<<endl;
        //   Budget * new_budget = new  Budget(id,value);
        //    budgetList[listCount++] = *new_budget;

    }
}
void Project::addBudget()
{
    Budget *new_budget = new Budget();
//    new_budget->Input();
    budgetList[listCount++] = *new_budget;
}
void Project::getTotalBudget()
{
    if(listCount==0)
    {
        cout<< "NO BUDGET FOUND!\n";
        return;
    }
    for(int i=0; i<listCount; ++i)
    {
        budgetList[i].print();
    }
}
void Project::print()
{
    cout<<"Manager id : "<<managerId<<endl;
    cout<<"Manager Name : "<<managerName<<endl;
    cout<<"Manager Phone : "<<managerPhone<<endl;
    cout<<"Manager Email : "<<managerEmail<<endl;
    cout<<"Project id : "<<projectID<<endl;
    cout<<"Location : "<<location<<endl;
    cout<<"Current cost : "<<currentCost<<endl;
    getTotalBudget();
}
