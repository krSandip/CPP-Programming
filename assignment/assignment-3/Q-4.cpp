#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"n:";
    cin>>n;

    if(n>0){
        cout<<"number entered is positive and it is : "<<n;
    }
    else{
        cout<<"the number is negative and skipped.";
    }
    return 0;
}