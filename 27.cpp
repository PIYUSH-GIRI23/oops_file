#include <iostream>
using namespace std;
class baseclass{
    public:
        int var_base=1;
        virtual void display(){
            cout<<"displaying base class variable var_base "<<var_base<<endl;
        }
};
class derived : public baseclass{
    public:
        int var_derived=2;
        void display(){
            cout<<"displaying base class variable var_base "<<var_base<<endl;
            cout<<"displaying derived class variable var_derived "<<var_derived<<endl;
        }
};
int main()
{
    baseclass objbase;
    derived objderived;

    baseclass *base_class_pointer;

    base_class_pointer=&objderived;

    base_class_pointer->display(); 

    return 0;
}