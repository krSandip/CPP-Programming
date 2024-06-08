#include<iostream> 
using namespace std;
int main()
{
    int n, first,second, third, sum;
    cout<<"enter the number n : ";
    cin>>n;

    first=n/100;
    n=n%100;

    second=n/10;
    n=n%10;
    third=n;
    
    sum=first+second+third;
    cout<<"sum of digits of the number is : "<<sum;
    return 0;
}