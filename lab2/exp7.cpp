#include <iostream>
using namespace std;

// Program 5 wala function - reference use karke
void updateUsingReference(float &newSalary) {
    newSalary = newSalary + (newSalary * 10 / 100);
}

// Program 6 wala function - pointer use karke
void updateUsingPointer(float *newSalary) {
    *newSalary = *newSalary + (*newSalary * 10 / 100);
}

int main() {
    float salary1 = 20000;
    updateUsingReference(salary1);   // reference pass
    cout << "Using Reference - Salary = " << salary1 << endl;

    float salary2 = 20000;
    updateUsingPointer(&salary2);    // address pass
    cout << "Using Pointer - Salary = " << salary2 << endl;

    return 0;
}