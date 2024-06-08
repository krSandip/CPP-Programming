#include<iostream>
using namespace std;

int main()
{
    int arr[]={0,3,4,2,9,1,5};
    int x=7;

    int count=0;

    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]+arr[j]==x){
                count+=1;
            }
        }
    }
    cout<<"total no. of pairs are : "<<count;

    return 0;
}