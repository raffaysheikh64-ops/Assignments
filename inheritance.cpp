#include<iostream>
using namespace std;
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Woof!" << endl;
    }
};

int main() {
    Dog d;
    d.eat();    // ✅ inherited from Animal
    d.bark();   // ✅ own function
}