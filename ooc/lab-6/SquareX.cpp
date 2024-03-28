#include <iostream> 
#include "SquareX.h"

using namespace std; 


void SquareX::setLength(double l) {
    length = l;
}

double SquareX::getLength() {
    return length; 
}

double SquareX::calcArea() {
    return length * length;
}

