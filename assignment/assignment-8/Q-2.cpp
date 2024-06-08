#include<iostream>
using namespace std;

int main()
{
    int arr[]={-1,0,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    int x=2;

    bool flag=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x){
                flag=1;
            }
        }
    }

    cout<<flag;
    return 0;
}