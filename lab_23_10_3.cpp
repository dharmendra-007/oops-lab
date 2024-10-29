// 3. wap to implement hybrid inheritance and demonstrate the use of virtual class to avoid abmiguity problem .

#include<iostream>
using namespace std;

class Base {
protected:
    int base_data;

public:
    void setBaseData(int value) {
        base_data = value;
    }

    void displayBase() {
        cout << "Base class data: " << base_data << endl;
    }
};

class Intermediate1 : virtual public Base {
};

class Intermediate2 : virtual public Base {
};

class Derived : public Intermediate1, public Intermediate2 {
public:
    void displayDerived() {
        cout << "Derived class with base data: " << base_data << endl;
    }
};

int main() {
    Derived obj;
    obj.setBaseData(50);
    obj.displayBase();
    obj.displayDerived();

    return 0;
}