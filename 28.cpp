
#include <iostream>
using namespace std;
class student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no=a;
        }
        void print_number(void){
            cout<<"your roll no. is "<<roll_no<<endl;
        }
};
class test : virtual public student{ 
    protected:
        float maths,physics;
    public:
        void set_marks(float m1,float m2){
            maths=m1;
            physics=m2;
        }
        void print_marks(void){
            cout<<"your result is here"<<endl
                <<"maths :"<<maths<<endl
                <<"physics : "<<physics<<endl;
        }
};
class sports : public virtual student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score=sc;
        }
        void print_score(void){
            cout<<"your PT score is "<<score<<endl;
        }
};
class result : public test,public sports{
    private:
        float total;
    public:
        void display(void){
            total=maths+physics+score;
            print_number();
            print_marks();
            print_score();
            cout<<"your total score is : "<<total<<endl;
        }
};
int main()
{
    result piyush;
    piyush.set_marks(90.6,67.8);
    piyush.set_number(10);
    piyush.set_score(6);
    piyush.display(); 
    return 0;
}