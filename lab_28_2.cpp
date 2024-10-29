/*
2.wap to exchange value between the classes using friend function
*/

#include <iostream>
using namespace std;
class Class2;
class Class1{
  int data1;
  public:
    Class1(){
      cout << "Enter the number for class 1 : " ;
      cin >> data1;
    }
    friend void exchange (Class1 &d , Class2 &m);
    void printvalue(){
      cout << data1 <<endl;
    }
};

class Class2{
  int data2;
  public:
  Class2(){
    cout << "Enter the number for class 2 : " ;
    cin >> data2;
  }
  void printvalue(){
    cout << data2 <<endl;
  }
  friend void exchange (Class1 &d , Class2 &m);
};

void exchange (Class1 &d , Class2 &m){
  int temp = d.data1;
  d.data1 = m.data2;
  m.data2 = temp;
}

int main () {
  Class1 ob1;
  Class2 ob2;

  exchange (ob1, ob2);
  ob1.printvalue();
  ob2.printvalue();
  
  return 0;
}