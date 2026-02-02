#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee {
private:
    string employeeName;
    double monthlySalary;
    double taxPercentage;

public:
    void get_data();
    double salary_after_tax();
    void update_tax_percentage(double newTax);
    void display();
};

#endif

