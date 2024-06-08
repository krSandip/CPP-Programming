#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int ans=0;
    int i=1;

    while(n>0){
       int digit=n%10;
       
       ans=ans+digit*i;
       i=i*2;
       n=n/10;
    }
    cout<<ans<<endl;

    return 0;

}