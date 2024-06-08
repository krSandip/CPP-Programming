#include<iostream>
using namespace std;
int main()
{
    int x,first,second,third,fourth,fifth,sum;
    cout<<"enter the five digit number x:";
    cin>>x;
    first=x/10000;
    x=x%10000;
    
    second=x/1000;
    x=x%1000;
    
    third=x/100;
    x=x%100;

    fourth=x/10;
    x=x%10;

    fifth=x;

    sum=first+fourth;
    cout<<"sum of first digit:"<<first<<" and fourth digit:"<<fourth<<" is : "<<sum;
    return 0;

}