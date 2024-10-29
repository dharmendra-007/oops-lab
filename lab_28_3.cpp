/*
3.write a program to count no of objects used in the program using static variable . print a static member function to check the total no of objects created in the program at the end .
*/

#include <iostream>
using namespace std;

class Person {
    static int count;  // Static variable to count the number of objects
    string name;

public:
    // Constructor
    Person() {
        cout << "Enter name: ";
        cin >> name;
        count++;  // Increment the count each time an object is created
    }

    // Static member function to print the total number of objects
    static void printCount() {
        cout << "Total objects: " << count << endl;
    }
};

// Initialize static member variable
int Person::count = 0;

int main() {
    Person p1;
    Person p2;
    Person p3;
    Person p4;
    Person p5;

    // Call the static member function to print the count
    Person::printCount();

    return 0;
}
