#include <iostream>
using namespace std;
class car{
    float distance;
    float time;
    float speed(){
        return distance/time;
    }
    public:
        void parameters(float distance,float time);
};
void car :: parameters(float d,float t){
    distance = d;
    time = t;
    cout<<"Speed of car is "<<speed()<<" km/hr"<<endl;
}
int main(){
    car c;
    float d,t;
    cout<<"Enter distance (in Km) : ";
    cin>>d;
    cout<<"Enter time (in hr) : ";
    cin>>t;
    c.parameters(d,t);
    return 0;
}
