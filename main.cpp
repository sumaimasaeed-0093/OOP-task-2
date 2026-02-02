#include "Employee.h"

int main() {
    Employee emp1, emp2, emp3;

    cout << "\n--- Enter details for Employee 1 ---\n";
    emp1.get_data();

    cout << "\n--- Enter details for Employee 2 ---\n";
    emp2.get_data();

    cout << "\n--- Enter details for Employee 3 ---\n";
    emp3.get_data();

    cout << "\n--- Salary Details (After Initial Tax) ---\n";
    emp1.display();
    emp2.display();
    emp3.display();

    cout << "\n--- Updating tax percentage to 3% ---\n";
    emp1.update_tax_percentage(3);
    emp2.update_tax_percentage(3);
    emp3.update_tax_percentage(3);

    cout << "\n--- Salary Details (After Updated Tax) ---\n";
    emp1.display();
    emp2.display();
    emp3.display();

    return 0;
}

