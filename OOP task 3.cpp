//Q3

#include <iostream>
using namespace std;

class WaterBottle {
private:
    string company;
    string color;
    double capacityL;
    int capacityML;

public:
    void setCompany(string c) {
        company = c;
    }

    void setColor(string c) {
        color = c;
    }

    void setCapacity(int ml) {
        capacityML = ml;
        capacityL = ml / 1000.0;
    }

    string getCompany() {
        return company;
    }

    string getColor() {
        return color;
    }

    double getCapacityLiters() {
        return capacityL;
    }

    int getCapacityMilliLiters() {
        return capacityML;
    }

    void drinkWater(int drankML) {
        if (drankML > capacityML) {
            cout << "Not enough water in the bottle.\n";
        } else {
            capacityML -= drankML;
            capacityL = capacityML / 1000.0;
            cout << "Water updated successfully.\n";
        }
    }
};

int main() {
    WaterBottle bottle;
    int initialML, drankML;

    bottle.setCompany("Nestle");
    bottle.setColor("Transparent");

    cout << "Enter initial water capacity (in ml): ";
    cin >> initialML;
    bottle.setCapacity(initialML);

    cout << "\nBottle Details:\n";
    cout << "Company: " << bottle.getCompany() << endl;
    cout << "Color: " << bottle.getColor() << endl;
    cout << "Water: " << bottle.getCapacityLiters() << " L ("
         << bottle.getCapacityMilliLiters() << " ml)\n";

    cout << "\nEnter amount of water drank (in ml): ";
    cin >> drankML;

    bottle.drinkWater(drankML);

    cout << "\nRemaining Water:\n";
    cout << bottle.getCapacityLiters() << " L ("
         << bottle.getCapacityMilliLiters() << " ml)\n";

    return 0;
}

