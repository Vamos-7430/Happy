#include<iostream>
using namespace std;
class point
{
    float X,Y;
    public:
    point(float,float);
     void print();

};
point::point(float x,float y)
{
    X=x;
    Y=y;
}
void point::print()
{
    cout<<"The x and y co-ordinates are:("<<X<<","<<Y<<")"<<endl;
}

int main()
{
    point p=point(5.1,6.1);
    p.print();
 return 0;
}
