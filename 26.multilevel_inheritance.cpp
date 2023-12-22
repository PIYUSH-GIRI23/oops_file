#include <iostream>
#include <string>
using namespace std;
class student {
    protected:
        int roll_no;
        string name;
    public:
        void input() {
            cout << "Enter Roll Number: ";
            cin >> roll_no;
            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, name);
        }
        void display() const {
            cout << "Roll Number: " << roll_no << "\nName: " << name << "\n";
        }
};
class exam : public student {
    protected:
        int marks[6]; 
    public:
        void inputMarks() {
            cout << "Enter Marks for 6 Subjects:\n";
            for (int i = 0; i < 6; ++i) {
                cout << "Subject " << i + 1 << ": ";
                cin >> marks[i];
            }
        }
        void displayMarks() const {
            cout << "Marks in 6 Subjects:\n";
            for (int i = 0; i < 6; ++i) {
                cout << "Subject " << i + 1 << ": " << marks[i] << "\n";
            }
        }
};

class result : public exam {
    int totalMarks;
    public:
        void calculateTotalMarks() {
            totalMarks = 0;
            for (int i = 0; i < 6; ++i) {
                totalMarks += marks[i];
            }
        }
        void displayResult() const {
            display();          
            displayMarks();     
            cout << "Total Marks: " << totalMarks << "\n";
        }
};
int main() {
    result studentResult;
    studentResult.input();
    studentResult.inputMarks();
    cout<<endl;
    studentResult.calculateTotalMarks();
    studentResult.displayResult();
    return 0;
}
