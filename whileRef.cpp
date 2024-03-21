#include <iostream>
using namespace std;

// should run a while loop collecting values
// and return the sum of those values
// *and* put the number of values read in
// into the reference variable numberOfValues
// loop should keep going until user enters
// something < 0

double averageRef(int &numberOfValues);

int main(){
  int numberThings = 0;
  double sum = averageRef(numberThings);
  //int num;

  //while(num >= 0){
  //  cout << "Enter a number" << endl;
  //  cin >> num;
  //  sum = sum + num;
  //  numberThings++;
  //}

  
  cout << "The average is: " << sum / numberThings << endl;
  return 0;
}

double averageRef(int &numberOfValues){
  numberOfValues = 0;
  double temp = 0;
  double input = 0;
  cout << "Enter a number (<0 to quit): ";
  cin >> input;
  while(input >= 0){
    numberOfValues++;
    temp = temp + input;
    cout << "Enter a number (<0 to quit): ";
    cin >> input;
  }
  return temp;
}