#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
    string cnic;

public:
    void setName(string n) {
        if (n.empty()) {
            cout << "Invalid name!" << endl;
        } else {
            name = n;
        }
    }

    void setAge(int a) {
        if (a < 0 || a > 120) {
            cout << "Invalid age!" << endl;
        } else {
            age = a;
        }
    }

    void setCnic(string c) {
        if (c.length() != 13) {
            cout << "Invalid CNIC!" << endl;
        } else {
            cnic = c;
        }
    }

    string getName() { return name; }
    int    getAge()  { return age;  }
    string getCnic() { return cnic; }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age:  " << age  << endl;
        cout << "CNIC: " << cnic << endl;
    }
};

class Student : public Person {
private:
    string degree;
    float  gpa;

public:
    void setDegree(string d) { degree = d; }

    void setGpa(float g) {
        if (g < 0.0 || g > 4.0) {
            cout << "Invalid GPA!" << endl;
        } else {
            gpa = g;
        }
    }

    string getDegree() { return degree; }
    float  getGpa()    { return gpa;    }

    void displayAll() {
        display();
        cout << "Degree: " << degree << endl;
        cout << "GPA:    " << gpa    << endl;
    }
};

int main() {
    Student s;

    s.setName("Ali");
    s.setAge(19);
    s.setCnic("3520212345678");

    s.setDegree("Computer Science");
    s.setGpa(3.8);

    s.displayAll();

    cout << "-----------------------" << endl;

    Student s2;
    s2.setName("Raffay");
    s2.setAge(19);
    s2.setCnic("3216780021789");
    s2.setDegree("Software Engineering");
    s2.setGpa(3.6);
    s2.displayAll();
}