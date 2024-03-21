#include <iostream>
using namespace std;

// write a function that doubles the elements in an array of ints

void doubler(int arr[], int l){
  for(int i=0; i<l; i++){
    arr[i] = 2 * arr[i];
  }
}

int main(){
  int myArr[5] = {0,1,2,3,4};

  doubler(myArr,5);

  for(int i = 0; i < 5; i++){
    cout << myArr[i] << endl;
  }
  return 0;
}