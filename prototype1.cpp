#include <iostream>
using namespace std;

int adder(int num1,  int num2)

int rec(int num);

int main(){

  adder(1,2);
  return 0;
}

int adder(int num1, int num2){
  cout << "Look I'm adding" << endl;
  if(num1 > 0)
  return num1 + num2;
}