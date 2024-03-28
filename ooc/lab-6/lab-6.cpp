#include <iostream> 
#include "Circle.h"
#include "RectangleX.h"
#include "SquareX.h"

using namespace std; 

int main() {
    RectangleX yard, house; 
    int length, width;

    cout << "yard: " << endl; 
    cout << "Input Length: ";
    cin >> length; 
    yard.setLength(length); 
    cout << "Input Width: "; 
    cin >> width; 
    yard.setWidth(width);

    cout << "house: " << endl; 
    cout << "Input Length: ";
    cin >> length; 
    house.setLength(length); 
    cout << "Input Width: "; 
    cin >> width; 
    house.setWidth(width);

    Circle c; 
    int r; 

    cout << "Circle: " << endl;
    cout << "Input radius: "; 
    cin >> r; 
    c.setRadius(r); 

    SquareX s;
    cout << "Square: " << endl; 
    cout << "Input Length: "; 
    cin >> length; 
    s.setLength(length);

    cout << "green area: " << yard.calcArea() - house.calcArea() - c.calcArea() - s.calcArea() << endl; 
}