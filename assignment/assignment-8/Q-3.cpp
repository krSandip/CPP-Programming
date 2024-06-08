#include<iostream>
using namespace std;

int main ()
{
    int arr[]={5,10,15,20,26};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=10;
    
    bool flag=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]-arr[i]==x){
                flag=1;
            }
        }
    }

    cout<<flag;

    return 0;
}