#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int newarr[n];
    int element;

    for(int i=0;i<n;i++){
        for(int j=n-1;j>=n;j--){
            for(int k=n-1;k>=0;k--){
                if(abs(arr[i])>abs(arr[j])){
                    newarr[k]=arr[i]*arr[i];
                }
                else{
                    newarr[k]=arr[j]*arr[j];
                }
            }
        }
    }

    for(int k=0;k<n;k++){
        cout<<newarr[k]<<" ";
    }
    return 0;
}