// 1. write a program to evaluate multiplication of two objects using operator overloading.

#include<iostream>
using namespace std;

class Overload {
    int value;

  public: 
    Overload(int value = 0){
      this -> value = value;
    }

    Overload operator*(const Overload &other){
      Overload temp;
      temp.value = value * other.value;
      return temp;
    }

    void display(){
      cout << "Value is : " << value << endl;
    }
};

int main () {
  Overload ob1;
  Overload ob2(10);
  Overload ob3(20);

  ob1 = ob2 * ob3;
  ob1.display();
  return 0;
}
