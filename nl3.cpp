#include <iostream>
using namespace std;

class Feet; // Forward declaration

class Inch {
private:
    float inches;

public:
    Inch(float i = 0) : inches(i) {}

    // Getter function to access inches
    float getInches() const {
        return inches;
    }

    // Conversion method to convert Inch to Feet
    Feet toFeet() const;

    void displayInches() const {
        cout << "Inches: " << inches << endl;
    }
};

class Feet {
private:
    float feet;

public:
    Feet(float f = 0) : feet(f) {}

    // Getter function to access feet
    float getFeet() const {
        return feet;
    }

    // Conversion method to convert Feet to Inch
    Inch toInches() const;

    void displayFeet() const {
        cout << "Feet: " << feet << endl;
    }
};

// Method definitions for conversions
Feet Inch::toFeet() const {
    return Feet(inches / 12.0f);
}

Inch Feet::toInches() const {
    return Inch(feet * 12.0f);
}

int main() {
    Inch inchObj(36); // 36 inches
    Feet feetObj = inchObj.toFeet(); // Convert Inch to Feet

    inchObj.displayInches();
    feetObj.displayFeet();

    Feet newFeetObj(3); // 3 feet
    Inch newInchObj = newFeetObj.toInches(); // Convert Feet to Inch

    newFeetObj.displayFeet();
    newInchObj.displayInches();

    return 0;
}
