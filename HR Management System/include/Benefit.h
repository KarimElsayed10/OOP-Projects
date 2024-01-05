#//Karim Elsayed
#ifndef BENEFIT_H
#define BENEFIT_H
#include<bits/stdc++.h>
using namespace std;
class Benefit
{
protected:
public:
    string planType;
    double amount=0;
    Benefit();
    Benefit(string planType);
    ~Benefit();
    void readBenefit();
    void selectAmount(string planType);
    double calculateBenefit();
    string displayBenefit();
};

#endif // BENEFIT_H
