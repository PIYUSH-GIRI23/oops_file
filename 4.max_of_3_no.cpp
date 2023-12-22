#include<iostream>
using namespace std;
#define MAX(a, b) ((a > b) ? a : b)
class LargestFinder {
    public:
        int findLargest(int num1, int num2, int num3) {
            int max_of_first_two = MAX(num1, num2);
            int largest = MAX(max_of_first_two, num3);
            return largest;
        }
};
int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    LargestFinder finder;
    int largest = finder.findLargest(num1, num2, num3);
    cout << "The largest number is: " << largest << endl;

    return 0;
}
