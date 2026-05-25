#include<iostream>
using namespace std;
class A{
    public:
    virtual void hello(){
        cout << "This is a base class" << endl;
    }
};

class B: public A{
    public:
    void hello() override{
        cout << "This is a derived class" << endl;
    }
};

int main(){
    
    B b1;
    b1.hello();

    B* b2 = new B();
    b2 -> hello();

    A* a = new B();
    a -> hello();

    delete b2;
    delete a;

    return 0;
    
}