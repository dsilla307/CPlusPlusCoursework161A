#include <iostream>
using namespace std;

int main(){
  int option = 0;
  cout << "Enter a number between 1 and 5" << endl;

  cin >> option;
/*
  if(option == 1){

  
  }
  else if (option == 2){
    
  }
  else{

  }
*/

  switch(option){
    case 1:
      cout << "You have one dog" << endl;
      break;
    case 2:
      cout << "You have two cats" << endl;
      break;
    case 3:
    case 4:
      cout << "You have some number of birds" << endl;
      break;
    case 5:
      cout << "That's a lot of birds" << endl;
      break;
    default:
      cout << "These are your ideal pets" << endl;
    
  }
  return 0;
}