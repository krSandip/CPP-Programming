#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    int x=7;
    int count=0;

    int i=0;
    int j=n-1;

    while(i<j){
        if(arr[i]+arr[j]==x){
            count+=1;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]>x){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"no. of pairs is : "<<count;

    return 0;
}