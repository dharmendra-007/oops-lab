// 2.wap to demonstrate multiple catch .

#include <iostream>
using namespace std;

class except
{
  int num;
  int den;
  int res;

public:
  except(int a, int b)
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
        throw den;
      }
      else if (num < 0 || den < 0)
      {
        throw string("exception : value(s) is/are negative");
      }
      else
      {
        res = num / den;
        cout << "The Result is : " << res << endl;
      }
    }
    catch (int x)
    {
      cout << "expception : division by zero" << endl;
    }
    catch (string x)
    {
      cout << x << endl;
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

  except e1(a, b);

  e1.handling();

  return 0;
}