#include<iostream>
using namespace std;
class complex
{
    int x,y;
    public:
    complex(int a=5,int b=5)
    {
        x=a;
        y=b;
        
    }
    void op()
    {
        cout<<"The complex no. is "<<x<<"+i"<<y<<endl;
    }

};
int main()
{
    complex A;
    A.op();

 return 0;
}
