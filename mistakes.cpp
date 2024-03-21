#include <iostream>
using namespace std;

int main(){
  int num = 0;

  cout << "Enter an integer" << endl;
  cin >> num;

  while(num = 1){
    cout << "Enter a non-zero number: ";

    cin >> num;
  }

  cout << "You got out" << endl;
  return 0;
  
}