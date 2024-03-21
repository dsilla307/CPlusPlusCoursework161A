#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
  string input;
  int guess = -1;
  srand(time(0));
  int winCount = 0;
  int games = 0;

  int coin = -1;

  //flip the coin

  coin = rand() % 2;
  cout << "Guess heads or tails: ";
  cin >> input;
  while(input != "quit"){
    
    if(input == "heads"){
      games++;
      guess = 0;
    }
    else if(input == "tails"){
      games++;
      guess = 1;
    }
    else {
      guess = -1;
    }

    if(guess = coin){
    cout << "You were right" << endl;
    winCount++;
    }
    else{
      cout << "Nope" << endl;
    }
    coin = rand() % 2;
    cout << "Guess heads or tails: ";
    cin >> input;
  }
  cout << "You won " << (float)winCount/games*100 << "% of times." << endl;
  return 0;
}