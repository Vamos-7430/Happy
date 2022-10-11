#include <iostream>
using namespace std;
class base
{
    int data1; // not inheritable
public:
    int data2;
    void setadata();
    int getdata1();
    int getdata2();
};
void base::setadata()
{
    data1 = 10;
    data2 = 20;
}
int base::getdata1()
{
    return data1;
}
int base::getdata2()
{
    return data2;
}
class derive : private base
{ // class is being derived publically
    int data3;

public:
    void process();
    void display();
};

void derive::process()
{
    setadata();
    data3 = data2 * getdata1();
}
void derive::display()
{

    cout << "VAlue of getdata1 is:" << getdata1() << endl;
    cout << "VAlue of data2 is:" << data2 << endl;
    cout << "VAlue of data3 is:" << data3 << endl;
}
int main()
{
    derive uuu;
    // uuu.setadata();
    uuu.process();
    uuu.display();
    return 0;
}
