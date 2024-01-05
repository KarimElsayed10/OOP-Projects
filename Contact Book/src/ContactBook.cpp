#include "ContactBook.h"
#include <iostream>
#include <string>
ContactBook::ContactBook()
{

}
ContactBook::ContactBook(int size)
{
    this->size=size;
    users=new Contact[size];
    count=0;
}
void ContactBook::addUser()
{
    Contact *newUser = new Contact ;
    newUser->input();
    users[count]=*newUser;
    count++;
}
void ContactBook::deleteUser()
{
    if (count==0)
    {
        cout<< "No User Exists "<<endl;
        return;
    }
    else
    {
        cout<<"Enter ID Number of Record To Delete : "<<endl;
        cin>>delete1;
        bool test =false;
        for (int i=0; i<count; ++i)
        {
            if (users[i].getId()==delete1)
            {
                if(i==0)
                    count--;
                else
                {
                    users[i]=users[count-1];
                    count--;
                }
                test =true;
                break;
            }
        }
        if (test)
            cout<<"The Following record is deleted SUCESSFULLY "<<endl;
        else
            cout<<"\nThe Record of ID Number "<<delete1<<" is not in file...."<<endl;
    }
}

void ContactBook::editUser()
{
    if (count==0)
    {
        cout<< "no user exists \n";
        return;
    }
    else
    {
        cout<<"Enter ID Number of Record To Edit : "<<endl;
        cin>>edit1;
        bool test=false;
        for (int i=0; i<count; ++i)
        {
            if (users[i].getId()==edit1)
            {
                users[i].input();
                test =true;
                break;
            }
        }
        if (test==false)
            cout<<"NO USER EXIST "<<endl;
    }
}

void ContactBook::searchUser()
{
    cout<<"Enter ID Number of Record To Search : "<<endl;
    cin>>Search;
    if(Search==users->getId())
    {
        users->print();
    }
    else
    {
        cout<<"\nThe Record of ID Number "<<Search<<" is not in file...."<<endl;
    }
}
void ContactBook::printAll()
{
    if (count==0)
    {
        cout<< "NO USER FOUND "<<endl;
        return;
    }
    for (int i=0; i<count; ++i)
    {
        cout<<"The Data Record Number : "<<(i+1)<<" is :"<<endl;
        users[i].print();
    }
}
void ContactBook::setCount(int count)
{
    this->count=count;
}
int ContactBook::getCount()
{
    return count;
}
ContactBook::~ContactBook()
{
    delete [] users;
}
