// overload ++ and -- operator
// overload any relationl operator

#include <iostream>
using namespace std;
class Number {
private:
    int value;
public:
    Number(int val){
        value=val;
    }
    int getValue() const {
        return value;
    }

    Number operator++() {
        return Number(++value);
    }

    Number operator--() {
        return Number(--value);
    }

    bool operator<(const Number& other) const {
        return value < other.value;
    }
};

int main() {
    Number num1(5);
    Number num2(10);

    cout << "Initial value of num1: " << num1.getValue() << endl;
    Number incrementedNum = ++num1;
    cout << "Value after prefix increment: " << incrementedNum.getValue() << endl;

  
    cout << "Initial value of num2: " << num2.getValue() << endl;
    Number decrementedNum = --num2;
    cout << "Value after prefix decrement: " << decrementedNum.getValue() << endl;


    if (num1 < num2) {
        cout << "num1 is less than num2." << endl;
    } else {
        cout << "num1 is not less than num2." << endl;
    }

    return 0;
}
