#//Kian Academy
#include "DentalBenefit.h"

DentalBenefit::DentalBenefit()
{

}

DentalBenefit::DentalBenefit(string info)
{
    this->info=info;
}

string DentalBenefit::getDetails()
{
    ostringstream details;
    details<<displayBenefit();
    details<<"Employee's Dental info : "<<info<<'\n';
    return details.str();
}
double DentalBenefit::calculateBenefit()
{
    amount=0.1*amount;
    return amount;
}
DentalBenefit::~DentalBenefit()
{

}
