#//Kian Academy
#include "HealthBenefit.h"

HealthBenefit::HealthBenefit()
{

}

HealthBenefit::HealthBenefit(string coverage,string info)
{
    this->coverage=coverage;
    this->info=info;
}

HealthBenefit::~HealthBenefit()
{

}

void HealthBenefit::setCoverage(string coverage)
{
    this->coverage=coverage;
}

void HealthBenefit::setInfo(string info)
{
    this->info=info;
}

string HealthBenefit::getDetails()
{
    ostringstream details;
    details<<displayBenefit();
    details<<"Employee's Health Coverage : "<<coverage<<'\n';
    details<<"Employee's Health info : "<<info<<'\n';
    return details.str();
}
double HealthBenefit::calculateBenefit()
{
    amount=0.2*amount;
    return amount;
}
