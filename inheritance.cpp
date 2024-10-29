#include<iostream>
#include<string.h>
using namespace std;

class student {
  public:
  string name;
  string dept;
  void inputNameDept(){
    cout << "Enter Name ";
    cin >> name;
    cout <<"Enter dept ";
    cin >> dept;
  }
};
class people : public student{
  public:
  double cgpa;
  void inputcgpa(){
    cout << "Enter cgpa ";
    cin >> cgpa;
  }
  void showdata(){
    cout << "Name : " << name << endl;
    cout << "dept : " << dept << endl;
    cout << "cgpa : " << cgpa << endl;
  }
};

int main () {
  return 0;
}