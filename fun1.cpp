#include <iostream>
using namespace std;

string asker(string prompt){
  string s;
  cout << prompt << endl;
  cin >> s;
  return s;
}

string asker(string askPrompt, string thankPrompt){
  string s;
  cout << askPrompt << endl;
  cin >> s;
  cout << thankPrompt << endl;
  return s;
}

/*bool yesOrNo(string prompt){
  //should display prompt
  //then ask for an answer   
  //return true if answer == "yes" 
  //return false otherwise
      //cout << "Yes or no?" << endl;
      //cin >> prompt;
      //if(prompt == "yes"){
      //cout << "True" << endl;
      //}
      //else{
      //cout << "False" << endl;
      //}


  
  string input;
  cout << prompt << endl;
  cin >> input;
  if (input == "yes"){
    return true;
  }
  else{
    return false;
  }
  return 0;
}
*/

bool yesOrNo2(string prompt){
  string input;
  cout << prompt << endl;
  cin >> input;
  // !(input == "yes" || input == "no")
  while(input != "yes" && input != "no"){
    cout << prompt << endl;
    cin >> input;
  }
  return(input == "yes");
}

int main(){

  bool answer = yesOrNo2("Are dogs good?");
  //yesOrNo("yes or no?");
  
  string myStr = asker("Enter somthing (not dogs):");
  asker("Enter a different thing");
  asker("Eh, whatever");
  cout << "You entered: " << myStr << endl;

  
  return 0;
}