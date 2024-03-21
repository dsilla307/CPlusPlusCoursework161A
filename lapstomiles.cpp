#include <iostream>
#include <iomanip>                 // For setprecision
using namespace std;

int LapsToMiles(double laps){
    double miles;
    cout << fixed << setprecision(2);
    miles = laps * 0.25;
    return miles;
}

int main() {
    double laps;
    cin >> laps;
    cout << fixed << setprecision(2);
   cout << LapsToMiles(laps) << endl;

   return 0;
}