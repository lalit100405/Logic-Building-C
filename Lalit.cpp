#include<iostream>
using namespace std;
class Demo 
{
    public:
    int no1;
    int no2;

    Demo()
    {
        cout<<"Inside Default Constructor";
        no1 = 0;
        no2 = 0;
    
    }
    Demo(int x, int y)
    {
        cout<<"Inside Parameterised Constructor";
        no1 = x;
        no2 = y;

    }
    
};
int main()
{
    Demo obj;
    Demo obj1(10,20);
    Demo obj2(20,30);
    cout<<obj.no1<<endl;
    cout<<obj.no2<<endl;
    cout<<obj1.no1<<endl;
    cout<<obj1.no2<<endl;
    cout<<obj2.no1<<endl;
    cout<<obj2.no2<<endl;

    return 0;

}