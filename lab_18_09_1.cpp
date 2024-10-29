/*
1. WAP to create student information student to store , update and display using appropriate function . The student information contain student registration no . , name and cgpa( Here in the update function ask the user about which data to be modified and before modifing display the current data)
*/

#include<iostream>
using namespace std;

class Student {
  string name;
  long long int regd;
  float cgpa;

  public:
  void input(){
    cout << "Enter name : ";
    cin >> name;
    cout << "Enter regd no : ";
    cin >> regd;
    cout << "Enter cgpa : ";
    cin >> cgpa;
  }

  void update() {
    int choice;

    cout << "Current student is : " << endl;
    display();

    cout << "Which data you want to modify : " << endl;
    cout << "1. Name" << endl;
    cout << "2. Registration No" << endl;
    cout << "3. Cgpa" << endl;
    cout << "4. All" << endl;

    cin >> choice;

    switch (choice)
    {
    case 1 : 
      cout << "Enter new name : " ;
      cin >> name;
      break;

    case 2 : 
      cout << "Enter new regd no : " ;
      cin >> regd;
      break;

    case 3 : 
      cout << "Enter new cgpa : " ;
      cin >> cgpa;
      break;

    case 4 : 
      cout << "Enter new name : " ;
      cin >> name;
      cout << "Enter new regd no : " ;
      cin >> regd;
      cout << "Enter new cgpa : " ;
      cin >> cgpa;
      break;
    
    default:
      cout << "Invalid input" << endl;
      break;
    }
  }

  void display(){
    cout << "Name : " << name << endl;
    cout << "Regd no : " << regd << endl;
    cout << "Cgpa : " << cgpa << endl << endl;

  }  
};

int main(){
  int n , choice;
  cout << "Enter the no of students : ";
  cin >> n;

  Student students[n];

  for(int i = 0; i < n; i++){
    cout << "Enter details for Student " << i + 1 << endl;
    students[i].input();
  }
  while(true){
    cout << "Which operation do you want to perform ? " << endl;
    cout << "1. update " << endl;
    cout << "2. display" << endl;
    cout << "press any key to exit " << endl;

    cin >> choice;
    switch(choice){
      case 1:
        int st;
        cout << "Which student do you want to modify ? " << endl;
        cin >> st;
        students[st - 1].update();
        break;

      case 2:
        cout << "Which student do you want to display " << endl;
        cin >> st;
        students[st - 1].display();
        break;

      default:
        cout << "program exited" << endl;
        return 0;
        break;
  }
  }
}