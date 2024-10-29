/* 
2. wap to evaluate following expression 
	1. ob1 = ob2 + ob3 / ob4
	2. ob1 = ob2 * ob3 - ob4
*/

#include<iostream>
using namespace std;

class Number {
    int value;

  public: 
    Number(int value = 0){
      this -> value = value;
    }

    Number operator+(const Number &other){
      Number temp;
      temp.value = value + other.value;
      return temp;
    }

    Number operator-(const Number &other){
      Number temp;
      temp.value = value - other.value;
      return temp;
    }

    Number operator*(const Number &other){
      Number temp;
      temp.value = value * other.value;
      return temp;
    }

    Number operator/(const Number &other){
      Number temp;
      temp.value = value / other.value;
      return temp;
    }

    void display(){
      cout << "Value is : " << value << endl;
    }
};

int main () {
  Number ob1;
  Number ob2(10);
  Number ob3(20);
  Number ob4(5);

  ob1 = ob2 + ob3 / ob4;
  ob1.display();

  ob1 = ob2 * ob3 - ob4;
  ob1.display();
  return 0;
}
