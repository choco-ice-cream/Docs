#include <iostream> 
#include <iomanip>

struct Marks {
    int t_marks1{}; 
    int t_marks2{}; 
}; 

void findMarks(int t_marks1, int t_marks2, float &t_CA1, float &t_CA2); 
using namespace std; 

int main() {
    Marks marks[5]; 

    cout << "Enter marks" << endl; 
    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for student " << i + 1 << ": " << endl;
        cout << "t_marks1: "; 
        cin >> marks[i].t_marks1; 
        cout << "t_marks2: "; 
        cin >> marks[i].t_marks2; 
    }

    cout << "Student\t" << "Marks1\t" << "Marks2\t" << "CA_1\t" << "CA_2" << endl; 
    for (int i = 0; i < 5; i++) {
        float CA_1, CA_2;
        findMarks(marks[i].t_marks1, marks[i].t_marks2, CA_1, CA_2); 
        cout << i + 1 << '\t' << marks[i].t_marks1 << '\t' << marks[i].t_marks2 << '\t' << fixed << setprecision(2) << CA_1  << '\t' << CA_2 << endl;
    }
}

void findMarks(int t_marks1, int t_marks2, float &t_CA1, float &t_CA2) {
    t_CA1 = t_marks1 * .20; 
    t_CA2 = t_marks2 * .30; 
}