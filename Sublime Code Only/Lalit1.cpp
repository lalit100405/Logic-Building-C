#include<iostream>
using namespace std;
class Demo
{
    public:
    int a;
    int b;
    int c;
    
    Demo()
    {
        cout<<"inside Demo Constructor"<<endl;
        a = 0;
        b = 0;
        c = 0;

    }

    Demo(int x,int y)
    {
        cout<<"inside Parameterised Constructor"<<endl;
        a = x;
        b = y;
        c = a+b;
    }
    ~Demo()
    {
        cout<<"inside Demo Destructor"<<endl;
    }
};
int main()
{
    Demo obj;
    Demo obj1(10,20);

    cout<<obj.a<<endl;
    cout<<obj.b<<endl;
    cout<<obj.c<<endl;
    cout<<obj1.a<<endl;
    cout<<obj1.b<<endl;
    cout<<obj1.c<<endl;
    cout<<sizeof(obj1)<<endl;

    return 0;
}