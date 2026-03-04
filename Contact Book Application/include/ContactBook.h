#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H
#include <iostream>
#include <Contact.h>
using namespace std;

class ContactBook
{
private:
    int counter=0;
    Contact contacts[1000];
public:
    void addContact()
    {
        Contact c;
        c.information();
        contacts[counter]=c;
        counter++;
    }
    void deleteContact()
    {
        cout<<"Please Enter ID For Contact To Delete"<<endl;
        int x;
        cin>>x;
        int i;
        for(i=0; i<counter; i++)
        {
            if(x==contacts[i].getId())
            {
                contacts[i]=contacts[counter-1];
                break;
            }
        }
        if(i==counter)
        {
            cout<<"The Contact Not Found"<<endl;
        }
        counter--;
    }
    void editContact()
    {
        cout<<"Please Enter ID For Contact To Edit"<<endl;
        int x;
        cin>>x;
        int i;
        for(i=0; i<counter; i++)
        {
            if(x==contacts[i].getId())
            {
                contacts[i].information();
                break;
            }
        }
        if(i==counter)
        {
            cout<<"The Contact Not Found"<<endl;
        }
    }
    void search()
    {
        cout<<"Please Enter ID For Contact To Edit"<<endl;
        int x;
        cin>>x;
        int i;
        for(i=0; i<counter; i++)
        {
            if(x==contacts[i].getId())
            {
                contacts[i].print();
                break;
            }
        }
        if(i==counter)
        {
            cout<<"The Contact Not Found"<<endl;
        }
    }
    void printAll()
    {
        for(int i=0;i<counter;i++)
        {
            contacts[i].print();
            cout<<endl;
        }
    }


};

#endif // CONTACTBOOK_H
