// 1.wap to implement exception handling using "try through" and "catch block" for handling division by 0 exception.
#include <iostream>
using namespace std;

class Error
{
  int num;
  int den;
  int res;

public:
  Error(int a, int b)
  {
    num = a;
    den = b;
  }

  void handling()
  {
    try
    {
      if (den == 0)
      {
        throw 404;
      }
      else
      {
        res = num / den;
        cout << "The Result is : " << res << endl;
      }
    }
    catch (int)
    {
      cout << "Error : division by zero" << endl;
    }
  }
};

int main()
{
  int a;
  cout << "Enter The numerator : ";
  cin >> a;

  int b;
  cout << "Enter The denomenator : ";
  cin >> b;

  Error e1(a, b);

  e1.handling();

  return 0;
}