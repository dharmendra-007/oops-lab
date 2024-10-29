/*
3. wap to implement -- prefix and postfix operation using operator overloading.
*/

#include <iostream>
using namespace std;

class Number
{
private:
  int value;

public:
  Number(int a)
  {
    value = a;
  }

  void operator--()
  {
    --value;
  }

  void operator--(int)
  {
    value--;
  }

  void display()
  {
    cout << "value is : " << value << endl;
  }
};

int main()
{
  Number ob(5);
  ob.display();

  --ob;
  ob.display();

  ob--;
  ob.display();
  return 0;
}
