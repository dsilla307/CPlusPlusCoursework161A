#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

string sarcasmCase(string s){
  for(int i = 0; i < s.length(); i++){
    if(rand() % 2 == 0){
      s[i] = toupper(s[i]);
    }
    else{
      s[i] = tolower(s[i]);
    }
  }
  return s;
}

int main(){
  srand(time(0));

  string str = "you can't do that!";

  cout << sarcasmCase(str) << endl;
}