#include <iostream>
using namespace std;
class AddNumbers {
double num1;
double num2;
public:
    AddNumbers(){
        num1 = 0;
        num2 = 0;
    }
    AddNumbers(double a, double b){
        num1 = a;
        num2 = b;
    }
    double add() {
        return num1 + num2;
    }
};
int main() {
    double firstNum, secondNum;
    cout << "Enter the first number: ";
    cin >> firstNum;
    cout << "Enter the second number: ";
    cin >> secondNum;
    AddNumbers addObj1; 
    AddNumbers addObj2(firstNum, secondNum); 
    double result1 = addObj1.add();
    double result2 = addObj2.add();
    cout << "Sum using default constructor: " << result1 << endl;
    cout << "Sum using parameterized constructor: " << result2 << endl;
    return 0;
}
