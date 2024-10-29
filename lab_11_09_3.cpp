/*
3.wap to convert inch value to feet value using class to class conversion (if the conversion is bidirectional then use class to class conversion else class to basic)
*/

#include <iostream>
using namespace std;
class inch;

class Feet
{
  int feet;

public:
  Feet(int feet = 0)
  {
    this -> feet = feet;
  }

  void display()
  {
    cout << "feet=" << feet << endl;
  }
};

class Inch
{
  int inch;

public:
  Inch(int inch = 0)
  {
    this -> inch = inch;
  }
  operator Feet()
  {
    Feet temp = inch / 12;
    return temp;
  }
  void display()
  {
    cout << "inch=" << inch << endl;
  }
};

int main()
{
  Inch ob1(48);
  Feet ob2;
  ob2 = ob1;
  ob1.display();
  ob2.display();
  return 0;
}