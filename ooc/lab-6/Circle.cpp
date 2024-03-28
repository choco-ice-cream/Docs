#include <iostream> 
#include "Circle.h"

using namespace std; 

void Circle::setRadius(double r) {
    radius = r; 
}

double Circle::getRadius() {
    return radius;
}

double Circle::calcArea() {
    return 22.0 / 7 * radius * radius; 
}