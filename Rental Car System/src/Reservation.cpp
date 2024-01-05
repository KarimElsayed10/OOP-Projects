#//Kian Academy
#include "Reservation.h"

Reservation::Reservation()
{

}

Reservation::Reservation(int carID,int customerID,Date start_date,Date end_date,Invoice invoice):
        carID(carID),customerID(customerID),start_date(start_date),end_date(end_date),invoice(invoice)
{

}

Reservation::~Reservation()
{

}

void Reservation::readReservation()
{
    cout<<"Enter ID of car you want to reserve: "<<endl;
    cin>>carID;
    cout<<endl;
    cout<<"Enter Customer's ID: "<<endl;
    cin>>customerID;
    cout<<endl;
    cout<<"Enter your reservation start time(month-year): "<<endl;
    start_date.readDate();
    cout<<"Enter your reservation end time(month-year): "<<endl;
    end_date.readDate();
    invoice.readInvoiceData(start_date.getPeriod(end_date));
}

Date Reservation::getStartDate()
{
    return start_date;
}

Date Reservation::getEndDate()
{
    return end_date;
}

int Reservation::getCarID()
{
    return carID;
}

int Reservation::getCustomerID()
{
    return customerID;
}

Invoice Reservation::getInvoice()
{
    return invoice;
}

ostream & operator<<(ostream &output,Reservation reservation)
{
    output<<"Resesrvation's Car ID is "<<reservation.carID<<endl;
    output<<"Resesrvation's Customer ID is "<<reservation.customerID<<endl;
    output<<"Resesrvation start Date is "<<reservation.start_date<<endl;
    output<<"Resesrvation end Date is "<<reservation.end_date<<endl;
    output<<"Reservation Invoice details are: "<<reservation.invoice<<endl;
    return output;
}

bool Reservation::operator<(Reservation reservation)
{
    return invoice.total_amount_due()<reservation.getInvoice().total_amount_due();
}

bool Reservation::operator==(Reservation reservation)
{
    return invoice.total_amount_due()==reservation.getInvoice().total_amount_due();
}

bool Reservation::operator>(Reservation reservation)
{
    return invoice.total_amount_due()>reservation.getInvoice().total_amount_due();
}
