#include <iostream>
using namespace std;

int main() {
    float salary = 20000;
    float &newSalary = salary;   // reference variable - same memory, alag naam

    newSalary = newSalary + (newSalary * 10 / 100);  // 10% badhaya

    cout << "Salary (old variable) = " << salary << endl;
    // reference hai isliye salary khud hi update ho jayegi
    return 0;
}