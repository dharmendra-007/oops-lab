/*
function overloading area of different shapes
*/

#include<iostream>
using namespace std;
class Shape {
public:
float area;
void square(int side ){
area = side * side;
cout << "area: " << area << endl;
}

void triangle(int base, int height){
area = 0.5 * base * height;
cout << "area: " << area << endl;
}

void circle(float radius){
area = 3.14 * radius * radius;
cout << "area: " << area << endl;
}
};

int main() {
  int choice , option = 1;
  cout << "Welcome to the program" << endl;
  Shape area1;
  while (option == 1) {
    cout << "1. Area of the square" << endl;
    cout << "2. Area of the triangle" << endl;
    cout << "3. Area of the circle " << endl;
    cout << "Enter a choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
      int side;
      cout << "Eneter side : ";
      cin >> side;
      area1.square(side);
      break;

    case 2:
      int base , height;
      cout << "Eneter Base : ";
      cin >> base;
      cout << "Eneter Height : ";
      cin >> height;
      area1.triangle(base , height);
      break;

    case 3:
      float radius;
      cout << "Eneter Radius ";
      cin >> radius;
      area1.circle(radius);
      break;

    default:
      break;
    }
    cout << "Do you want to continue " << endl;
    cout << "Press 1 to continue and -1 to exit : ";
    cin >> option;
    if (option == -1){
      cout << "Thank you !!" << endl;
      break;
    }else{
      continue;
    }
  }
  return 0;
}