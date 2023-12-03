#include <iostream>
using namespace std;
template <typename T>
class DataProcessor {
    private:
        T data1;
        T data2;
    public:
        void readData() {
            cout << "Enter data 1: ";
            cin >> data1;
            cout << "Enter data 2: ";
            cin >> data2;
        }
        T findSum() {
            return data1 + data2;
        }
};

int main() {
    DataProcessor<int> intProcessor;
    intProcessor.readData();
    cout << "Sum of integers: " << intProcessor.findSum() << std::endl;


    DataProcessor<double> doubleProcessor;
    doubleProcessor.readData();
    cout << "Sum of doubles: " << doubleProcessor.findSum() << std::endl;

    return 0;
}
