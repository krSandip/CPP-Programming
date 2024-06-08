#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int sum=0;
    int binary=0;
    int power=1;

    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    while(sum>0){
        int paritydigit=sum%2;
        binary=binary+paritydigit*power;
        power=power*10;
        sum=sum/2;

    }
    cout<<binary<<endl;

    return 0;

}