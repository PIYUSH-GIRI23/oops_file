#include <iostream>
#include <string>
using namespace std;

class StringManipulator {
public:
    string inputString;

    void getInput() {
        cout << "Enter a line of text: ";
        getline(cin, inputString);
    }

    void demonstratePushBack() {
        for (int i = 0; i < 6; i++) {
            inputString.push_back(static_cast<char>('A' + i));
        }
    }

    void demonstratePopBack() {
        for (int i = 0; i < 3; i++) {
            inputString.pop_back();
        }
    }

    void displayResults() {
        cout << "You entered: " << inputString << endl;
        cout << "After push_back(): " << inputString << endl;
        demonstratePopBack();
        cout << "After pop_back(): " << inputString << endl;
    }
};

int main() {
    StringManipulator stringHandler;
    stringHandler.getInput();

    stringHandler.demonstratePushBack();
    stringHandler.displayResults();

    return 0;
}
