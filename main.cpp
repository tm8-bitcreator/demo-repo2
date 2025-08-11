#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
    cout << "Hello World" <<endl;
    Rectangle r = Rectangle(1,4);
    cout << "The initial Length is: \n" << r.getLength()<< " The initial Width is: \n" << r.getWidth() << endl;
    r.setLength(3);
    cout << "The Length is: \n" << r.getLength()<< " The Width is: " << r.getWidth() << endl;
    return 0;
}