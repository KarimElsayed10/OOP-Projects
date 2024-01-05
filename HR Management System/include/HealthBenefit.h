#//Karim Elsayed
#ifndef HEALTHBENEFIT_H
#define HEALTHBENEFIT_H
#include "Benefit.h"
class HealthBenefit:public Benefit
{
private:
	string coverage;
	string info;
public:
    HealthBenefit();
    HealthBenefit(string coverage,string info);
    ~HealthBenefit();
    void setCoverage(string coverage);
    void setInfo(string info);
	string getDetails();
	double calculateBenefit();
};

#endif // HEALTHBENEFIT_H
