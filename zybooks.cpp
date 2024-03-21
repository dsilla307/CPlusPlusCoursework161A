#include <iostream>
#include <string>
using namespace std;

int main() {
   string keyString;
   unsigned int i;

   getline(cin, keyString);

   for(i=0;i < keyString.length();i++){
      if(isdigit(keyString.at(i)) == false){
         keyString.replace(i,1,"0");
      }
   }
   cout << "New password: " << keyString << endl;

   return 0;
}