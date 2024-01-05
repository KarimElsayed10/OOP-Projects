#include <iostream>
#include <string.h>
#include <ContactBook.h>
using namespace std;
int main()
{
    ContactBook c(100);
    int ch;
    do
    {
        cout<<"--------------------------------------"<<endl;
        cout<<"\t\t\t\tPHONE BOOK Application"<<endl;
        cout<<"::::::::::::::: PROGRAM MENU :::::::::::::::"<<endl;
        cout<<"0. Exit\n";
        cout<<"1. Add a New Contact"<<endl;
        cout<<"2. Delete a Contact"<<endl;
        cout<<"3. Search Specific Contact"<<endl;
        cout<<"4. Edit Contact"<<endl;
        cout<<"5. Display All Saved Contacts"<<endl;
        cout<<"Enter Your Choice  "<<endl;
        cin>>ch;
        system ("cls");
        cout<<"-------------------------------------\n";
        cout<<endl<<endl;
        switch(ch)
        {
        case 1:
            c.addUser();
            break;
        case 2:
            c.deleteUser();
            break;
        case 3:
            c.searchUser();
            break;
        case 4:
            c.editUser();
            break;
        case 5:
            c.printAll();
            break;
        }
    }
    while(ch);
    return 0;
}
