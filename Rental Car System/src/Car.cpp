#include "Car.h"
#include "Date.h"
Car::Car()
{
    reservation=new Reservation[100];
}

Car::Car(int ID,string model,int year):
    ID(ID),model(model),year(year)
{

}

bool Car::availabe(Date start_date,Date end_date)
{
    for(int index=0; index<numOfRents; index++)
    {
        if(start_date.intersect(start_date,end_date,reservation[index].getStartDate(),reservation[index].getEndDate()))
            return false;
    }
    return true;
}

void Car::addReservation(Reservation res)
{
    reservation[numOfRents]=res;
    numOfRents++;
}

void Car::readCarData()
{
    cout<<"Enter Car's ID: "<<endl;
    cin>>ID;
    cout<<endl;
    cout<<"Enter Car's MOdel: "<<endl;
    cin>>model;
    cout<<endl;
    cout<<"Enter Car's Year of Production: "<<endl;
    cin>>year;
    cout<<endl;
}

ostream & operator<<(ostream &output,Car car)
{
    output<<"Car's ID is "<<car.ID<<endl;
    output<<"Car's Model is "<<car.model<<endl;
    output<<"Car's Year of Production is "<<car.year<<endl;
    output<<"Car's number of reservations is "<<car.numOfRents<<endl;
    for(int index=0;index<car.numOfRents;index++)
    {
        output<<"Car's Reservations number "<<index+1<<" is "<<car.reservation[index];
    }
    return output;
}

bool Car::operator<(Car car)
{
    return numOfRents<car.getNumOfRents();
}

bool Car::operator==(Car car)
{
    return numOfRents==car.getNumOfRents();
}

bool Car::operator>(Car car)
{
    return numOfRents>car.getNumOfRents();
}

int Car::getID()
{
    return ID;
}
int Car::getNumOfRents()
{
    return numOfRents;
}
Car::~Car()
{

}
