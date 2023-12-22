#include <iostream>
#include <string>
using namespace std;
class StringCaseConverter{
string str;
public:
    StringCaseConverter(const string& s){
        str=s;
    }
    string toUpper();
};
string StringCaseConverter::toUpper() {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return str;
}
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    StringCaseConverter strConverter(input);
    string upperCase = strConverter.toUpper();
    cout << "Uppercase: " << upperCase << endl;
    return 0;
}
