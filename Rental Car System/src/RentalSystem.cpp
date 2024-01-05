#//Kian Academy
#include "RentalSystem.h"

RentalSystem::RentalSystem()
{
    car=new Car[100];
    customer=new Customer[100];
}

RentalSystem::~RentalSystem()
{

}

void RentalSystem::addCar()
{
    car[numOfCars].readCarData();
    numOfCars++;
}

void RentalSystem::addCustomer()
{
    customer[numOfCustomers].readCustomerData();
    numOfCustomers++;
}

int RentalSystem::findCar(int carID)
{
    for(int index=0; index<numOfCars; index++)
    {
        if(car[index].getID()==carID)
        {
            return index;
        }
    }
    return -1;
}

int RentalSystem::findCustomer(int customerID)
{
    for(int index=0; index<numOfCustomers; index++)
    {
        if(customer[index].getID()==customerID)
        {
            return index;
        }
    }
    return -1;
}

void RentalSystem::rentCar()
{
    Reservation reservation;
    reservation.readReservation();
    int carIndex=findCar(reservation.getCarID()),customerIndex=findCustomer(reservation.getCustomerID());
    if(carIndex==-1)
    {
        cout<<"car not found"<<endl;
    }
    else if(customerIndex==-1)
    {
        cout<<"customer not found"<<endl;
    }
    else
    {
        car[carIndex].addReservation(reservation);
        customer[customerIndex].addReservation(reservation);
        cout<<"Reservation Completed"<<endl;
    }
}

void RentalSystem::returnCar()
{
    int carID;
    cout<<"Enter ID of car you want to get its details: ";
    cin>>carID;
    cout<<endl;
    int index=findCar(carID);
    if(index==-1)
    {
        cout<<"car not found"<<endl;
    }
    else
    {
        cout<<car[index];
    }
}


void RentalSystem::viewAllAvailableCars()
{
    Date start_date,end_date;
    cout<<"Enter your wanted rental start date: "<<endl;
    start_date.readDate();
    cout<<"Enter your wanted rental end date: "<<endl;
    end_date.readDate();
    for(int index=0; index<numOfCars; index++)
    {
        if(car[index].availabe(start_date,end_date))
        {
            cout<<car[index];
        }
    }
}

void RentalSystem::viewCustomerRentalHistory()
{
    int customerID;
    cout<<"Enter car's ID: "<<endl;
    cin>>customerID;
    cout<<endl;
    int index=findCustomer(customerID);
    if(index==-1)
    {
        cout<<"Customer not found"<<endl;
    }
    else
    {
        cout<<customer[index];
    }
}

void RentalSystem::generateReports()
{
    cout<<setw(50)<<"All Customers' Rental History"<<endl;
    for(int index=0;index<numOfCustomers;index++)
    {
        cout<<"Customer number "<<index+1<<" details are: "<<endl;
        cout<<customer[index]<<endl;
    }
    cout<<setw(50)<<"All cars' Rental History"<<endl;
    for(int index=0;index<numOfCars;index++)
    {
        cout<<"car number "<<index+1<<" details are: "<<endl;
        cout<<car[index]<<endl;
    }
}
