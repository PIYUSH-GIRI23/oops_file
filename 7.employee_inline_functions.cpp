#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    string address;
    int age;
    double salary;
    public:
        void setEmployeeInfo(string empName, string empAddress, int empAge, double empSalary) {
            name = empName;
            address = empAddress;
            age = empAge;
            salary = empSalary;
        }
        void displayEmployeeInfo() {
            cout << "Employee Details:" << endl;
            cout << "Name: " << name << endl;
            cout << "Address: " << address << endl;
            cout << "Age: " << age << endl;
            cout << "Salary: " << salary << endl;
        }
};

int main() {
    Employee emp;
    string empName, empAddress;
    int empAge;
    double empSalary;
    cout << "Enter Employee Name: ";
    getline(cin, empName);
    cout << "Enter Employee Address: ";
    getline(cin, empAddress);
    cout << "Enter Employee Age: ";
    cin >> empAge;
    cout << "Enter Employee Salary: ";
    cin >> empSalary;
    emp.setEmployeeInfo(empName, empAddress, empAge, empSalary);
    cout<<endl;
    emp.displayEmployeeInfo();
    return 0;
}
