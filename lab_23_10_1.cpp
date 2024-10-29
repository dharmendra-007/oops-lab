// 1. wap to implement single inheritance . (write down the observations how we can achieve the process of inheritance through coding and show a child class inheriting the data to a derived class)

#include <iostream>
using namespace std;

// Base class
class Base
{
protected:
    int base_data;

public:
    void setBaseData(int value)
    {
        base_data = value;
    }

    void displayBase()
    {
        cout << "Base class data: " << base_data << endl;
    }
};

// Derived class
class Derived : public Base
{
    int derived_data;

public:
    void setDerivedData(int value)
    {
        derived_data = value;
    }

    void displayDerived()
    {
        cout << "Derived class data: " << derived_data << endl;
    }

    int newData()
    {
        return base_data + derived_data;
    }
};

int main()
{
    Derived obj;
    obj.setBaseData(10);
    obj.setDerivedData(20);

    obj.displayBase();
    obj.displayDerived();

    cout << "Base Data + Derived Data = " << obj.newData();

    return 0;
}

/*
Observation
--------------------------------------------------------------------------

1.Base Class: Defines base_data (protected) and methods to set (setBaseData) and display it (displayBase).

2.Derived Class: Inherits Base using : public Base, gaining access to base_data. Adds its own data (derived_data) with setter (setDerivedData) and display (displayDerived) methods.

3.Demonstration: In main, creating an object of Derived allows setting and displaying both Base and Derived data, showing inheritance. The newData method confirms that Derived accesses Base members directly.
*/