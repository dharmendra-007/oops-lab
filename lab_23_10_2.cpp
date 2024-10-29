// 2. wap to implement hierachical inheritance .

#include<iostream>
using namespace std;
class Base {
protected:
  int base_data;

public:
  void setBaseData(int data) { 
  base_data = data; 
  }

  void displayBaseData(){
    cout << "Base Data : " << base_data << endl;
  }
};

class Derived1 : public Base{
protected:
  int derived_data_1;

public:
  void setDerivedData1(int data) { 
  derived_data_1 = data; 
  }

  void displayDerived1(){
    cout << "Derived Data 1 : " << derived_data_1 << endl;
  }
};

class Derived2 : public Base {
protected:
  int derived_data_2;

public:
  void setDerivedData2(int data) { 
  derived_data_2 = data; 
  }

  void displayDerived2(){
    cout << "Derived Data 2 : " << derived_data_2 << endl;
  }
};

int main() {
  Derived1 obj1;
  obj1.setBaseData(50);
  obj1.setDerivedData1(100);
  obj1.displayBaseData();
  obj1.displayDerived1();

  Derived2 obj2;
  obj2.setBaseData(32);
  obj2.setDerivedData2(17);
  obj2.displayBaseData();
  obj2.displayDerived2();
  return 0;
}