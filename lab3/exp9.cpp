#include <iostream>
using namespace std;

class Data {
    int num1, num2;
public:
    void input(int a = 0, int b = 0);   
    void show();
};


void Data::input(int a, int b) {
    num1 = a;
    num2 = b;
}

void Data::show() {
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
}

int main() {
    Data d1, d2;

    d1.input(15, 25);
    cout << "d1 -> ";
    d1.show();

    d2.input();          
    cout << "d2 -> ";
    d2.show();

    return 0;
}