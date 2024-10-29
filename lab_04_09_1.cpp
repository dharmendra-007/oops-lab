#include <iostream>
using namespace std;

class Example {
private:
    int a, b;
public:
    // Constructor to initialize values
    Example(int num1, int num2) {
        a = num1;
        b = num2;
    }

    // Member function: simply a function that is part of the class
    int sum() {
        return a + b;
    }

    // Inline function: suggested to be inlined by the compiler
    inline int product() {
        return a * b;
    }
};

int main() {
    Example obj(10, 5);

    // Calling the member function
    cout << "Sum (using member function): " << obj.sum() << endl;

    // Calling the inline function
    cout << "Product (using inline function): " << obj.product() << endl;

    return 0;
}
