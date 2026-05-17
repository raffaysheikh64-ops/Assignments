#include <iostream>
using namespace std;

class Shape {
public:
    virtual double getArea() {
        cout << "Error: Unknown shape area." << endl;
        return 0.0;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) { radius = r; }

    double getArea() {
        return 3.14159 * radius * radius; 
    }
};

int main() {
    Circle myCircle(5.0);    
    cout << "The calculated area of the circle is: " << myCircle.getArea() << endl;

    return 0;
}