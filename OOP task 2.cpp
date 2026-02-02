//Q2

#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
    double pi;

public:
    Circle() {
        pi = 3.14159;
        radius = 0;
    }

    void setRadius(double r) {
        radius = r;
    }

    double getRadius() {
        return radius;
    }

    double getArea() {
        return pi * radius * radius;
    }

    double getDiameter() {
        return 2 * radius;
    }

    double getCircumference() {
        return 2 * pi * radius;
    }
};

int main() {
    Circle c1;
    double radius;

    cout << "Input radius: ";
    cin >> radius;

    c1.setRadius(radius);

    cout << "Area: " << c1.getArea() << endl;
    cout << "Diameter: " << c1.getDiameter() << endl;
    cout << "Circumference: " << c1.getCircumference() << endl;

    return 0;
}

