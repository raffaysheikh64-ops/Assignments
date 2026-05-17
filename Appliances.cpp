#include <iostream>
using namespace std;

class SmartAppliance {
protected:
    string name;
public:
    SmartAppliance(string n) { name = n; }

    virtual void turnOn() {
        cout << name << " is now ON." << endl;
    }
};

class SmartHeater : public SmartAppliance {
private:
    int temp;
public:
    SmartHeater(string n, int t) : SmartAppliance(n) { temp = t; }

    void turnOn() override {
        if (temp > 40) {
            cout << "Warning! " << name << " is too hot to turn on!" << endl;
        } else {
            SmartAppliance::turnOn(); 
        }
    }
};

int main() {
    SmartHeater heater("Room Heater", 45);
    
    heater.turnOn(); 

    return 0;
}