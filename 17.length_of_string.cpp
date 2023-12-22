#include <iostream>
#include <string>
using namespace std;
class StringLength {
string str;
public:
    StringLength(const string& s){
        str=s;
    }
    int lengthofstring();
};
int StringLength::lengthofstring() {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    StringLength strLength(input);
    int len = strLength.lengthofstring();
    cout << "Length of the string: " << len << endl;
    return 0;
}
