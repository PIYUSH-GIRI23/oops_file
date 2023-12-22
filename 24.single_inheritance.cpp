#include <iostream>
#include <string>
using namespace std;
class basic_info {
    protected:
        string name;
        int roll_no;
        char gender;

    public:
        void getdata();
        void display();
};

class student : public basic_info {
public:
    void displayAllInfo(){
        display();
    }
};

void basic_info::getdata() {
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Roll Number: ";
    cin >> roll_no;
    cout << "Enter Gender (M/F): ";
    cin >> gender;
}

void basic_info::display(){
    cout << "\nName: " << name;
    cout << "\nRoll Number: " << roll_no;
    cout << "\nGender: " << gender << "\n";
}

int main() {
    student obj;
    obj.getdata();
    obj.displayAllInfo();
    return 0;
}
