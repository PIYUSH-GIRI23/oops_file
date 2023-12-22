#include <iostream>
using namespace std;
class Complex {
double real;
double imag;
public:
    Complex(){
        real = 0.0;
        imag = 1.0;
    }
    Complex(double r, double i){
        real = r;
        imag = i;
    }
    Complex add(const Complex &);
    void display() {
        if(imag < 0) cout << real << " - " << -imag << "i" << std::endl;
        else cout << real << " + " << imag << "i" << std::endl;
    }
};
Complex Complex :: add(const Complex &c) {
    Complex result;
    result.real = real + c.real;
    result.imag = imag + c.imag;
    return result;
}
int main() {
    cout<<"Enter the real and imaginary parts of the complex number: ";
    int real, imag;
    cin>>real>>imag;
    Complex num1(real, imag); 
    Complex num2;          
    Complex sum = num1.add(num2);
    std::cout << "Sum of complex numbers: ";
    sum.display();
    return 0;
}
