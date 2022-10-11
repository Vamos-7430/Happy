#include<iostream>
using namespace std;
class complex
{
    int x,y;
    public:
    complex()
    {}
    complex(int a,int b)
    {
        x=a;
        y=b;
        cout<<"hi"<<endl;
    }
    complex(int A)
    {
        x=A;
        y=0;
    }
    complex()
    {
        x=0;
        y=0;
    }

    void op()
    {
        cout<<"The complex no. is "<<x<<"+i"<<y<<endl;
    }

};
int main()
{
    complex A1(5,5);
    complex A2(6);
    complex A3;
    A1.op();
    A2.op();
    A3.op();

 return 0;
}
