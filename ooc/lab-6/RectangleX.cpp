#include <iostream> 
#include "RectangleX.h"

using namespace std; 

void RectangleX::setLength(double l) {
    length = l;
}

void RectangleX::setWidth(double w) {
    width = w; 
}

double RectangleX::getLength() {
    return length;
}

double RectangleX::getWidth() {
    return width; 
}

double RectangleX::calcArea() {
    return width * length; 
}