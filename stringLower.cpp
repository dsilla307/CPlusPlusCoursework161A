#include <iostream>
#include <cctype>
using namespace std;

string wholeLower(string s){
  for(int i = 0; i < s.length(); i++){
    // cout << "The " << i << "th character was: " << s[i] << endl; 
    s[i] = tolower(s[i]);
    // cout << "The " << i << "th character is: " << s[i] << endl;
  }
  return s;
}

int main(){
  string str = "YELLING AT THINGS";
  cout << wholeLower(str) << endl;
  // cout << str << endl;
  return 0;
  
}