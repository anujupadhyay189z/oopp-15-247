#include <iostream>
using namespace std;

// 1) Call by Value - copy pass hoti hai, original change nahi hota
void callByValue(int num) {
    num = num + 10;
    cout << "Inside callByValue: " << num << endl;
}

// 2) Call by Reference - original variable hi modify hota hai
void callByReference(int &num) {
    num = num + 10;
    cout << "Inside callByReference: " << num << endl;
}

// 3) Call by Address (pointer) - address se original modify hota hai
void callByAddress(int *num) {
    *num = *num + 10;
    cout << "Inside callByAddress: " << *num << endl;
}

int main() {
    int a = 100;
    cout << "--- Call by Value ---" << endl;
    callByValue(a);
    cout << "After function, a = " << a << " (no change, kyunki copy thi)" << endl;

    int b = 100;
    cout << "\n--- Call by Reference ---" << endl;
    callByReference(b);
    cout << "After function, b = " << b << " (changed, original ref tha)" << endl;

    int c = 100;
    cout << "\n--- Call by Address ---" << endl;
    callByAddress(&c);
    cout << "After function, c = " << c << " (changed, address se modify hua)" << endl;

    return 0;
}