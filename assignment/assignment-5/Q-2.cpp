#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int binary=0;
    int power=1;
    int count=0;

    while(n>0){
        int paritydigit=n%2;
        binary+=paritydigit*power;
        power*=10;
        if(paritydigit==0){
            count++;
        }
        n/=2;

    }
    cout<<"binary representatiion is "<<binary<<endl;
    cout<<"no. of 0's in the binary representation is : "<<count<<endl;
    return 0;
}