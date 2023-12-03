#include <iostream>
#include <stdexcept>
using namespace std; 
double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw "invalid base";
    }
    return numerator / denominator;
}
double power(double base, int exponent) {
    if (exponent < 0) {
        throw 0.1;
    }
    double result = 1.0;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}
int main() {
    try{
        cout << divide(2, 9) << endl;
        cout << power(2.0, -1) << endl;
    } 
    catch (const char* e) {
        cout << e << endl;
    }
    catch (double e) {
        cout << "Exponent must be greater than 0" << endl;
    }
    catch (...) {
        cout << "unknown exception" << endl;
    }
    return 0;
}
