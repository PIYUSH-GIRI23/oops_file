#include<iostream>
using namespace std;
template <typename T>
void swapItems(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}
int main() {
    int int1 = 5, int2 = 10;
    float float1 = 3.14, float2 = 6.28;
    char char1 = 'A', char2 = 'B';

    cout<<"Before swapping: "<<int1<<" "<<int2<<endl;
    swapItems(int1, int2);
    cout << "Swapped integers: " << int1 << ", " << int2 << endl;

    
    cout<<"Before swapping: "<<float1<<" "<<float2<<endl;
    swapItems(float1, float2);
    cout << "Swapped floats: " << float1 << ", " << float2 << endl;

    
    cout<<"Before swapping: "<<char1<<" "<<char2<<endl;
    swapItems(char1, char2);
    cout << "Swapped characters: " << char1 << ", " << char2 << endl;

    return 0;
}
