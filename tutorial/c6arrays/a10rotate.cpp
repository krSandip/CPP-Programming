#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,5,8,3,6,2,4};
    int n=7;
    int k=5;
    int newArray[n];
    int j=0;

    for(int i=(n-k);i<n;i++){
        newArray[j++]=arr[i];
    }

    for(int i=0;i<k;i++){
        newArray[j++]=arr[i];
    }

    for(j=0;j<n;j++){
        cout<<newArray[j]<<" ";
    }

    cout<<endl;
    return 0;

}