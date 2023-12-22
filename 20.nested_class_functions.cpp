// nested functions and classes

#include <iostream>
using namespace std;
class OuterClass {
public:
    int a;
    void outerFunction() {
        cout << "Outer function called" << endl;
        auto nestedFunction = [](int a){
            cout << "Nested function called and value is " << a << endl;
        };
        nestedFunction(a);
    }
    OuterClass(int a){
        this->a=a;
    }
    class NestedClass {
    public:
        void nestedClassFunction() {
            cout << "Nested class function called." << endl;
        }
    };
};
int main() {
    OuterClass outer(100);
    outer.outerFunction(); 

    OuterClass::NestedClass nestedObj;
    nestedObj.nestedClassFunction();

    return 0;
}
