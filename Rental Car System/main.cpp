#//Karim Elsayed
#include <bits/stdc++.h>
#include "RentalSystem.h"
using namespace std;
int main()
{
    RentalSystem rentalSystem;
    int choice;
    do
    {
        cout<<"\t\t\t\tRental Car System"<<endl;
        cout<<"::::::::::::::: PROGRAM MENU :::::::::::::::"<<endl;
        cout<<"0. Exit\n";
        cout<<"1. Add A Car"<<endl;
        cout<<"2. Add A Customer"<<endl;
        cout<<"3. Rent a Car"<<endl;
        cout<<"4. Display Car details"<<endl;
        cout<<"5. View All available Cars"<<endl;
        cout<<"6. View All Rental History of A Customer"<<endl;
        cout<<"7. Generate Reports about the system"<<endl;
        cout<<"Enter Your Choice  "<<endl;
        cin>>choice;
        system("cls");
        cout<<"---------------------------------------"<<endl<<endl<<endl;
        switch(choice)
        {
        case 1:
            rentalSystem.addCar();
            break;
        case 2:
            rentalSystem.addCustomer();
            break;
        case 3:
            rentalSystem.rentCar();
            break;
        case 4:
            rentalSystem.returnCar();
            break;
        case 5:
            rentalSystem.viewAllAvailableCars();
            break;
        case 6:
            rentalSystem.viewCustomerRentalHistory();
            break;
        case 7:
            rentalSystem.generateReports();
            break;
        }
    }
    while(choice);
    return 0;
}
