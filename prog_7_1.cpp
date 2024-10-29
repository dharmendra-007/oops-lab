#include<iostream>
#include<string.h>
using namespace std;

class Swap {
  public:
  void swapCallByValue(int num1, int num2){
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "num1: " << num1 << endl << "num2: " << num2 << endl;
  }
  void swapCallByAddress(int *num1, int *num2) {
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
    cout << "num1: " << *num1 << endl << "num2: " << *num2 << endl;
  }
  void swapCallByRef(int &num1, int &num2){
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "num1: " << num1 << endl << "num2: " << num2 << endl;
  }
};

int main(){
  int num1 , num2;
  cout << "Enter num1: " ;
  cin >> num1;
  cout << "Enter num2: " ;
  cin >> num2;
  Swap test1;
  // test1.swapCallByValue(num1 , num2);
  // test1.swapCallByAddress(&num1 , &num2);
  test1.swapCallByRef(num1 , num2);
  return 0;
}
