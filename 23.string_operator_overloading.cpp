//implement a class string containing the follwing instructions
/*
overload equal operator to carry out string copy
Overload + operator to carry out concatenation of string
overload < operator to compare two strings


*/

#include <iostream>
#include <string>
using namespace std;
class String {
private:
    string str;
public:
    String(const string& s){
        str=s;
    }
    String& operator=(const String& other) {
        if (this != &other) {
            str = other.str;
        }
        return *this;
    }
    String operator+(const String& other) const {
        return str + other.str;
    }
    bool operator<(const String& other) const {
        return str < other.str;
    }
    void display() const {
        cout << str;
    }
};

int main() {
    String s1("Hello ");
    String s2("i am a boy");
    String s3 = s1 + s2; 
    s1.display(); 
    cout << endl;
    s2.display(); 
    cout << endl;
    s3.display(); 
    cout << endl;
    if (s1 < s2) {
        cout << "s1 is less than s2" << endl;
    } else {
        cout << "s2 is less than s1" << endl;
    }

    return 0;
}
