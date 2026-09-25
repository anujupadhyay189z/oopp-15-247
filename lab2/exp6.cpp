#include <iostream>
using namespace std;

int main() {
    float salary = 20000;
    float *newSalary = &salary;   // pointer - address store karta hai

    *newSalary = *newSalary + (*newSalary * 10 / 100);  // dereference karke update

    cout << "Salary (old variable) = " << salary << endl;
    return 0;
}