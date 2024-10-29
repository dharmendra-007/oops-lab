// 3.wap to demonstrate multiple exception handling through nested exception handling .

#include <iostream>
using namespace std;

class except
{
  int num;
  int den;
  int res;

public:
  void handling()
  {
    try
    {
      num = 10;
      den = 0;
      try
      {
        if (den == 0)
        {
          throw den;
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
      den = 2;
      if (den == 0)
      {
        throw den;
      }
      else
      {
        res = num / den;
        cout << "The Result is : " << res << endl;
      }
    }
    catch (int y)
    {
      cout << "expception : division by zero" << endl;
    }
  }
};

int main()
{
  except e1;

  e1.handling();

  return 0;
}