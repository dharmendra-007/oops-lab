/*
1.wap to implement friend function to increment the private data member of a class by x given by the user. 
[the x is last 4 digit of self registration number]
*/

#include<iostream>
using namespace std;

class Counter{
  int num;
  int regd;

  public:
  Counter(){
    cout << "Enter the number : " ;
    cin >> num;
    cout << "Enter the last 4 digit of self registration number : ";
    cin >> regd;
  }

  friend void increment(Counter &d);

  void display(){
    cout << "Number : "<< num <<endl;
  }
};

void increment(Counter &d){
  d.num += d.regd;
}

int main () {
  Counter ob1;
  ob1.display();
  increment(ob1);
  ob1.display();
  return 0;
}