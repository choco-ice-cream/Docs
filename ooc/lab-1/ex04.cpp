#include <iostream> 

int Square(int x); 
int Cube(int x);
using namespace std;

int main() {
    cout << "Square of 2: " << Square(2) << endl; 
    cout << "Cube of 2: " << Cube(2) << endl; 
    return 0;
}


int Square(int x) {
    return x * x; 
}

int Cube(int x) {
    return x * x * x; 
}