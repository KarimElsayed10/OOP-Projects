
#ifndef RENTALSYSTEM_H
#define RENTALSYSTEM_H
#include "Car.h"
#include "Customer.h"
#include "Reservation.h"
class RentalSystem
{
private:
    int numOfCars=0;
    Car* car;
    int numOfCustomers=0;
    Customer* customer;
    int findCar(int carID);
    int findCustomer(int customerID);
    void readStartAndEndDate(Date&start_date,Date&end_date);
    void readCarAndCustomerIDs(int&carID,int&cutomerID);
public:
    RentalSystem();
    ~RentalSystem();
    void addCar();
    void addCustomer();
    void rentCar();
    void returnCar();
    void viewAllAvailableCars();
    void viewCustomerRentalHistory();
    void generateReports();
};

#endif // RENTALSYSTEM_H
