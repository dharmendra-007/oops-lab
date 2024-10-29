// #include<iostream>
// using namespace std;

// class operatorol{
//     int a;

//     public:
//     operatorol(){
//         cin>>a;
//     }
//     void operator --(){
//         --a;
//     }
//     void operator ++(){
//         ++a;
//     }
//     void display2(){
//         cout<<a<<endl;
//     }
// };

// int main(){
//     operatorol ob;
//     --ob;
//     ob.display2();
//     ++ob;
//     ++ob;
//     ob.display2();
// }
// #include <iostream>
// using namespace std;

// class Counter {
// private:
//     int value;

// public:
//     // Constructor
//     Counter(int v = 0) : value(v) {}

//     // Overloading postfix ++
//     Counter operator++(int) {
//         Counter temp = *this; // Save the current state
//         value++; // Increment value
//         return temp; // Return the old state
//     }

//     // Display function
//     void display() const {
//         cout << "Value: " << value << endl;
//     }
// };

// int main() {
//     Counter c(5);

//     c++; // Using the overloaded postfix ++ operator
//     c.display(); // Output: Value: 6

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Counter {
// private:
//     int value;

// public:
//     // Constructor
//     Counter(int v = 0) : value(v) {}

//     // Overload prefix ++
//     Counter& operator++() {
//         value++;        // Increment the value
//         return *this;   // Return the updated object
//     }

//     void display() const {
//         cout << "Value: " << value << endl;
//     }
// };

// int main() {
//     Counter c(5);
//     ++c;              // Prefix increment
//     c.display();      // Output: Value: 6

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Counter {
// private:
//     int value;

// public:
//     // Constructor
//     Counter(int v = 0) : value(v) {}

//     // Overload postfix ++
//     Counter operator++(int) {
//         Counter temp = *this; // Save the current value
//         value++;              // Increment the value
//         return temp;          // Return the original value
//     }

//     void display() const {
//         cout << "Value: " << value << endl;
//     }
// };

// int main() {
//     Counter c(5);
//     c++;              // Postfix increment
//     c.display();      // Output: Value: 6

//     return 0;
// }

#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    // Constructor
    Counter(int v = 0) : value(v) {}

    // Overloading prefix ++
    Counter& operator++() {
        ++value; // Increment value
        return *this; // Return the updated object
    }

    // Display function
    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Counter c(5);

    ++c; // Using the overloaded prefix ++ operator
    c.display(); // Output: Value: 6

    return 0;
}