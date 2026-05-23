#include <iostream>
using namespace std;

class Number {
public:
    double val;
    Number(double v) { val = v; }
    Number operator + (Number obj) { return Number(val + obj.val); }
    Number operator - (Number obj) { return Number(val - obj.val); }
    Number operator * (Number obj) { return Number(val * obj.val); }
    Number operator / (Number obj) { return Number(val / obj.val); }
};

int main() {
    Number n1(10), n2(2);

    Number a = n1 + n2;
    Number b = n1 - n2;
    Number c = n1 * n2;
    Number d = n1 / n2;

    cout << "Add: " << a.val << endl;
    cout << "Subtract: " << b.val << endl;
    cout << "Multiply: " << c.val << endl;
    cout << "Divide: " << d.val << endl;

    return 0;
}