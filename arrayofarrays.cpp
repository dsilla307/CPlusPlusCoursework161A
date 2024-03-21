#include <iostream>
#include <string>
using namespace std;

int main(){
  string strs[5];

  for(int i = 0; i < 5; i++){
    cout << "Enter a string" << endl;
    cin >> strs[i];
  }

  for(int i = 0; i < 5; i++){
    cout << strs[i][0];
  }
  cout << endl;
  return 0;
}