#include <iostream>
using namespace std;

// Circle
double area(double radius) {
    return 3.14159 * radius * radius;
}

// Rectangle
double area(double length, double width) {
    return length * width;
}

// Square
int area(int side) {
    return side * side;
}

// Triangle (bool flag isse Rectangle wale se differentiate karta hai)
double area(double base, double height, bool triangle) {
    return 0.5 * base * height;
}

int main() {
    cout << "Area of Circle = " << area(7.0) << endl;              // 1 double -> Circle
    cout << "Area of Rectangle = " << area(5.0, 3.0) << endl;      // 2 double -> Rectangle
    cout << "Area of Square = " << area(4) << endl;                 // 1 int -> Square
    cout << "Area of Triangle = " << area(6.0, 4.0, true) << endl; // double,double,bool -> Triangle

    return 0;
}