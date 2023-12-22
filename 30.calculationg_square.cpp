#include<iostream>
using namespace std;
template <typename T>
T calculateSquare(T num) {
    return num * num;
}
int main() {
    int intNum = 5;
    float floatNum = 3.14;
    char charNum = 'A';

    cout << "Square of integer: " << calculateSquare(intNum) << endl;

    cout << "Square of float: " << calculateSquare(floatNum) << endl;

    cout << "Square of character: " << calculateSquare(charNum) << endl;

    return 0;
}
