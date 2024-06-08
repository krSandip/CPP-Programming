#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1;
    cin>>n2;

    int decimal=0;
    int power=1;

    if(n1>n2){
        while(n1>0){
        int lastdigit=n1%10;
        decimal+=lastdigit*power;
        power*=2;
        n1=n1/10;
    }
    cout<<decimal;
    }
    else{
         while(n2>0){
        int lastdigit=n2%10;
        decimal+=lastdigit*power;
        power*=2;
        n2=n2/10;
    }
    cout<<decimal;
    }
    return 0;
}