#//Kian Academy
#include "Customer.h"

Customer::Customer()
{
    reservation=new Reservation[100];
}

Customer::Customer(string name,string address,string phone):
    name(name),address(address),phone(phone)
{
    reservation=new Reservation[100];
}
Customer::~Customer()
{

}

void Customer::readCustomerData()
{
    cout<<"Enter the customer ID: "<<endl;
    cin>>ID;
    cout<<endl;
    cout<<"Enter the customer name: "<<endl;
    cin>>name;
    cout<<endl;
    cout<<"Enter the customer address: "<<endl;
    cin>>address;
    cout<<endl;
    cout<<"Enter the customer phone: "<<endl;
    cin>>phone;
    cout<<endl;
}

void Customer::addReservation(Reservation res)
{
    reservation[numOfReservation]=res;
    numOfReservation++;
}

ostream & operator<<(ostream &output,Customer customer)
{
    output<<"customer's ID is "<<customer.ID<<endl;
    output<<"customer's name is "<<customer.name<<endl;
    output<<"customer's address is "<<customer.address<<endl;
    output<<"customer's phone is "<<customer.phone<<endl;
    output<<"customer's number of reservations is "<<customer.numOfReservation<<endl;
    int totalPay=0;
    for(int index=0; index<customer.numOfReservation; index++)
    {
        output<<customer.reservation[index]<<endl;
        totalPay=customer.reservation[index].getInvoice()-totalPay;
    }
    output<<"total Pay of this customer is "<<totalPay<<endl;
    return output;
}

int Customer::getID()
{
    return ID;
}

int Customer::getNumOfReservations()
{
    return numOfReservation;
}

bool Customer::operator<(Customer customer)
{
    return numOfReservation<customer.getNumOfReservations();
}
bool Customer::operator==(Customer customer)
{
    return numOfReservation==customer.getNumOfReservations();
}
bool Customer::operator>(Customer customer)
{
    return numOfReservation>customer.getNumOfReservations();
}
