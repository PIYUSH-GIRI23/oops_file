#include <iostream>
using namespace std;
class Number2;
class Number1
{
    int n1;

public:
    void getdata1();
    friend int greatest_of_two(Number1 N1, Number2 N2);
};
class Number2
{
    int n2;

public:
    void getdata2();
    friend int greatest_of_two(Number1 N1, Number2 N2);
};
void Number1 ::getdata1()
{
    cout << "Enter first number : ";
    cin >> n1;
}
void Number2 ::getdata2()
{
    cout << "Enter second number : ";
    cin >> n2;
}
int greatest_of_two(Number1 N1, Number2 N2)
{
    if (N1.n1 > N2.n2)
    {
        return N1.n1;
    }
    else
    {
        return N2.n2;
    }
}
int main()
{
    Number1 N1;
    Number2 N2;
    N1.getdata1();
    N2.getdata2();
    cout << endl
         << "Greatest of the two numbers : " << greatest_of_two(N1, N2) << endl;
    return 0;
}
