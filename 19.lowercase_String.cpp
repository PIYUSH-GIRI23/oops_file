#include <iostream>
#include <string>
using namespace std;
class StringCaseConverter{
string str;
public:
    StringCaseConverter(const string& s){
        str=s;
    }
    string toLower();
};
string StringCaseConverter::toLower() {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
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
    string lowerCase = strConverter.toLower();
    cout << "Lowercase: " << lowerCase << endl;
    return 0;
}
