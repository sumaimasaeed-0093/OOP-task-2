#include <iostream>
using namespace std;

class Employee {
private:
    string Name;
    double Salary;
    double taxPercentage;

public:
    void get_data() {
        cout << "Enter employee name: ";
        getline(cin, Name);

        cout << "Enter monthly salary: ";
        cin >> Salary;

        cout << "Enter tax percentage: ";
        cin >> taxPercentage;
    }

    double salary_after_tax() {
        double taxAmount = (Salary * taxPercentage) / 100;
        double remainingSalary = Salary - taxAmount;
        return remainingSalary;
    }

    void update_tax_percentage() {
        cout << "\nEnter new tax percentage: ";
        cin >> taxPercentage;

        double updatedSalary = salary_after_tax();
        cout << "Updated salary after tax: Rs. "
             << updatedSalary << endl;
    }

    void display() {
        cout << "\nEmployee Name: " << Name << endl;
        cout << "Original Salary: Rs. " << Salary << endl;
        cout << "Tax Percentage: " << taxPercentage << "%\n";
        cout << "Salary After Tax: Rs. "
             << salary_after_tax() << endl;
    }
};

int main() {
    Employee emp1;

    emp1.get_data();
    emp1.display();
    emp1.update_tax_percentage();

    return 0;
}

