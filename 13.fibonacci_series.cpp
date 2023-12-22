#include <iostream>
using namespace std;
class FibonacciSeries {
int current;
int next;
public:
    FibonacciSeries(){
        current = 0;
        next = 1;
    }
    FibonacciSeries(const FibonacciSeries& other) {
        current = other.next;
        next = other.current + other.next;
    }
    void display() {
        cout << current << " ";
    }
};

int main() {
    int n;
    cout << "Enter the number of Fibonacci numbers to generate: ";
    cin >> n;
    FibonacciSeries fibSeries;
    cout << "Fibonacci Series: ";
    fibSeries.display();
    for (int i = 1; i < n; i++) {
        FibonacciSeries nextFib(fibSeries); 
        nextFib.display();
        fibSeries = nextFib;
    }
    return 0;
}
