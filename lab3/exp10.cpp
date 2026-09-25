#include <iostream>
using namespace std;

class Data {
    int num1, num2;
public:
    void input(int a, int b);
    void show();
};

// bahar define kiya, but "inline" keyword explicitly lagaya
inline void Data::input(int a, int b) {
    num1 = a;
    num2 = b;
}

inline void Data::show() {
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
}

int main() {
    Data d1;
    d1.input(10, 20);
    d1.show();
    return 0;
}