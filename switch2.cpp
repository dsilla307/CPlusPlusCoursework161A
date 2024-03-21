#include <iostream>
using namespace std;

int main(){
  char opt;
  //cout << "Welcome: type an option and hit enter to proceed" << endl;

  double grade = 3.2;
  string studentID = "ccl1234";
  bool hasBribed = true;
  
  cout << "Welcome: type an option and hit enter to proceed" << endl;
  cout << "(a)" << "Check grade " << endl;
  cout << "(b)" << "Student ID: " << endl;
  cout << "(c)" << "Has Bribed Professor: " << endl;

  cin >> opt;

  switch(opt){
    case 'a':
      cout << "Your grade is: " << grade << endl;
      break;
    case 'b':
      cout << "Your student ID is: " << studentID << endl;
      break;
    case 'c':
      cout << "Have you gamed the system?: ";
      if(hasBribed){
        cout << "The scandal of it all" << endl;
      }
      else{
        cout << "You have regained humanity" << endl;
      }
    break;
    default:
      cout << "Sorry I didn't understand that" << endl;
  }
  return 0;
}