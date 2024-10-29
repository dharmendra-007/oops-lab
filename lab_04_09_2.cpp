// 2. wap to demonstrate the use of #define for creating a variable , a function. 

#include<iostream>
#define PI 3.14
#define square(r) (r * r)
using namespace std;

class Area {
  int radius;
  
  public:
  Area(){
    cout << "Enter radius : ";
    cin >> radius;
  }

  float areaofcircle(){
    return PI * square(radius);
  }
};

int main() {
  Area c1;
  cout << "Area of circle is : " << c1.areaofcircle();
  return 0;
}