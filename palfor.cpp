#include <iostream>
#include <string>
using namespace std;

int main(){
  string str;

  cout << "Enter a word" << endl;
  cin >> str;

  int l = str.length();

  bool isPal = true;
  for(int i = 0; i < l; i++){
    if(str[i] != str[l - i - 1]){
      isPal = false;
    }
  }

  if(isPal){
    cout << "palindrome" << endl;
  }
  else{
    cout << "not palindrome" << endl;
  }
}