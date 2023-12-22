#include <iostream>
using namespace std;
class AreaCalculator {
    public:
        float calculateArea(float radius) {
            return 3.14159 * radius * radius;
        }
        float calculateArea(float base, float height) {
            return 0.5 * base * height;
        }
        float calculateArea(float length, double width) {
            return length * width;
        }
};
int main() {
    AreaCalculator calculator;
    float base, height, radius, length;
    double width;
    cout<<"Enter base and height of triangle : ";
    cin>>base>>height;
    float triangleArea = calculator.calculateArea(base, height);
    cout << "Area of the triangle: " << triangleArea << endl;

    cout<<"Enter radius of circle : ";
    cin>>radius;
    float circleArea = calculator.calculateArea(radius);
    cout << "Area of the circle: " << circleArea << endl;

    cout<<"Enter length and width of rectangle : ";
    cin>>length>>width;
    float rectangleArea = calculator.calculateArea(length, width);
    cout << "Area of the rectangle: " << rectangleArea << endl;
    return 0;
}
