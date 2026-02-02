#include "Employee.h"

void Employee::get_data() {
    cout << "Enter employee name: ";
    getline(cin, employeeName);

    cout << "Enter monthly salary: ";
    cin >> monthlySalary;

    cout << "Enter tax percentage: ";
    cin >> taxPercentage;

    cin.ignore(); 
}

double Employee::salary_after_tax() {
    double taxAmount = (monthlySalary * taxPercentage) / 100;
    return monthlySalary - taxAmount;
}

void Employee::update_tax_percentage(double newTax) {
    taxPercentage = newTax;
}

void Employee::display() {
    cout << "\nEmployee Name: " << employeeName << endl;
    cout << "Monthly Salary: Rs. " << monthlySalary << endl;
    cout << "Tax Percentage: " << taxPercentage << "%" << endl;
    cout << "Salary After Tax: Rs. "
         << salary_after_tax() << endl;
}

