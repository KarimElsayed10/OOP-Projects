#ifndef CLASSROOM_H
#define CLASSROOM_H


class Classroom
{
private:
    int roomNumber;
    int capacity;
public:
    void setRoomNumber(int roomNumber);
    void setCapacity(int capacity);
    int getRoomNumber();
    int getCapacity();
    void print();
    void input(int roomNumber,int capacity);
    Classroom();
    Classroom(int roomNumber,int capacity);
    virtual ~Classroom();



};

#endif // CLASSROOM_H
