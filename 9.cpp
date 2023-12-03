#include <iostream>
using namespace std;
class Numbers{
    float a,b;
    public:
        void getdata(float x,float y);
        friend void sum(Numbers N);
        friend void display(Numbers N);
};
void Numbers :: getdata(float x,float y){
    a = x;
    b = y;
}
void sum(Numbers N){
    cout<<N.a+N.b<<endl;
}
void display(Numbers N){
    cout<<"a = "<<N.a<<endl;
    cout<<"b = "<<N.b<<endl;
}
int main(){ 
    Numbers N;
    float a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    N.getdata(a,b);
    cout<<endl<<"Sum of the numbers : ";
    sum(N);
    cout<<endl<<"Numbers : "<<endl  ;
    display(N);
    return 0;
}