#include <iostream>
using namespace std;

class CustomerData {
private:
    double purchasesAmount;
public:
    CustomerData() { purchasesAmount = 0.0; }
    
    virtual void addPurchase(double amount) { purchasesAmount += amount; }
    double getPurchasesAmount() const { return purchasesAmount; }
};

class PreferredCustomer : public CustomerData {
private:
    double discountLevel;
public:
    PreferredCustomer() : CustomerData() { discountLevel = 0.0; }

    void addPurchase(double amount) override {
        CustomerData::addPurchase(amount); 
        double total = getPurchasesAmount(); 
        
        if (total >= 2000)      discountLevel = 0.10; 
        else if (total >= 1500) discountLevel = 0.07;
        else if (total >= 1000) discountLevel = 0.05;
    }
};

int main() {
    PreferredCustomer customer;
    
    customer.addPurchase(500);
    cout << "Total Purchases: $" << customer.getPurchasesAmount() << endl;
    
    customer.addPurchase(600);
    cout << "Total Purchases: $" << customer.getPurchasesAmount() << endl;
    
    customer.addPurchase(900);
    cout << "Total Purchases: $" << customer.getPurchasesAmount() << endl;

    return 0;
}