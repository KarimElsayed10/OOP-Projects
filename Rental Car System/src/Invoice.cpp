#//Kian Academy
#include "Invoice.h"

Invoice::Invoice()
{

}

int Invoice::total_amount_due()
{
    return rentalAgreement+taxes;
}

void Invoice::readInvoiceData(int period)
{
    rentalAgreement.readRentalAgreementData(period);
    cout<<"Enter taxes on the car: "<<endl;
    cin>>taxes;
    cout<<endl;
}
int Invoice::operator-(int total_amount)
{
    return total_amount_due()+total_amount;
}

ostream & operator<<(ostream &output,Invoice invoice)
{
    output<<"Taxes for every car are "<<invoice.taxes<<endl;
    output<<"Rental Agreement details is: "<<endl;
    output<<invoice.rentalAgreement<<endl;
    output<<"total amount due is "<<invoice.total_amount_due();
    return output;
}

bool Invoice::operator<(Invoice invoice)
{
    return total_amount_due()<invoice.total_amount_due();
}
bool Invoice::operator==(Invoice invoice)
{
    return total_amount_due()==invoice.total_amount_due();
}
bool Invoice::operator>(Invoice invoice)
{
    return total_amount_due()>invoice.total_amount_due();
}
Invoice::~Invoice()
{

}
