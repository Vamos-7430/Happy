#include<iostream>
using namespace std;
class number
{
    int a;
    public:
    number()
    {a=0;}
    number(int num)
    {
        a=num;
    }
    number(number &obj)
    {
        a=obj.a;
        cout<<"COPY"<<endl;
    }
    void display()
    {
        cout<<"THE number is:"<<a<<endl;

    }
};
int main()
{
    number x,y,z(40);
    x.display();
    y.display();
    z.display();
    number z1(x);
    z1.display();

 return 0;
}
