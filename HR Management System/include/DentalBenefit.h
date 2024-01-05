#ifndef DENTALBENEFIT_H
#define DENTALBENEFIT_H
#include "Benefit.h"
class DentalBenefit: public Benefit
{

public:
	string info;
	DentalBenefit();
    DentalBenefit(string info);
    ~DentalBenefit();
    string getDetails();
    double calculateBenefit();
};

#endif // DENTALBENEFIT_H
