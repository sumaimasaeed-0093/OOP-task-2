#include "Employee.h"
void Employee::get_data() {
    cout << "Enter employee name: ";
    cin.ignore(); // to clear leftover newline
    getline(cin, Name);

    cout << "Enter monthly salary: ";
    cin >> Salary;

    cout << "Enter tax percentage: ";
    cin >> taxPercentage;
}

double Employee::salary_after_tax() {
    double taxAmount = (Salary * taxPercentage) / 100;
    double remainingSalary = Salary - taxAmount;
    return remainingSalary;
}

void Employee::update_tax_percentage() {
    cout << "\nEnter new tax percentage: ";
    cin >> taxPercentage;

    double updatedSalary = salary_after_tax();
    cout << "Updated salary after tax: Rs. "
         << updatedSalary << endl;
}

void Employee::display() {
    cout << "\nEmployee Name: " << Name << endl;
    cout << "Original Salary: Rs. " << Salary << endl;
    cout << "Tax Percentage: " << taxPercentage << "%\n";
    cout << "Salary After Tax: Rs. "
         << salary_after_tax() << endl;
}

         << salary_after_tax() << endl;
}


