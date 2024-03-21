#include <iostream>
using namespace std;

struct Rect {
  int width;
  int height;
  int area;
};

Rect makeRect(int w, int h){
  Rect rect;
  rect.width = w;
  rect.height = h;
  rect.area = -1;
  return rect;
}

int area(Rect &r){
  if(r.area == -1){
    cout << "Calculating area: " << endl;
    r.area = r.width * r.height;
  }
  return r.area;
}

int main(){
  Rect myRect = makeRect(10,20);

  myRect.width = 10;
  myRect.height = 20;

  cout << myRect.width << endl;
  cout << myRect.height << endl;

  cout << "Area: " << area(myRect) << endl;
  // assume a long time passes in the program
  cout << "Area: " << area(myRect) << endl;
  return 0;
}