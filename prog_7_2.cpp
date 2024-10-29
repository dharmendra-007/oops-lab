#include<iostream>
using namespace std;
class Operation {
  public:
  void nra(int num){
    cout << "Square of " << num << " is : "<< num * num << endl;
  }

  void nrna(){
    cout << "This is function with no return type and no arguments"<<endl;
  }

  int rna(){
    cout << "This is function with return type and no arguments"<<endl;
    return 0;
  }

  int ra(int num){
    return num*num*num;
  }
};

int main(){
  int x;
  cout << "Enter a Number : ";
  cin >> x;

  Operation test;
  test.nra(x);
  test.nrna();
  test.rna();
  cout << "Cube of " << x << " is : " <<test.ra(x) << endl;
  int *p = &x;

  sizeof(p);

  return 0;
}