// #include<iostream>
// using namespace std;

// // Base class
// class Base {
// public:
//     int base_data;
    
//     void setBaseData(int value) {
//         base_data = value;
//     }

//     void displayBase() {
//         cout << "Base class data: " << base_data << endl;
//     }
// };

// // Derived class
// class Derived : public Base {
// public:
//     int derived_data;
    
//     void setDerivedData(int value) {
//         derived_data = value;
//     }

//     void displayDerived() {
//         cout << "Derived class data: " << derived_data << endl;
//     }
// };

// int main() {
//     Derived obj;
//     obj.setBaseData(10);
//     obj.setDerivedData(20);
    
//     obj.displayBase();
//     obj.displayDerived();

//     return 0;
// }




// #include<iostream>
// using namespace std;

// // Base class
// class Base {
// public:
//     int base_data;

//     void setBaseData(int value) {
//         base_data = value;
//     }

//     void displayBase() {
//         cout << "Base class data: " << base_data << endl;
//     }
// };

// // First derived class
// class Derived1 : public Base {
// public:
//     void displayDerived1() {
//         cout << "Derived1 class, base data: " << base_data << endl;
//     }
// };

// // Second derived class
// class Derived2 : public Base {
// public:
//     void displayDerived2() {
//         cout << "Derived2 class, base data: " << base_data << endl;
//     }
// };

// int main() {
//     Derived1 obj1;
//     obj1.setBaseData(30);
//     obj1.displayBase();
//     obj1.displayDerived1();

//     Derived2 obj2;
//     obj2.setBaseData(40);
//     obj2.displayBase();
//     obj2.displayDerived2();

//     return 0;
// }



// #include<iostream>
// using namespace std;

// // Base class
// class Base {
// public:
//     int base_data;

//     void setBaseData(int value) {
//         base_data = value;
//     }

//     void displayBase() {
//         cout << "Base class data: " << base_data << endl;
//     }
// };

// // Intermediate class using virtual inheritance
// class Intermediate1 : virtual public Base {
// };

// // Intermediate class using virtual inheritance
// class Intermediate2 : virtual public Base {
// };

// // Derived class inheriting both Intermediate1 and Intermediate2
// class Derived : public Intermediate1, public Intermediate2 {
// public:
//     void displayDerived() {
//         cout << "Derived class with base data: " << base_data << endl;
//     }
// };

// int main() {
//     Derived obj;
//     obj.setBaseData(50);
//     obj.displayBase();
//     obj.displayDerived();

//     return 0;
// }


// #include<iostream>
// using namespace std;

// // Base class
// class Base {
// public:
//     virtual void display() {
//         cout << "Display of Base class" << endl;
//     }
// };

// // Derived class
// class Derived : public Base {
// public:
//     void display() override {
//         cout << "Display of Derived class" << endl;
//     }
// };

// int main() {
//     Base* basePtr;
//     Derived obj;

//     basePtr = &obj;
//     basePtr->display(); // Calls the derived class function due to overriding

//     return 0;
// }