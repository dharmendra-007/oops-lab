/*
2.WAP a program to create a financial calculator to calculate profit of a user based on given principal amount , Intrest rate , time period in months from the given data calculate the user profit using simple intrest and compound intrest.
*/

#include <iostream>
#include <cmath> 

using namespace std;

class FinancialCalculator {
    double principal, rate, time;

public:
    
    FinancialCalculator() {
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the interest rate (in percentage): ";
    cin >> rate;
    cout << "Enter the time period (in months): ";
    cin >> time;
    }

    double calculateSimpleInterest() {
        return (principal * rate * (time / 12)) / 100;
    }

    double calculateCompoundInterest() {
        double timeInYears = time / 12; 
        return principal * (pow((1 + rate / 100), timeInYears) - 1);
    }

    void displayDetails() {
        cout << "Principal Amount: " << principal << endl;
        cout << "Interest Rate: " << rate << "%" << endl;
        cout << "Time Period: " << time << " months" << endl;
    }
};

int main() {
    FinancialCalculator calculator;
    int choice;
    do {
        
        cout << "\nFinancial Calculator Menu:" << endl;
        cout << "1. Calculate Simple Interest" << endl;
        cout << "2. Calculate Compound Interest" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                
                double simpleInterest = calculator.calculateSimpleInterest();
                calculator.displayDetails();
                cout << "Simple Interest Profit: " << simpleInterest << endl;
                break;
            }
            case 2: {
                
                double compoundInterest = calculator.calculateCompoundInterest();
                calculator.displayDetails();
                cout << "Compound Interest Profit: " << compoundInterest << endl;
                break;
            }
            case 3: {
                
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please enter a valid option." << endl;
                break;
            }
        }
    } while (choice != 3); 

    return 0;
}
