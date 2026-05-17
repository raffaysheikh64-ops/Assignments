#include<iostream>
#include<string>
using namespace std;

class Employee{
    protected:
        string name;
        int employeeID;
    public:
    Employee(string n,int id){
        name = n;
        employeeID = id;
    }
    virtual void print(){

            cout << "Name: " << name << endl;
            cout << "Employee ID: " << employeeID << endl;
        }
};

class Productionworker : public Employee{
    private:
        int shift;
        double payrate;
    public:
        Productionworker(string n, int id, int s, double p):
        Employee(n, id)
        {
            shift = s;
            payrate = p;
        }
        void print(){
            Employee::print();
            cout << "Shift: " << shift << endl;
            cout << "Pay Rate: $" << payrate << endl;
        }
};

int main(){
    Productionworker worker("Raffay", 123, 2, 15.50 );
    worker.print();

    return 0;
}