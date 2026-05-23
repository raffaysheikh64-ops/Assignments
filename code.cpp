#include<iostream>
using namespace std;
class teacher{
    public:
    string name;
    virtual void display(){
        cout << "Teacher Name: " << name << endl;
    }
};

class course{
    public:
    string coursename;
    void display(){
        cout << "Course Name: " << coursename << endl;
    }
};
int main(){
    teacher t1;
    course c1;
    teacher *t2;
    course *c2;
    t2 = &t1;
    c2 = &c1;
    t1.name = "Dostoevesky";
    c1.coursename = "Literature";
    t1.display();
    c1.display();
    t2->display();
    c2->display();

}