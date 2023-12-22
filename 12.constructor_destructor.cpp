#include <iostream>
using namespace std;
class MyClass {
public:
    MyClass() {
        cout << "Constructor called" <<endl;
    }
    ~MyClass() {
        cout << "Destructor called" <<endl;
    }
};

int main() {
    cout << "Creating an object:" <<endl;
    MyClass obj; 
    cout << "Main function called" <<endl;
    cout << "End of main function" <<endl;
    return 0;
}
