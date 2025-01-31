#include "Classroom.h"
#include <iostream>
using namespace std;
Classroom::Classroom()
{
    //ctor
}

Classroom::~Classroom()
{
    //dtor
}
void Classroom::setRoomNumber(int roomNumber)
{
    this->roomNumber=roomNumber;
}
void Classroom::setCapacity(int capacity)
{
    this->capacity=capacity;
}
int Classroom::getRoomNumber()
{
    return roomNumber;
}
int Classroom::getCapacity()
{
    return capacity;
}
void Classroom::print()
{
    cout<<"The Room Number is : "<<roomNumber<<endl;
    cout<<"The Capacity is : "<<capacity<<endl;
}
void Classroom::input(int roomNumber,int capacity)
{
    this->roomNumber=roomNumber;
    this->capacity=capacity;
}
Classroom::Classroom(int roomNumber,int capacity)
{
    this->roomNumber=roomNumber;
    this->capacity=capacity;
}
