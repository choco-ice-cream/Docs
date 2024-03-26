#include <iostream> 

struct Rectangle {
    int length{}; 
    int width{}; 

    int area() {
        return length * width;
    }
};

using namespace std;

int main() {
    Rectangle yard, house; 
    
    yard.length = 10;
    yard.width = 20; 

    house.length = 5; 
    house.width = 8; 

    cout << "Area of Lawn: " << yard.area() - house.area() << endl; 

}