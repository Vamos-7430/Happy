#include<iostream>
using namespace std;
class bankdeposit
{
    int r,p,y;
    float R,return_value=0.0;
    public:
    bankdeposit()
    {

    }
    bankdeposit(int principal,int years,int rate)
    {
        r=rate;
        p=principal;
        y=years;
        return_value=p;
        for(int i=0;i<y;i++)
        {
            return_value=return_value*(1+r);
        }
    }
    bankdeposit(int principal,int years,float RATE)
    {
        R=RATE/100;
        p=principal;
        y=years;
        return_value=p;
        for(int i=0;i<y;i++)
        {
            return_value=return_value*(1+r);
        }

    }
    void display()
    {
        cout<<"The return value is :"<<return_value<<endl;
    }

        

    
};
int main()
{
    bankdeposit bd1;
    int principal,years,rate;
    float RATE;
    cout<<"Enter the principal amt,years,rate";
    cin>>principal>>years>>rate;
    bd1=bankdeposit(principal,years,rate);
    bd1.display();



 return 0;
}
