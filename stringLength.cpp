#include <iostream>
#include <string>
using namespace std;

int main() {

   char letter;
   string txt;
   int count=0;
   int i;
   cin >> letter;
   getline(cin, txt);

   for(i=0; i < txt.length(); i++){
       if(txt.at(i)==letter){
           count++;
       }
   }

   if(count == 1){
       cout << "1 " << letter << endl;
   }
   else{
       cout << count << " " << letter << "'s" << endl;
   }

   return 0;
}