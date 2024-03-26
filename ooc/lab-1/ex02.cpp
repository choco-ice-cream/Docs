#include <iostream> 

using namespace std;

int main() {
    double cm{}; 
    cout << "Enter cm: "; 
    cin >> cm; 

    cout << "Inches: " << cm / 2.54 << endl; 
    return 0;
}