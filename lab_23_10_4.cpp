// 4. wap to override a function in inheritance . (it is also known as function overriding)

#include<iostream>
using namespace std;

// Base class
class Base {
public:
    virtual void display() {
        cout << "Display of Base class" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void display() override {
        cout << "Display of Derived class" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived obj;

    basePtr = &obj;
    basePtr->display(); // Calls the derived class function due to overriding

return 0;
}