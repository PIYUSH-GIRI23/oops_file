
#include <iostream> 
using namespace std;
class Employee{
    int id;
    int salary;
    public:
        void setsalary(int i,int s);
        void getsalary();
};
void Employee :: setsalary(int i,int s){
    id = i;
    salary = s;
}
void Employee :: getsalary(){
    cout<<"Employee id : "<<id<<endl;
    cout<<"Employee salary : "<<salary<<endl;
}
int main(){
    int n;
    cout<<"Enter number of employees : ";
    cin>>n;
    Employee e[n];
    int id,salary;
    for(int i=0;i<n;i++){
        cout<<"Enter id of employee "<<i+1<<" : ";
        cin>>id;
        cout<<"Enter salary of employee "<<i+1<<" : ";
        cin>>salary;
        e[i].setsalary(id,salary);
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        e[i].getsalary();
    }
    return 0;
}
