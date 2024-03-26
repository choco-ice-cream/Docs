#pragma once 

class Employee {
private:
    int empno;
    char name[20]; 
    double basicSal; 
    double allowance; 
    double salary{}; 
    int otHrs{};
    double otRate{};
public: 
    void assignDetails(int pempno,const char pname[], double pbasicSal);
    void setAllowance(double pallowance); 
    void calcSal();
    void printPaySlip(); 
    void setOtDetails(int potHrs, double potRate);
    void inputDetails();
};