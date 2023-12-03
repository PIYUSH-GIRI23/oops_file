#include <iostream>
#include <string>
using namespace std;
class StringManipulator {
public:
    string str;
    string copiedStr;
    string concatenatedStr;
    StringManipulator(const string& initialString) : str(initialString) {}
    void copyString() {
        int i = 0;
        while(str[i] != '\0') {
            copiedStr.push_back(str[i++]);
        }
    }
    void concatenateStrings(const string& firstName, const string& lastName) {
        int i = 0;
        while(firstName[i] != '\0') {
            concatenatedStr.push_back(firstName[i++]);
        }
        concatenatedStr.push_back(' ');
        i = 0;
        while(lastName[i] != '\0') {
            concatenatedStr.push_back(lastName[i++]);
        }
    }
    int getStringLength() const {
        int length = 0;
        for (int i = 0; str[i] != '\0'; ++i) {
            ++length;
        }
        return length;
    }
    void displayResults() const {
        cout << "Original String: " << str << endl;
        cout << "Copied String: " << copiedStr << endl;
        cout << "Concatenated String: " << concatenatedStr << endl;
        cout << "Length of Original String: " << getStringLength() << endl;
    }

};

int main() {
    StringManipulator stringHandler("Hello, ");
    stringHandler.copyString();
    stringHandler.concatenateStrings("John", "Doe");
    stringHandler.displayResults();

    return 0;
}
