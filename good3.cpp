#include<iostream>
using namespace std;
int main()
{
    int array[5],i,a,count=0,flag=0;
    cout<<"Enter the array elements as per size"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>array[i];
    }
    cout<<"Enter the element to be searched";
    cin>>a;
    for (i=0;i<5;i++)
    {
        if(a==array[i])
        {
            cout<<"Element found!!"<<endl;
            cout<<"Element found at. "<<i+1<<"th position"<<endl;
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"\n";
    }
    else{
        cout<<"Element not found";
    }
    

return 0;
}
