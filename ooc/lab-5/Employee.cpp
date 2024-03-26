#include "Employee.h" 
#include <iostream>
#include <cstring> 

using namespace std; 

void Employee::inputDetails() {
    cout << "Input Employee NO: "; 
    cin >> empno;
    cout << "Input Name: "; 
    cin >> name; 
    cout << "Input basic salary: ";
    cin >> basicSal;
    cout << "Input Allowance: ";
    cin >> allowance; 

    int potHrs; 
    double potRate; 
    cout << "Ot hours: ";
    cin >> potHrs; 
    cout << "Ot Rate: "; 
    cin >> potRate;

    setOtDetails(potHrs, potRate);
}

void Employee::assignDetails(int pempno, const char pname[], double pbasicSal) {
    empno = pempno; 
    strcpy(name, pname);
    basicSal = pbasicSal;
}

void Employee::setAllowance(double pallowance) {
    allowance = pallowance; 
}

void Employee::calcSal() {
    salary += basicSal + allowance; 
}

void Employee::setOtDetails(int potHrs, double potRate) {
    otHrs = potHrs;
    otRate = potRate;

    salary += otHrs * otRate; 
}

void Employee::printPaySlip() {
    cout << "-------------------------------" << endl; 
    cout << "Emp No \t\t:" << empno << endl; 
    cout << "Name \t\t:" << name << endl; 
    cout << "Basic Salary\t:" << basicSal << endl; 
    cout << "Allowance\t:" << allowance << endl; 
    cout << "Ot payment\t:" << otHrs * otRate << endl; 
    cout << "Net Salary\t:" << salary << endl;  
    cout << "-------------------------------" << endl; 
}