#include <iostream>
#include <ContactBook.h>
using namespace std;
int main()
{
   ContactBook c;
   int n;
   do
   {
       cout<<"Press 0 To Exit"<<endl;
       cout<<"Press 1 To Add Contact"<<endl;
       cout<<"Press 2 To Delete Contact"<<endl;
       cout<<"Press 3 To Edit Contact"<<endl;
       cout<<"Press 4 To Search Acout Contact"<<endl;
       cout<<"Press 5 To Print All Contacts"<<endl;
       cin>>n;
       system("cls");
       switch(n)
       {
           case 0:
               return 0;
           case 1:
            c.addContact();
            break;
           case 2:
            c.deleteContact();
            break;
           case 3:
            c.editContact();
            break;
           case 4:
            c.search();
            break;
           case 5:
            c.printAll();
            break;
       }

   }
   while(n!=0);
}
