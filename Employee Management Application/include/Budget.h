#ifndef BUDGET_H
#define BUDGET_H
#include <iostream>
using namespace std;

class Budget
{
    protected:
        int Id;
        double value;
    public:
        double increaseBudget();
        void set_id(int Id);
        int get_id();
        void set_value(double Value);
        double get_value();
        void input();
        void print();
        Budget();
        ~Budget();
};

#endif // BUDGET_H
