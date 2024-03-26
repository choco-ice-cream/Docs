#include <iostream> 
#include "Employee.h"

using namespace std; 

int main() {
    Employee emp1;
    emp1.inputDetails();
    emp1.calcSal();
    emp1.printPaySlip();

    return 0;
}