#include <iostream>
#include <iomanip>
using namespace std;


double purchasePrompt(string name, double cost){
  int quantity;
  double total;
  cout << name << " " << cost << " coins"<< endl;
  cout << "How many do you wish to purchase?: ";
  cin >> quantity;
  while(cin.fail()||quantity<0){
    cout << "How many do you wish to purchase?: ";
    cin.clear();
    cin.ignore(256,'\n');
    cin >> quantity;
  }
  cin.ignore(256,'\n');
  total = quantity * cost;
    //cout << total << endl;
  
return total;
}


int main(){
  char opt;
  string name;
  double total = 0;
  cout << "Welcome to Toad's tienda!" << endl;
  while(opt != 'q'){
    cout << "What would you like to purchase?" << endl;
    cout << "a) Mushroom" << endl;
    cout << "b) Fire Flower" << endl;
    cout << "c) Star" << endl;
    cout << "Type a letter to pick an item to purchase or q to quit:";
  
    cin >> opt;
    
    switch(opt){
      case('a'):
      total += purchasePrompt("Mushroom",50);
      break;
      case('b'):
      total += purchasePrompt("Fire Flower", 100);
      break;
      case('c'):
      total += purchasePrompt("Star", 200);
      break;
      case('q'):
      cout << "Goodbye, you spent: " << total << " coins." << endl;
      break;
      default:
      cout << "I didn't get that." << endl;
      break;
    }
  }
  
  return 0;
}

/*
Welcome to Toad's tienda!
What would you like to purchase?
a) Mushroom
b) Fire Flower
c) Star
Type a letter to pick an item to purchase or q to quit:a
Mushroom 50 coins
How many do you wish to purchase?: 5
What would you like to purchase?
a) Mushroom
b) Fire Flower
c) Star
Type a letter to pick an item to purchase or q to quit:b
Fire Flower 100 coins
How many do you wish to purchase?: -3
How many do you wish to purchase?: a
How many do you wish to purchase?: d
How many do you wish to purchase?: 2
What would you like to purchase?
a) Mushroom
b) Fire Flower
c) Star
Type a letter to pick an item to purchase or q to quit:c
Star 200 coins
How many do you wish to purchase?: 1
What would you like to purchase?
a) Mushroom
b) Fire Flower
c) Star
Type a letter to pick an item to purchase or q to quit:q
Goodbye, you spent: 650 coins.

Welcome to Toad's tienda!
What would you like to purchase?
a) Mushroom
b) Fire Flower
c) Star
Type a letter to pick an item to purchase or q to quit:a
Mushroom 50 coins
How many do you wish to purchase?: 1
What would you like to purchase?
a) Mushroom
b) Fire Flower
c) Star
Type a letter to pick an item to purchase or q to quit:b
Fire Flower 100 coins
How many do you wish to purchase?: 2
What would you like to purchase?
a) Mushroom
b) Fire Flower
c) Star
Type a letter to pick an item to purchase or q to quit:c
Star 200 coins
How many do you wish to purchase?: 3
What would you like to purchase?
a) Mushroom
b) Fire Flower
c) Star
Type a letter to pick an item to purchase or q to quit:q
Goodbye, you spent: 850 coins.
*/