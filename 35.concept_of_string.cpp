#include <iostream>
#include <string>
using namespace std;
class MyString {
private:
    string str;
public:
    MyString(const string& s){
        str = s;
    }
    ~MyString() {
        cout << "Destructor called for " << str << endl;
    }
    void display() {
        cout << "String: " << str << endl;
    }
    int length() {
        return str.length();
    }
    MyString concatenate(const MyString& other) {
        MyString result(str + other.str);
        return result;
    }
    bool isEmpty() {
        return str.empty();
    }
    char charAt(int index) {
        if (index >= 0 && index < str.length()) {
            return str[index];
        } else {
            cout << "Invalid index!" << endl;
            return '\0';
        }
    }
    int find(const string& substring) {
        size_t found = str.find(substring);
        if (found != string::npos) {
            return static_cast<int>(found);
        } else {
            return -1; 
        }
    }
    MyString operator=(const MyString& other) {
        if (this != &other) {
            str = other.str;
        }
        return *this;
    }
};

int main() {
    
    MyString myStr1("Hello");
    MyString myStr2(" World");

    myStr1.display();
    myStr2.display();

    cout << "Length of String 1: " << myStr1.length() << endl;
    cout << "Length of String 2: " << myStr2.length() << endl<<endl;

    MyString concatenatedStr = myStr1.concatenate(myStr2);
    cout << "Concatenated String: ";
    concatenatedStr.display();

    cout <<endl<< "Is String 1 empty? " << (myStr1.isEmpty() ? "Yes" : "No") << endl;

    cout << "Character at index 2 in String 2: " << myStr2.charAt(2) << endl;


    string substring = "llo";
    int index = myStr1.find(substring);
    if (index != -1) {
        cout << endl<<"Substring '" << substring << "' found at index " << index << " in String 1." << endl;
    } else {
        cout << endl<<"Substring '" << substring << "' not found in String 1." << endl;
    }

    cout << endl<<"Copying String 2 to String 1..." << endl;
    MyString s=myStr1;
    s.display();
    return 0;
}
