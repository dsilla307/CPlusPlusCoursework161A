#include <iostream>
#include <string>
using namespace std;

int main(){

  string str;
  cout << "Enter a palindrome: " << endl;
  getline(cin,str);

  

  //test our use of getline
  //cout << str << endl;
  // a man a plan a canal panama
  // goal: test whether a phrase is a palindrome
  // in just one while loop
  int l = str.length();
  int i = 0; // counting from the left
  int j = l - 1; // counting from the right 

  bool isPal = true;
  while(i < l){
    if(str[i] != ' ' && str[j] != ' '){
      if(str[i] != str[j]){
        isPal = false;
      }
      i++;
      j--;
    }
    else{
      if(str[i] == ' '){
        i++;
      }
      if(str[j] == ' '){
        j--;
      }
    }  
    //cout << "i" << i <<endl;
    //cout << "j" << j << endl;
    //cout << "is pal "<<isPal << endl;
  }
  if(isPal){
    cout << "Is palindrome" << endl;
  }
  else{
    cout << "Not palindrome" << endl;
  }
  
  return 0;
}