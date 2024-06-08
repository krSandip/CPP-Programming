#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the value of x between 1 and 10^6 : ";
    cin>>x;
    
    if(x%2==0)
    {
        cout<<"number entered is even.";
    }
    else
    {
        cout<<"number entered is odd.";
    }
    return 0;

}