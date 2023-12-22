#include <iostream>
using namespace std;
int main() {
    int *dynamicArray = new int[5]; // Allocate an array of 5 integers
    for (int i = 0; i < 5; i++) {
        dynamicArray[i] = i * 10;
    }
    cout << "Dynamically Allocated Array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;
    delete[] dynamicArray; 

    int a=10;
    int *b=new int(a);
    cout<<*b<<endl;
    delete b;

    return 0;
}
