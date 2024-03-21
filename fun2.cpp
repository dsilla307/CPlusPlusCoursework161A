#include <iostream>
using namespace std;
// & - Pass by Reference - Pass the box a variable that's in, not just the variable
int sillyFun(int &num){
  num = num + 1;
  return num;
} // ++i

int main(){
  int ourNumber = 10;
  cout << "sillyFun returns: " << sillyFun(ourNumber) << endl;
  cout << "ourNumber is: " << ourNumber << endl;
}