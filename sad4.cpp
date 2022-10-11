#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setdata()
    {
        cout << "Enter employee ID" << endl;
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout<<"Employee no. is"<<count;
        cout << "Employee ID is:" << id << endl;
    }
    static void getcount()
    {
        cout<<"The value of count is:"<<count<<endl;
    }
};
int employee :: count; 
int main()
{
    employee harry, suraj, ram;
    harry.setdata();
    harry.getdata();
    employee :: getcount();

    suraj.setdata();
    suraj.getdata();
    employee :: getcount();

    ram.setdata();
    ram.getdata();

    return 0;
}
