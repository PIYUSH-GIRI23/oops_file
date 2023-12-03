#include <iostream>
using namespace std;
class Power{
    double m;
    int n;
    public:
        void getnumbers(double base, int exponent);
        double calculatePower();
};
void Power::getnumbers(double base, int exponent){
    m = base;
    n = exponent;
}
double Power::calculatePower(){
    double result = 1;
    for(int i = 0; i < n; i++){
        result *= m;
    }
    return result;
}
int main(){
    Power p;
    double base;
    int exponent;
    cout<<"Enter base and exponent : ";
    cin>>base>>exponent;
    p.getnumbers(base, exponent);
    cout<<base<<" raised to the power "<<exponent<<" is "<<p.calculatePower()<<endl;
    return 0;
}
