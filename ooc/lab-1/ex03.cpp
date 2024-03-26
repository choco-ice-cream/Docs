#include <iostream> 

using namespace std;


int main() { 
    int n{}; 
    cout << "Enter number: "; 
    cin >> n; 

    for (int i = 1; i < 13; i++) {
        cout << n << " x " << i << " = " << i * n << endl; 
    }

    return 0;
}