#include<iostream>
using namespace std;

int main()
{
    int i=1,sum=0,val;
    cout<<"enter the number till which the sum has to be calculated:";
    cin>>val;
    while(i<=val)
    {
        sum+=i;//same as sum=sum+i
        i=i+1;
    }
    cout<<"sum of 1 to " << val <<" = "<<sum<<endl;
    return 0;
}