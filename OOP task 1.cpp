// Q1

#include <iostream>
using namespace std;

class BoardMarker {
private:
    string company;
    string color;
    bool refillable;   
    bool ink_status;    

public:
    void setCompany(string c) {
        company = c;
    }

    void setColor(string c) {
        color = c;
    }

    void setRefillable(bool refill) {
        refillable = refill;
    }

    void setInkStatus(bool status) {
        ink_status = status;
    }

    string getCompany() {
        return company;
    }

    string getColor() {
        return color;
    }

    bool isRefillable() {
        return refillable;
    }

    bool isInkEmpty() {
        return ink_status;
    }

    void write() {
        if (ink_status == true) {
            cout << "Cannot write. Ink is empty.\n";
        } else {
            cout << "Proceed with writing....\n";
            ink_status = true; 
        }
    }

    void refill() {
        if (refillable == true) {
            ink_status = false;
            cout << "Marker refilled.\n";
        } else {
            cout << "Marker cannot be refilled.\n";
        }
    }
};

int main() {
    BoardMarker m1;
    m1.setCompany("Dollar");
    m1.setColor("Black");
    m1.setRefillable(true);
    m1.setInkStatus(false);

    cout << "Marker 1:\n";
    m1.write();
    m1.refill();

    cout << "\n";

    BoardMarker m2;
    m2.setCompany("Uni-ball");
    m2.setColor("Green");
    m2.setRefillable(false);
    m2.setInkStatus(true);

    cout << "Marker 2:\n";
    m2.write();
    m2.refill();

    cout << "\n";

    BoardMarker m3;
    m3.setCompany("Piano");
    m3.setColor("Blue");
    m3.setRefillable(true);
    m3.setInkStatus(true);

    cout << "Marker 3:\n";
    m3.write();
    m3.refill();

    return 0;
}

