#include "Employee.h"

int main() {
    Employee emp1, emp2, emp3;

    cout << "\n--- Enter details for Employee 1 ---\n";
    emp1.get_data();

    cout << "\n--- Enter details for Employee 2 ---\n";
    emp2.get_data();

    cout << "\n--- Enter details for Employee 3 ---\n";
    emp3.get_data();

    cout << "\n--- Initial Salary Details ---\n";
    emp1.display();
    emp2.display();
    emp3.display();

    // Update tax percentage for each employee
    cout << "\n--- Update Tax Percentage ---\n";
    emp1.update_tax_percentage();
    emp2.update_tax_percentage();
    emp3.update_tax_percentage();

    return 0;
}
