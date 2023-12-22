#include <iostream>
using namespace std;
template <typename T>
void print(T value) {
    cout << "Template function: " << value << endl;
}

template <typename T, typename U>
void print(T value1, U value2) {
    cout << "Template function with two parameters: " << value1 << ", " << value2 << endl;
}

int main() {

    print(42);           
    print("Hello", 3.14); 

    return 0;
}
