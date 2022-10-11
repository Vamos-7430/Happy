#include<iostream>
using namespace std;
class circle
{
    public:
    float cal(float r)
    {
        return (3.14*r*r);
    }
    void cal()
    {
        cout<<"HI BUDDY"<<endl;
    }
};
int main()
{
    circle c;
    c.cal();
    cout<<"Area of circle is:"<<(c.cal(3.2))<<endl;
    
 return 0;
}
