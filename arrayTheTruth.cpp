#include <iostream>
using namespace std;

int main(){
  int myArr[5] = {0,1,2,3,4};
  cout << myArr << endl;
  cout << *myArr << endl;        // myArr[0]
  cout << *(myArr + 1) << endl;  // myArr[1]
  cout << *(myArr + 2) << endl;  // myArr[2]
  
  return 0;
}