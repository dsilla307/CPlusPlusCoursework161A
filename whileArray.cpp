#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
  int arr[10]; // make an array
  srand(time(0)); // initialize random number generator

  //initialize with random numbers
  for(int i=0;i<10;i++){
    arr[i] = rand() % 21; // numbers from 0 - 20 (inclusive)
    cout << arr[i] << endl << endl;
  }

  // write a while loop that sums all the numbers in the array
  // starting at index 0 and increasing by 1 each loop
  // until you hit a 0, at which point you are *done* looping
  int sum = 0;

  int j = 0; //index for while array
  // while(arr[j] != 0 && j < 10){  
  // THE COMPILER HAS A PROBLEM WITH THIS LOGIC
  // IN ITS OPTIMIZATION AND WE HAD TO REVERSE THE STATEMENT
  while(j < 10 && arr[j]){
    cout << j << endl;
    sum = sum + arr[j];
    j++;
    
  }


  
  cout << "The sum was: " << sum << endl;
  
  return 0;
}