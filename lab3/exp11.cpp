#include <iostream>
using namespace std;

// INLINE function
inline int add(int a, int b) {
    return a + b;
}

// DEFAULT ARGUMENT
int multiply(int a, int b = 10) {
    return a * b;
}

// FUNCTION OVERLOADING - same naam "operate", alag parameters
int operate(int a, int b) {
    return a + b;
}
double operate(double a, double b) {
    return a + b;
}
int operate(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "Inline Add(5, 3) = " << add(5, 3) << endl;

    cout << "Multiply(5) default b=10: " << multiply(5) << endl;
    cout << "Multiply(5, 4): " << multiply(5, 4) << endl;

    cout << "Operate(int,int) = " << operate(2, 3) << endl;
    cout << "Operate(double,double) = " << operate(2.5, 3.5) << endl;
    cout << "Operate(int,int,int) = " << operate(1, 2, 3) << endl;

    return 0;
}