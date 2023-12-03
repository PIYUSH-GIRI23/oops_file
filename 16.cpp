#include <iostream>
using namespace std;
class Factorial {
int num;
long long ans;
long long fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
public:
    Factorial(int n){
        num=n;
        ans=fact(num);
    } 
    void display() {
        cout << "Factorial of " << num << " is " << ans << endl;
    }
};
int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;
    Factorial fact(n); 
    fact.display(); 
    return 0;
}
    